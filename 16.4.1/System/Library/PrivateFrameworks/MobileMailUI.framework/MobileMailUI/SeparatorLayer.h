@class UIColor;

@interface SeparatorLayer : UIView

@property (retain, nonatomic) UIColor *tintColor;
@property (nonatomic) unsigned long long axis;

+ (double)separatorHeight;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;

@end
