@interface PXRegion : NSObject

- (id)transformedWithAffineTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (double)opacityAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (const struct CGPath { } *)createPathInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)denormalizedWithBasisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)normalizedWithBasisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)valueAtPoint:(struct CGPoint { double x0; double x1; })a0;

@end
