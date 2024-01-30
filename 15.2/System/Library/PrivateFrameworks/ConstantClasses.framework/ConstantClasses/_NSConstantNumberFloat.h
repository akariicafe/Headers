@interface _NSConstantNumberFloat : _NSConstantNumber

- (unsigned int)unsignedIntValue;
- (float)floatValue;
- (const char *)objCType;
- (unsigned long long)unsignedLongValue;
- (char)charValue;
- (unsigned short)unsignedShortValue;
- (long long)longLongValue;
- (long long)longValue;
- (short)shortValue;
- (unsigned long long)unsignedLongLongValue;
- (int)intValue;
- (unsigned char)unsignedCharValue;
- (void)getValue:(void *)a0;
- (BOOL)boolValue;
- (struct { unsigned char x0 : 8; unsigned char x1 : 4; unsigned char x2 : 1; unsigned char x3 : 1; unsigned int x4 : 18; unsigned short x5[8]; })decimalValue;
- (double)doubleValue;
- (long long)integerValue;

@end
