@class NSString;

@interface WFCompactPlatterPresentationAnimator : NSObject <UIViewControllerAnimatedTransitioning>

@property (readonly, nonatomic, getter=isPresenting) BOOL presenting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)animateTransition:(id)a0;
- (double)transitionDuration:(id)a0;
- (id)initForPresenting:(BOOL)a0;
- (void)_animatePresentationWithTransitionContext:(id)a0;
- (void)_animateDismissalWithTransitionContext:(id)a0;

@end
