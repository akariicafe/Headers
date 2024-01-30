@interface NUMutableRegion : NURegion

- (void)clear;
- (void)addRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a0;
- (void)setRegion:(id)a0;
- (void)clipToRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a0;
- (void)addRegion:(id)a0;
- (void)growBy:(struct { long long x0; long long x1; })a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)removeRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a0;
- (void)removeRegion:(id)a0;
- (void)clipToRegion:(id)a0;
- (void)diffWithRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a0;
- (void)diffWithRegion:(id)a0;
- (void)flipInRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a0;
- (void)translateBy:(struct { long long x0; long long x1; })a0;
- (void)scaleBy:(struct CGPoint { double x0; double x1; })a0 withRounding:(long long)a1;
- (void)growBy:(struct { long long x0; long long x1; })a0 inRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a1;
- (void)shrinkBy:(struct { long long x0; long long x1; })a0;
- (void)shrinkBy:(struct { long long x0; long long x1; })a0 inRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a1;
- (void)applyOrientation:(long long)a0 imageSize:(struct { long long x0; long long x1; })a1;
- (void)applyAffineTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 roundPolicy:(long long)a1;

@end
