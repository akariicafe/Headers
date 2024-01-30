@interface VTUIButton : UIButton

+ (id)_vtuiButtonWithPrimaryStyle;
+ (id)_vtuiButtonWithPrimaryStyleForNormalAndDisabledState;
+ (id)_vtuiButtonWithSecondaryStyle;
+ (id)_vtuiProximityBackgroundButtonImageWithColor:(id)a0;
+ (id)_vtuiProximityButtonWithPRXStyle;
+ (id)_vtuiProximityButtonWithPrimaryStyle;
+ (id)vtuiBackgroundButtonImageWithColor:(id)a0;

- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;

@end
