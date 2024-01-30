@interface _NSConstantNumberFloat : _NSConstantNumber

- (const char *)objCType;
- (float)floatValue;
- (unsigned char)unsignedCharValue;
- (int)intValue;
- (void)getValue:(void *)a0;
- (char)charValue;
- (unsigned int)unsignedIntValue;
- (unsigned long long)unsignedLongValue;
- (long long)longValue;
- (long long)longLongValue;
- (short)shortValue;
- (unsigned short)unsignedShortValue;
- (unsigned long long)unsignedLongLongValue;
- (long long)integerValue;
- (double)doubleValue;
- (struct { unsigned char x0 : 8; unsigned char x1 : 4; unsigned char x2 : 1; unsigned char x3 : 1; unsigned int x4 : 18; unsigned short x5[8]; })decimalValue;
- (BOOL)boolValue;

@end
