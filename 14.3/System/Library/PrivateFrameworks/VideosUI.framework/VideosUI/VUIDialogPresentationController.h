@class UIVisualEffectView;

@interface VUIDialogPresentationController : UIPresentationController {
    UIVisualEffectView *_backdropView;
}

@property (readonly, nonatomic) UIVisualEffectView *backdropView;
@property (nonatomic) struct CGSize { double width; double height; } modalSize;
@property (copy, nonatomic) id /* block */ completedAnimationBlock;

- (void)dismissalTransitionWillBegin;
- (void)presentationTransitionWillBegin;
- (long long)presentationStyle;
- (id)initWithPresentedViewController:(id)a0 presentingViewController:(id)a1;
- (void)_tapGesture:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_layoutPresentedView;

@end
