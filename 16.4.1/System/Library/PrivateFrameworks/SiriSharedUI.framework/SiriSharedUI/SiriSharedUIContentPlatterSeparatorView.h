@class UIView;

@interface SiriSharedUIContentPlatterSeparatorView : UIView

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *backgroundViewSmall;
@property (nonatomic) long long separatorType;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setupBackgroundView;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (double)_scale;
- (void)_setupBackgroundViewSmall;

@end
