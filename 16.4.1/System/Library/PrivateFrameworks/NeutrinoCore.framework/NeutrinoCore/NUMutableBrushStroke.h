@interface NUMutableBrushStroke : NUBrushStroke

@property (nonatomic) float radius;
@property (nonatomic) float softness;
@property (nonatomic) float opacity;
@property (nonatomic) long long pressureMode;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)points;
- (void)appendPoint:(struct { float x0; float x1; float x2; })a0;
- (void)applyTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (void)appendPoints:(struct { float x0; float x1; float x2; } *)a0 pointCount:(long long)a1;
- (id)initWithRadius:(float)a0 softness:(float)a1 opacity:(float)a2 clipRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a3 pressureMode:(long long)a4;

@end
