@class UIImageView, UILabel;

@interface CAMFramerateIndicatorView : UIView

@property (readonly, nonatomic) UIImageView *_borderImageView;
@property (readonly, nonatomic) UILabel *_label;
@property (nonatomic) long long layoutStyle;
@property (nonatomic) long long style;

- (id)initWithLayoutStyle:(long long)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_updateAppearance;
- (long long)_framesPerSecond;
- (void)_commonCAMFramerateIndicatorViewInitializationWithLayoutStyle:(long long)a0;
- (void)_updateForAppearanceChange;

@end
