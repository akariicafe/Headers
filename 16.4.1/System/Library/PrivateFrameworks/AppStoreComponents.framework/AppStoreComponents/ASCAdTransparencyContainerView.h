@class ASCAdTransparencyButtonView, UIVisualEffectView, NSString, UILabel;

@interface ASCAdTransparencyContainerView : UIView

@property (readonly, nonatomic) ASCAdTransparencyButtonView *adTransparencyButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIVisualEffectView *backgroundView;
@property (nonatomic, getter=isBackgroundHidden) BOOL backgroundHidden;
@property (copy, nonatomic) NSString *developerName;

+ (double)edgePadding;
+ (double)buttonTextPadding;
+ (id)developerNameFontCompatibleWithTraitCollection:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)updateFont;
- (void)addAdTransparencyTarget:(id)a0 action:(SEL)a1;

@end
