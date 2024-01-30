@class UIPresentationController, NSString;

@interface PLExpandedPlatterTransitioningDelegate : NSObject <UIViewControllerTransitioningDelegate>

@property (retain, nonatomic, getter=_presentationController, setter=_setPresentationController:) UIPresentationController *presentationController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)animationControllerForDismissedController:(id)a0;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)presentationControllerForPresentedViewController:(id)a0 presentingViewController:(id)a1 sourceViewController:(id)a2;
- (void).cxx_destruct;
- (void)viewControllerAnimator:(id)a0 willBeginDismissalAnimationWithTransitionContext:(id)a1;
- (void)viewControllerAnimator:(id)a0 willBeginPresentationAnimationWithTransitionContext:(id)a1;

@end
