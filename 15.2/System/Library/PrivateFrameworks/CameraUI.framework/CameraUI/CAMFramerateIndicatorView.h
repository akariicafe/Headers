@class UIImageView, UILabel;

@interface CAMFramerateIndicatorView : UIView

@property (readonly, nonatomic) UIImageView *_borderImageView;
@property (readonly, nonatomic) UILabel *_label;
@property (nonatomic) long long layoutStyle;
@property (nonatomic) long long style;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)initWithLayoutStyle:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)_updateAppearance;
- (id)initWithCoder:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (long long)_framesPerSecond;
- (void)_commonCAMFramerateIndicatorViewInitializationWithLayoutStyle:(long long)a0;
- (void)_updateForAppearanceChange;

@end
