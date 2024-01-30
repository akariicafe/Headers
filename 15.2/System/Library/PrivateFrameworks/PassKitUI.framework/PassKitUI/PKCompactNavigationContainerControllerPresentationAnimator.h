@class PKCompactNavigationContainerController, NSString, UIView, UIViewController;
@protocol UIViewControllerContextTransitioning;

@interface PKCompactNavigationContainerControllerPresentationAnimator : NSObject <UIViewControllerAnimatedTransitioning> {
    id<UIViewControllerContextTransitioning> _transitionContext;
    BOOL _presenting;
    UIViewController *_presentingVC;
    UIView *_presentingView;
    PKCompactNavigationContainerController *_presentedVC;
    UIView *_presentedView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)animateTransition:(id)a0;
- (double)transitionDuration:(id)a0;
- (void).cxx_destruct;
- (void)_updateWithTransitionContext:(id)a0;
- (id)initWithPresenting:(BOOL)a0;

@end
