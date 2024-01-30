@class NSString;

@interface GKDashboardPresentationController : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate>

@property (nonatomic) BOOL presenting;
@property (nonatomic) double transitionDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)presentViewController:(id)a0 presentingViewController:(id)a1 animated:(BOOL)a2;

- (void)animationEnded:(BOOL)a0;
- (id)init;
- (void)animateTransition:(id)a0;
- (double)transitionDuration:(id)a0;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;

@end
