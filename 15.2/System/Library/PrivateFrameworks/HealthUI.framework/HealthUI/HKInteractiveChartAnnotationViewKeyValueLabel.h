@class UIColor, HKSelectedRangeLabel;

@interface HKInteractiveChartAnnotationViewKeyValueLabel : UIView

@property (nonatomic) long long orientation;
@property (readonly, nonatomic) HKSelectedRangeLabel *keyLabel;
@property (readonly, nonatomic) HKSelectedRangeLabel *valueLabel;
@property (retain, nonatomic) UIColor *textColor;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)_layoutSubviewsVertically;
- (void)_layoutSubviewsHorizontally;

@end
