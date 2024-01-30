@interface CMTimeAsValue : NSValue {
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _time;
}

+ (id)valueWithCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
+ (BOOL)supportsSecureCoding;

- (const char *)objCType;
- (float)floatValue;
- (unsigned char)unsignedCharValue;
- (int)intValue;
- (void)getValue:(void *)a0;
- (char)charValue;
- (void)encodeWithCoder:(id)a0;
- (unsigned int)unsignedIntValue;
- (unsigned long long)unsignedLongValue;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })CMTimeValue;
- (unsigned long long)unsignedIntegerValue;
- (long long)longValue;
- (long long)longLongValue;
- (short)shortValue;
- (unsigned short)unsignedShortValue;
- (BOOL)isEqualToValue:(id)a0;
- (unsigned long long)unsignedLongLongValue;
- (long long)integerValue;
- (id)initWithCoder:(id)a0;
- (double)doubleValue;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)boolValue;

@end
