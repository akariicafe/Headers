@interface PXOneSidedRegion : PXRegion

@property (class, readonly) PXOneSidedRegion *identityRegion;

@property (readonly, nonatomic) double a;
@property (readonly, nonatomic) double b;
@property (readonly, nonatomic) double c;

- (BOOL)isEqual:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (id)transformedWithAffineTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (double)valueAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (const struct CGPath { } *)createPathInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithSideAngle:(double)a0 point:(struct CGPoint { double x0; double x1; })a1 width:(double)a2 offset:(double)a3;
- (id)initWithA:(double)a0 b:(double)a1 c:(double)a2;
- (BOOL)_getIntersectionWithLineFromPoint:(struct CGPoint { double x0; double x1; })a0 toPoint:(struct CGPoint { double x0; double x1; })a1 intersectionFromPoint:(struct CGPoint { double x0; double x1; } *)a2 toPoint:(struct CGPoint { double x0; double x1; } *)a3;
- (id)initWithEdge:(unsigned int)a0 tiltedInset:(struct { double x0; double x1; double x2; })a1 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

@end
