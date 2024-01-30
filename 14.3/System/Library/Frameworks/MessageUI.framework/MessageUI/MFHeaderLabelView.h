@interface MFHeaderLabelView : UILabel

+ (id)_defaultColor;

- (void)_updateTextColor;
- (void)tintColorDidChange;
- (id)effectiveTextColor;
- (struct CGPoint { double x0; double x1; })baselinePoint;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
