@interface CPRotation : CPZone {
    double rotationAngle;
}

- (double)rotationAngle;
- (void)setRotationAngle:(double)a0;
- (id)init;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (void)accept:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })renderedBounds;

@end
