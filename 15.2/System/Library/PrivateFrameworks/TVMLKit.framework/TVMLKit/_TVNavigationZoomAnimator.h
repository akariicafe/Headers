@class NSString;

@interface _TVNavigationZoomAnimator : NSObject <UIViewControllerAnimatedTransitioning>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)animateTransition:(id)a0;
- (double)transitionDuration:(id)a0;
- (void)_beginZoomAnimationFromViewController:(id)a0 toViewController:(id)a1 containerView:(id)a2 completion:(id /* block */)a3;

@end
