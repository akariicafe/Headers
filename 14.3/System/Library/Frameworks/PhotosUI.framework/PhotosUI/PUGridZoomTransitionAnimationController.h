@class PUZoomableGridTransition;
@protocol UIViewControllerContextTransitioning;

@interface PUGridZoomTransitionAnimationController : _UICollectionViewControllerLayoutToLayoutTransition {
    id<UIViewControllerContextTransitioning> _transitionContext;
}

@property (readonly, nonatomic) PUZoomableGridTransition *gridTransitionInfo;

- (void)animationEnded:(BOOL)a0;
- (void).cxx_destruct;
- (void)animateTransition:(id)a0;
- (double)transitionDuration:(id)a0;

@end
