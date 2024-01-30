@class UIWindow, NSString, _UIPreviewInteractionHighlighter, UIViewController, UIView, _UIPreviewInteractionViewControllerPresentation;
@protocol UIViewControllerContextTransitioning;

@interface _UIPreviewInteractionViewControllerHelper : NSObject <UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning, UIPreviewPresentationControllerDelegate> {
    _UIPreviewInteractionHighlighter *_highlighter;
    UIWindow *_presentingWindow;
    id /* block */ _presentationCompletion;
    id /* block */ _dismissalCompletion;
    BOOL _shouldActAsAppearanceAnimationController;
    BOOL _shouldUseDefaultPresentationController;
    UIViewController *_previousParentViewController;
    UIView *_previousSuperview;
    id<UIViewControllerContextTransitioning> _currentTransitionContext;
}

@property (readonly, nonatomic) _UIPreviewInteractionViewControllerPresentation *viewControllerPresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)defaultPresentationControllerForPresentedViewController:(id)a0 presentingViewController:(id)a1 sourceViewController:(id)a2;
- (void)presentViewControllerFromViewController:(id)a0 highlighter:(id)a1 presentationCompletion:(id /* block */)a2 dismissalCompletion:(id /* block */)a3;
- (id)customPresentationControllerForPresentedViewController:(id)a0 presentingViewController:(id)a1 sourceViewController:(id)a2;
- (void).cxx_destruct;
- (void)animateTransition:(id)a0;
- (double)transitionDuration:(id)a0;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;
- (id)presentationControllerForPresentedViewController:(id)a0 presentingViewController:(id)a1 sourceViewController:(id)a2;
- (id)initWithViewControllerPresentation:(id)a0;
- (void)dismissViewController;
- (void)_performPresentViewControllerFromViewController:(id)a0;
- (void)_performDismissalCompletionIfNeeded;
- (void)_finalizeAfterViewControllerPresentation;
- (void)previewPresentationController:(id)a0 shouldDismissViewController:(id)a1;

@end
