@class NSString, UIWindow;

@interface _UIWindowAnimationController : NSObject <UIViewControllerAnimatedTransitioning>

@property (nonatomic) UIWindow *window;
@property (nonatomic) BOOL shouldCrossfade;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)animationControllerWithWindow:(id)a0;

- (void)animateTransition:(id)a0;
- (double)transitionDuration:(id)a0;
- (id)initWithWindow:(id)a0;
- (void)_performLayoutAnimationWithContext:(id)a0 windowGeometryUpdatingBlock:(id /* block */)a1;
- (void)_performCrossfadeAnimationWithContext:(id)a0 windowGeometryUpdatingBlock:(id /* block */)a1;

@end
