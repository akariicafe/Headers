@class UILabel;

@interface HUGridStatusNumberedBadgeView : HUGridStatusBadgeView

@property (readonly, nonatomic) UILabel *valueLabel;
@property (nonatomic) long long value;

- (void).cxx_destruct;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
