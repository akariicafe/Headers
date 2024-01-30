@class _UIInteractiveHighlightEnvironment, UIVisualEffectView, _UIPortalView, UIView;

@interface _UIInteractiveHighlightEffect : NSObject

@property (weak, nonatomic) UIView *view;
@property (weak, nonatomic) UIVisualEffectView *effectView;
@property (retain, nonatomic) _UIInteractiveHighlightEnvironment *environment;
@property (weak, nonatomic) UIView *superview;
@property (weak, nonatomic) _UIPortalView *portalView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } preferredContentInsets;

- (void)dealloc;
- (void).cxx_destruct;
- (void)applyBackgroundEffectWithMagnitude:(double)a0 interactive:(BOOL)a1 completion:(id /* block */)a2;
- (void)finalizeEffect;

@end
