@class UIVisualEffectView, UIView;

@interface SiriUIContentPlatterSeparatorView : UIView

@property (retain, nonatomic) UIVisualEffectView *backgroundView;
@property (retain, nonatomic) UIView *backgroundViewSmall;
@property (nonatomic) long long separatorType;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
