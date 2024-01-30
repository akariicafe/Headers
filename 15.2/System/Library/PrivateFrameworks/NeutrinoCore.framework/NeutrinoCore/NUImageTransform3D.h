@interface NUImageTransform3D : NUImageTransform {
    struct { void /* unknown type, empty encoding */ columns[4]; } _transformInv;
}

@property (readonly) struct { void /* unknown type, empty encoding */ columns[4]; } transform;

- (struct CGPoint { double x0; double x1; })transformPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (id)inverseTransform;
- (void)nu_updateDigest:(id)a0;
- (id)transformByScaleX:(double)a0 scaleY:(double)a1;
- (id)transformByTranslateX:(double)a0 translateY:(double)a1;
- (id)transformByRotateZ:(double)a0;
- (id)transformByRotateX:(double)a0 y:(double)a1 z:(double)a2;
- (struct { void /* unknown type, empty encoding */ x0[4]; })transformMatrix:(struct { void /* unknown type, empty encoding */ x0[4]; })a0;
- (BOOL)isIdentityImageTransform;
- (id)initWithAffineTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (id)initWithTransform3D:(struct { void /* unknown type, empty encoding */ x0[4]; })a0;
- (BOOL)isEqualToGeometryTransform3D:(id)a0;

@end
