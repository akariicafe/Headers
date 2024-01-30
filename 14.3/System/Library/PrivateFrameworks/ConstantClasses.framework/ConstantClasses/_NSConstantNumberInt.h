@interface _NSConstantNumberInt : _NSConstantNumber

- (long long)integerValue;
- (double)doubleValue;
- (unsigned short)unsignedShortValue;
- (long long)longLongValue;
- (float)floatValue;
- (const char *)objCType;
- (unsigned int)unsignedIntValue;
- (void)getValue:(void *)a0;
- (char)charValue;
- (struct { unsigned char x0 : 8; unsigned char x1 : 4; unsigned char x2 : 1; unsigned char x3 : 1; unsigned int x4 : 18; unsigned short x5[8]; })decimalValue;
- (unsigned long long)unsignedLongValue;
- (unsigned char)unsignedCharValue;
- (long long)longValue;
- (int)intValue;
- (BOOL)boolValue;
- (short)shortValue;
- (unsigned long long)unsignedLongLongValue;

@end
