@interface CMTimeAsValue : NSValue {
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _time;
}

+ (BOOL)supportsSecureCoding;
+ (id)valueWithCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;

- (long long)integerValue;
- (double)doubleValue;
- (unsigned short)unsignedShortValue;
- (long long)longLongValue;
- (BOOL)isEqualToValue:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (float)floatValue;
- (const char *)objCType;
- (unsigned int)unsignedIntValue;
- (void)getValue:(void *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (char)charValue;
- (unsigned long long)unsignedIntegerValue;
- (id)description;
- (unsigned long long)unsignedLongValue;
- (unsigned char)unsignedCharValue;
- (long long)longValue;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })CMTimeValue;
- (int)intValue;
- (BOOL)boolValue;
- (short)shortValue;
- (Class)classForCoder;
- (unsigned long long)unsignedLongLongValue;
- (void)encodeWithCoder:(id)a0;

@end
