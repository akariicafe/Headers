@class UIView;
@protocol SBHFocusProxyable;

@interface SBHFocusProxyView : UIView

@property (readonly, weak, nonatomic) UIView<SBHFocusProxyable> *proxyableView;
@property (readonly, nonatomic) double padding;

- (BOOL)canBecomeFocused;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithProxyableView:(id)a0;

@end
