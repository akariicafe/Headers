@class UIViewController, MTMaterialView;
@protocol NCLongLookDefaultPresentationControllerDelegate;

@interface NCLongLookDefaultPresentationController : PLExpandedPlatterPresentationController {
    UIViewController *_sourceViewController;
    MTMaterialView *_backgroundMaterialView;
}

@property (nonatomic, getter=isPresenting) BOOL presenting;
@property (weak, nonatomic) id<NCLongLookDefaultPresentationControllerDelegate> presentationControllerDelegate;

- (BOOL)_shouldRespectDefinesPresentationContext;
- (void)presentationTransitionWillBegin;
- (BOOL)shouldPresentInFullscreen;
- (void)dismissalTransitionDidEnd:(BOOL)a0;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForTransitionViewInPresentationSuperview:(id)a0;
- (BOOL)shouldRemovePresentersView;
- (BOOL)_shouldPresentInCurrentContext;
- (id)initWithPresentedViewController:(id)a0 presentingViewController:(id)a1 sourceViewController:(id)a2 sourceView:(id)a3;
- (void)viewControllerAnimator:(id)a0 willBeginPresentationAnimationWithTransitionContext:(id)a1;
- (void)viewControllerAnimator:(id)a0 willBeginDismissalAnimationWithTransitionContext:(id)a1;

@end
