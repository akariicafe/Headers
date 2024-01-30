@interface CPTextBox : CPRegion {
    double rotationAngle;
}

- (double)rotationAngle;
- (void)setRotationAngle:(double)a0;
- (id)description;
- (BOOL)isRotated;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (id)init;
- (void)accept:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isBoxRegion;

@end
