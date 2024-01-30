@class NSString;

@interface _TVNavigationCrossfadeAnimator : NSObject <UIViewControllerAnimatedTransitioning>

@property (nonatomic) BOOL fadeOutFromView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_beginCrossfadeAnimationFromView:(id)a0 toView:(id)a1 containerView:(id)a2 delay:(double)a3 fadeOutFromView:(BOOL)a4 removeFromView:(BOOL)a5 completion:(id /* block */)a6;

- (void)animateTransition:(id)a0;
- (double)transitionDuration:(id)a0;
- (void)_beginCrossfadeAnimationFromViewController:(id)a0 toViewController:(id)a1 containerView:(id)a2 completion:(id /* block */)a3;

@end
