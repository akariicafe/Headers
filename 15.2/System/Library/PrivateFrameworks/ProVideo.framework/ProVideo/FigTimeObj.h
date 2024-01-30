@interface FigTimeObj : NSObject <NSCopying, NSSecureCoding> {
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _time;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)timeWithTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
+ (BOOL)classIsAbstract;

- (void)getValue:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a0;
- (long long)compare:(id)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })time;
- (void)encodeWithCoder:(id)a0;
- (void)setTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)initWithFigTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (long long)compareWithTime:(id)a0;

@end
