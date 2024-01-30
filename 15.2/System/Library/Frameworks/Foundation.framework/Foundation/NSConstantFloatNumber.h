@interface NSConstantFloatNumber : NSNumber {
    float _value;
}

+ (id)new;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (unsigned int)unsignedIntValue;
- (float)floatValue;
- (const char *)objCType;
- (unsigned long long)unsignedLongValue;
- (char)charValue;
- (unsigned short)unsignedShortValue;
- (void)getValue:(void *)a0 size:(unsigned long long)a1;
- (long long)longLongValue;
- (long long)longValue;
- (unsigned long long)unsignedIntegerValue;
- (short)shortValue;
- (unsigned long long)unsignedLongLongValue;
- (int)intValue;
- (unsigned char)unsignedCharValue;
- (void)getValue:(void *)a0;
- (BOOL)boolValue;
- (struct { unsigned char x0 : 8; unsigned char x1 : 4; unsigned char x2 : 1; unsigned char x3 : 1; unsigned int x4 : 18; unsigned short x5[8]; })decimalValue;
- (double)doubleValue;
- (unsigned long long)retainCount;
- (long long)integerValue;
- (id)retain;
- (id)autorelease;
- (BOOL)_isDeallocating;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copy;
- (void)dealloc;
- (BOOL)_tryRetain;
- (oneway void)release;

@end
