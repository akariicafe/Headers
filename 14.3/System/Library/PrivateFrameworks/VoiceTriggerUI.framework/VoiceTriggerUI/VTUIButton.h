@interface VTUIButton : UIButton

+ (id)_vtuiButtonWithPrimaryStyle;
+ (id)_vtuiProximityButtonWithPrimaryStyle;
+ (id)_vtuiButtonWithSecondaryStyle;
+ (id)_vtuiBackgroundButtonImage;
+ (id)_vtuiProximityBackgroundButtonImage;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;

@end
