@interface FigTimeObj : NSObject <NSCopying, NSSecureCoding> {
    struct FigTime { struct { long long value; int timescale; unsigned int flags; long long epoch; } _t; } _time;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)timeWithTime:(struct FigTime { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; })a0;
+ (BOOL)classIsAbstract;

- (struct FigTime { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; })time;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)getValue:(struct FigTime { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; } *)a0;
- (long long)compare:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (void)setTime:(struct FigTime { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; })a0;
- (id).cxx_construct;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithFigTime:(struct FigTime { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; })a0;
- (long long)compareWithTime:(id)a0;

@end
