@class NSString;

@interface _UIProgressiveBlurPresentationAnimator : NSObject <UIViewControllerAnimatedTransitioning>

@property (readonly, nonatomic, getter=isPresenting) BOOL presenting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)alphaAnimationFactory;
+ (id)transformAnimationFactory;

- (void)animateTransition:(id)a0;
- (double)transitionDuration:(id)a0;
- (id)initForPresenting:(BOOL)a0;

@end
