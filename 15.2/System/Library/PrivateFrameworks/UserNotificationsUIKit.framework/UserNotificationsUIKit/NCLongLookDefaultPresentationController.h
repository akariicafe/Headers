@class UIViewController, MTMaterialView;
@protocol NCLongLookDefaultPresentationControllerDelegate;

@interface NCLongLookDefaultPresentationController : PLExpandedPlatterPresentationController {
    UIViewController *_sourceViewController;
    MTMaterialView *_backgroundMaterialView;
}

@property (nonatomic, getter=isPresenting) BOOL presenting;
@property (weak, nonatomic) id<NCLongLookDefaultPresentationControllerDelegate> presentationControllerDelegate;

- (BOOL)shouldPresentInFullscreen;
- (void)presentationTransitionWillBegin;
- (void)dismissalTransitionDidEnd:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForTransitionViewInPresentationSuperview:(id)a0;
- (BOOL)_shouldPresentInCurrentContext;
- (void).cxx_destruct;
- (BOOL)shouldRemovePresentersView;
- (BOOL)_shouldRespectDefinesPresentationContext;
- (id)initWithPresentedViewController:(id)a0 presentingViewController:(id)a1 sourceViewController:(id)a2 sourceView:(id)a3;
- (void)viewControllerAnimator:(id)a0 willBeginPresentationAnimationWithTransitionContext:(id)a1;
- (void)viewControllerAnimator:(id)a0 willBeginDismissalAnimationWithTransitionContext:(id)a1;

@end
