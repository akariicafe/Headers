@class NSArray;

@interface NUCompoundTransform : NUGeometryTransform {
    NSArray *_transforms;
}

- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })transformPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)description;
- (id)inverseTransform;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })transformTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (struct { void /* unknown type, empty encoding */ x0[4]; })transformMatrix:(struct { void /* unknown type, empty encoding */ x0[4]; })a0;
- (id)initWithSrcTransforms:(id)a0 dstTransforms:(id)a1;
- (id)initWithTransforms:(id)a0;

@end
