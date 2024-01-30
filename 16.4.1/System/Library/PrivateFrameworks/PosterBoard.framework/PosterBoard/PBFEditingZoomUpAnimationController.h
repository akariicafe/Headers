@class NSString, UIView;
@protocol UIViewControllerContextTransitioning;

@interface PBFEditingZoomUpAnimationController : PBFEditingZoomAnimationController <PREditingSceneViewControllerObserver, UIViewControllerAnimatedTransitioning>

@property (nonatomic, getter=isContentReady) BOOL contentReady;
@property (nonatomic, getter=isAnimationFinished) BOOL animationFinished;
@property (retain, nonatomic) id<UIViewControllerContextTransitioning> transitionContext;
@property (retain, nonatomic) UIView *dimmingView;
@property (retain, nonatomic) UIView *zoomingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (void).cxx_destruct;
- (void)editingSceneViewControllerDidFinishShowingContent:(id)a0;
- (void)finishTransitionIfPossible;

@end
