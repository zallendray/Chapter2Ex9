/*
File Name Chapter2Ex9
Programmer: Mark Goldstien
Date: 09/25
Requirements:
Find the size of the various data types and output to screen.
*/

#include <iostream>
using namespace std;

int main()
{
    int number = 1;
    bool tf = true;
    char alpha = 'c';
    string phrase = "This is a test";
    float dec1 = 2.5;
    double bigDec = 3.14159265;
   
    cout << sizeof(number) << endl;
    cout << sizeof(tf) << endl;
    cout << sizeof(alpha) << endl;
    cout << sizeof(phrase) << endl;
    cout << sizeof(dec1) << endl;
    cout << sizeof(bigDec) << endl;

    cout << "Hello World!\n";
}
