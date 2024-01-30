@class UILabel;

@interface _SKUICounterTimeFieldView : UIView

@property (readonly, nonatomic) UILabel *labelLabel;
@property (readonly, nonatomic) UILabel *valueLabel;
@property (nonatomic) unsigned long long visibilityField;

- (void).cxx_destruct;
- (void)setBackgroundColor:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
