@interface PKPhoneHeroView : UIView

@property (readonly, nonatomic) double deviceCornerRadius;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_updateCornerRadius;
- (void)traitCollectionDidChange:(id)a0;

@end
