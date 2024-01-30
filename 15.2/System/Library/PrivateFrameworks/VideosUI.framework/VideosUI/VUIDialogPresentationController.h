@class UIVisualEffectView;

@interface VUIDialogPresentationController : UIPresentationController {
    UIVisualEffectView *_backdropView;
}

@property (readonly, nonatomic) UIVisualEffectView *backdropView;
@property (nonatomic) struct CGSize { double width; double height; } modalSize;
@property (copy, nonatomic) id /* block */ completedAnimationBlock;

- (void)presentationTransitionWillBegin;
- (void)dismissalTransitionWillBegin;
- (id)initWithPresentedViewController:(id)a0 presentingViewController:(id)a1;
- (long long)presentationStyle;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_tapGesture:(id)a0;
- (void)_layoutPresentedView;

@end
