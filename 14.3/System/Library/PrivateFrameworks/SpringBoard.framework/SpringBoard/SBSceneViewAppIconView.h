@class UILabel, PLPlatterView, SBIconImageView;

@interface SBSceneViewAppIconView : UIView

@property (readonly, nonatomic) UILabel *label;
@property (readonly, nonatomic) PLPlatterView *shadowView;
@property (readonly, nonatomic) SBIconImageView *imageView;

- (id)initWithIcon:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
