@class UIView, AVInteractiveTransitionGestureTracker, NSString, AVPresentationController, AVTransition, AVDisplayLink, AVPresentationContext, CAMediaTimingFunction;
@protocol AVTransitionDriver, AVTransitionControllerDelegate;

@interface AVTransitionController : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning, AVTransitionDelegate, AVTransitionDriverDelegate, UIViewControllerTransitioningDelegate>

@property (nonatomic) long long state;
@property (retain, nonatomic) AVDisplayLink *displayLink;
@property (retain, nonatomic) AVTransition *activeTransition;
@property (readonly, nonatomic) AVInteractiveTransitionGestureTracker *gestureTracker;
@property (weak, nonatomic) UIView *sourceView;
@property (weak, nonatomic) AVPresentationController *presentationController;
@property (copy, nonatomic) id /* block */ transitionDidBeginHandler;
@property (retain, nonatomic) CAMediaTimingFunction *easeInFunction;
@property (retain, nonatomic) CAMediaTimingFunction *easeOutFunction;
@property (nonatomic) struct CGPoint { double x; double y; } touchGravity;
@property (readonly, weak, nonatomic) AVPresentationContext *presentationContext;
@property (weak, nonatomic) id<AVTransitionControllerDelegate> delegate;
@property (retain, nonatomic) id<AVTransitionDriver> interactiveGestureTracker;
@property (weak, nonatomic) UIView *interactionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) double completionSpeed;
@property (readonly, nonatomic) long long completionCurve;
@property (readonly, nonatomic) BOOL wantsInteractiveStart;

- (id)animationControllerForDismissedController:(id)a0;
- (void)startInteractiveTransition:(id)a0;
- (id)interactionControllerForPresentation:(id)a0;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (void)animateTransition:(id)a0;
- (id)presentationControllerForPresentedViewController:(id)a0 presentingViewController:(id)a1 sourceViewController:(id)a2;
- (double)transitionDuration:(id)a0;
- (id)interactionControllerForDismissal:(id)a0;
- (void).cxx_destruct;
- (void)animationEnded:(BOOL)a0;
- (void)transitionWillComplete:(id)a0 success:(BOOL)a1 continueBlock:(id /* block */)a2;
- (id)transitionPresentedViewBackgroundColor:(id)a0;
- (id)transitionBackgroundViewBackgroundColor:(id)a0;
- (BOOL)transitionDriver:(id)a0 gestureRecognizer:(id)a1 shouldReceiveTouch:(id)a2;
- (BOOL)transitionDriver:(id)a0 shouldDriveTransitionInteractionOfType:(long long)a1;
- (void)transitionDriver:(id)a0 didBeginTrackingTransitionInteraction:(long long)a1 readyToProceedHandler:(id /* block */)a2;
- (void)transitionDriverDidContinueInteraction:(id)a0;
- (void)transitionDriverDidCancelInteraction:(id)a0;
- (void)transitionDriverDidFinishInteraction:(id)a0;
- (void)addTransitionDriver:(id)a0 toView:(id)a1;
- (void)beginFullScreenPresentationOfViewController:(id)a0 fromView:(id)a1 isInteractive:(BOOL)a2 completion:(id /* block */)a3;
- (void)beginFullScreenDismissalOfViewController:(id)a0 animated:(BOOL)a1 isInteractive:(BOOL)a2 completion:(id /* block */)a3;
- (void)_cancelTransition;
- (void)_finishTransition;
- (void)_fireDidBeginHandlerIfNeeded;
- (void)_startObservingAnimatorProgress;

@end
