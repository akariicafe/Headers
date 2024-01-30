@interface NUGeometryTransform : NSObject

- (struct CGPoint { double x0; double x1; })transformPoint:(struct CGPoint { double x0; double x1; })a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)inverseTransform;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })transformTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (struct { void /* unknown type, empty encoding */ x0[4]; })transformMatrix:(struct { void /* unknown type, empty encoding */ x0[4]; })a0;

@end
