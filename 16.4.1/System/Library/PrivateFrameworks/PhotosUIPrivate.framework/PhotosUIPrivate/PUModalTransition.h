@class NSString;

@interface PUModalTransition : PUViewControllerTransition <UIViewControllerTransitioningDelegate>

@property (nonatomic, setter=_setOperation:) long long _operation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)presentingViewController;
- (id)interactionControllerForDismissal:(id)a0;
- (id)animationControllerForDismissedController:(id)a0;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (void)animateTransition:(id)a0;
- (id)interactionControllerForPresentation:(id)a0;
- (void)cancelInteractiveTransition;
- (void)finishInteractiveTransition;
- (void)completeInteractiveDismissTransitionFinished:(BOOL)a0;
- (void)completeInteractivePresentTransitionFinished:(BOOL)a0;
- (void)imageModulationIntensityDidChange;
- (void)transitionWillDismissInteractively:(BOOL)a0;
- (void)transitionWillPresentInteractively:(BOOL)a0;

@end
