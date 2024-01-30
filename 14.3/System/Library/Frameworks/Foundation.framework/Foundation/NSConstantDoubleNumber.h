@interface NSConstantDoubleNumber : NSNumber {
    double _value;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)new;

- (long long)integerValue;
- (double)doubleValue;
- (unsigned short)unsignedShortValue;
- (id)init;
- (long long)longLongValue;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (float)floatValue;
- (oneway void)release;
- (BOOL)_isDeallocating;
- (void)dealloc;
- (BOOL)_tryRetain;
- (const char *)objCType;
- (unsigned int)unsignedIntValue;
- (unsigned long long)retainCount;
- (void)getValue:(void *)a0;
- (id)copy;
- (char)charValue;
- (unsigned long long)unsignedIntegerValue;
- (void)getValue:(void *)a0 size:(unsigned long long)a1;
- (struct { unsigned char x0 : 8; unsigned char x1 : 4; unsigned char x2 : 1; unsigned char x3 : 1; unsigned int x4 : 18; unsigned short x5[8]; })decimalValue;
- (unsigned long long)unsignedLongValue;
- (id)retain;
- (unsigned char)unsignedCharValue;
- (long long)longValue;
- (int)intValue;
- (BOOL)boolValue;
- (short)shortValue;
- (unsigned long long)unsignedLongLongValue;

@end
