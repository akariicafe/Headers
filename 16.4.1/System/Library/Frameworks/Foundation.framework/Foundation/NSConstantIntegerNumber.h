@interface NSConstantIntegerNumber : NSNumber {
    const char *_encoding;
    long long _value;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)new;

- (const char *)objCType;
- (id)retain;
- (float)floatValue;
- (unsigned char)unsignedCharValue;
- (int)intValue;
- (void)getValue:(void *)a0;
- (void)getValue:(void *)a0 size:(unsigned long long)a1;
- (char)charValue;
- (unsigned int)unsignedIntValue;
- (unsigned long long)unsignedLongValue;
- (unsigned long long)unsignedIntegerValue;
- (long long)longValue;
- (long long)longLongValue;
- (short)shortValue;
- (unsigned short)unsignedShortValue;
- (unsigned long long)unsignedLongLongValue;
- (oneway void)release;
- (long long)integerValue;
- (double)doubleValue;
- (BOOL)_tryRetain;
- (struct { unsigned char x0 : 8; unsigned char x1 : 4; unsigned char x2 : 1; unsigned char x3 : 1; unsigned int x4 : 18; unsigned short x5[8]; })decimalValue;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)copy;
- (BOOL)_isDeallocating;
- (id)init;
- (id)autorelease;
- (unsigned long long)retainCount;
- (BOOL)boolValue;

@end
