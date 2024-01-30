@class NSString, BSUIAnimationFactory, _UIViewControllerTransitionContext;
@protocol UIViewControllerTransitionCoordinator;

@interface NCAnimationCoordinator : NSObject <UIViewControllerAnimatedTransitioning> {
    BSUIAnimationFactory *_factory;
    _UIViewControllerTransitionContext *_transitionContext;
}

@property (nonatomic) unsigned long long animationOptions;
@property (nonatomic, getter=isDurationInherited) BOOL durationInherited;
@property (readonly, weak, nonatomic) id<UIViewControllerTransitionCoordinator> transitionCoordinator;
@property (copy, nonatomic) id /* block */ animations;
@property (copy, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)animationCoordinatorWithDuration:(double)a0;

- (void)animationEnded:(BOOL)a0;
- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (void).cxx_destruct;
- (void)animate:(id /* block */)a0 completion:(id /* block */)a1;
- (id)initWithAnimationFactory:(id)a0;
- (void)viewOfChildContainer:(id)a0 willChangeToSize:(struct CGSize { double x0; double x1; })a1;

@end
