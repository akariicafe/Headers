@interface ASCAdTransparencyButtonView : UIButton

+ (id)titleColor;
+ (id)selectedTitleColor;
+ (id)adTransparencyButtonImage;
+ (id)adButtonTitleLocalized;
+ (id)buttonFontCompatibleWithTraitColletion:(id)a0;

- (void)setLoading:(BOOL)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateFont;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)updateInsets;

@end
