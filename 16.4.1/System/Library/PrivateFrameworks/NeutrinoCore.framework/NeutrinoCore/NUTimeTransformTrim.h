@interface NUTimeTransformTrim : NUGeometryTransform

@property (readonly) struct { long long value; int timescale; unsigned int flags; long long epoch; } beginTime;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithTrimBeginTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)inverseTransform;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })transformTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;

@end
