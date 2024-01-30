@interface VTUIButton : UIButton

+ (id)_vtuiButtonWithPrimaryStyle;
+ (id)_vtuiProximityButtonWithPrimaryStyle;
+ (id)_vtuiButtonWithSecondaryStyle;
+ (id)_vtuiProximityButtonWithPRXStyle;
+ (id)vtuiBackgroundButtonImageWithColor:(id)a0;
+ (id)_vtuiProximityBackgroundButtonImageWithColor:(id)a0;
+ (id)_vtuiButtonWithPrimaryStyleForNormalAndDisabledState;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;

@end
