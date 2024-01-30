@class UIView;

@interface _TVVibrancyContainerView : _TVVisualEffectView

@property (readonly, weak, nonatomic) UIView *containedView;

- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)initWithEffect:(id)a0 containingView:(id)a1;

@end
