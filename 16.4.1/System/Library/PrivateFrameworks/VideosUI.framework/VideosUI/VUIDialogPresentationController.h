@class UIVisualEffectView;

@interface VUIDialogPresentationController : UIPresentationController {
    UIVisualEffectView *_backdropView;
}

@property (readonly, nonatomic) UIVisualEffectView *backdropView;
@property (nonatomic) struct CGSize { double width; double height; } modalSize;
@property (copy, nonatomic) id /* block */ completedAnimationBlock;

- (long long)presentationStyle;
- (void)dismissalTransitionWillBegin;
- (void)_tapGesture:(id)a0;
- (void)dealloc;
- (void)presentationTransitionWillBegin;
- (id)initWithPresentedViewController:(id)a0 presentingViewController:(id)a1;
- (void).cxx_destruct;
- (void)_layoutPresentedView;

@end
