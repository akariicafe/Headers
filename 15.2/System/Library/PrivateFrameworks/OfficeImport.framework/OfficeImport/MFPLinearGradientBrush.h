@class OITSUColor;

@interface MFPLinearGradientBrush : MFPGradientBrush {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mBounds;
    OITSUColor *mStartColor;
    OITSUColor *mEndColor;
}

- (id)startColor;
- (id)endColor;
- (void)setEndColor:(id)a0;
- (void)setStartColor:(id)a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)createShading;

@end
