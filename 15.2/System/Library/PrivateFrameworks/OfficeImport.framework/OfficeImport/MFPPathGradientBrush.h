@class NSArray, OITSUBezierPath, OITSUColor;

@interface MFPPathGradientBrush : MFPGradientBrush {
    OITSUColor *mCenterColor;
    struct CGPoint { double x; double y; } mCenterPoint;
    NSArray *mSurroundColors;
    OITSUBezierPath *mPath;
}

- (id)startColor;
- (id)endColor;
- (void)setPath:(id)a0;
- (void)setCenterPoint:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)setCenterColor:(id)a0;
- (void)setSurroundColors:(id)a0;
- (void)createShading;

@end
