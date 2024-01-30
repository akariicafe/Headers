@interface CMTimeAsValue : NSValue {
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _time;
}

+ (BOOL)supportsSecureCoding;
+ (id)valueWithCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;

- (unsigned int)unsignedIntValue;
- (float)floatValue;
- (const char *)objCType;
- (unsigned long long)unsignedLongValue;
- (char)charValue;
- (unsigned short)unsignedShortValue;
- (long long)longLongValue;
- (long long)longValue;
- (unsigned long long)unsignedIntegerValue;
- (BOOL)isEqualToValue:(id)a0;
- (short)shortValue;
- (unsigned long long)unsignedLongLongValue;
- (int)intValue;
- (unsigned char)unsignedCharValue;
- (void)getValue:(void *)a0;
- (BOOL)boolValue;
- (void)encodeWithCoder:(id)a0;
- (double)doubleValue;
- (long long)integerValue;
- (id)description;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })CMTimeValue;
- (Class)classForCoder;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
