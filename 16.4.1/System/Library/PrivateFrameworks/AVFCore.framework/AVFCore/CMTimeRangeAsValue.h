@interface CMTimeRangeAsValue : NSValue {
    struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } _timeRange;
}

+ (BOOL)supportsSecureCoding;
+ (id)valueWithCMTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;

- (const char *)objCType;
- (void)getValue:(void *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToValue:(id)a0;
- (id)initWithCoder:(id)a0;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })CMTimeRangeValue;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;

@end
