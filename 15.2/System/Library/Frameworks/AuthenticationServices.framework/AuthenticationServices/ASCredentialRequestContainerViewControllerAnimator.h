@class NSString;

@interface ASCredentialRequestContainerViewControllerAnimator : NSObject <UIViewControllerAnimatedTransitioning>

@property (readonly, nonatomic, getter=isPresenting) BOOL presenting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)animateTransition:(id)a0;
- (double)transitionDuration:(id)a0;
- (id)init;
- (id)initWithPresenting:(BOOL)a0;
- (id)_viewControllerForTransitionContext:(id)a0;

@end
