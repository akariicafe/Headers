@interface ASCAdTransparencyButtonView : UIButton

+ (id)buttonFont;
+ (id)adTransparencyButtonImage;
+ (id)adButtonTitleLocalized;

- (void)setLoading:(BOOL)a0;
- (struct CGSize { double x0; double x1; })size;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct JUMeasurements { double x0; double x1; double x2; double x3; })measurementsWithFitting:(struct CGSize { double x0; double x1; })a0 in:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)encodeWithCoder:(id)a0;

@end
