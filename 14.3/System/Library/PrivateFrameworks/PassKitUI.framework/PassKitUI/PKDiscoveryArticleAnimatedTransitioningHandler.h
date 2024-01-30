@class PKDiscoveryArticleViewController, NSString, UIView, PKPassGroupsViewController;
@protocol UIViewControllerContextTransitioning;

@interface PKDiscoveryArticleAnimatedTransitioningHandler : NSObject <UIViewControllerAnimatedTransitioning> {
    PKPassGroupsViewController *_presentingVC;
    UIView *_presentingView;
    PKDiscoveryArticleViewController *_presentedVC;
    UIView *_presentedView;
    UIView *_containerView;
    id<UIViewControllerContextTransitioning> _transitionContext;
    BOOL _completed;
}

@property (nonatomic, getter=isPresenting) BOOL presenting;
@property (nonatomic) double duration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)animateTransition:(id)a0;
- (double)transitionDuration:(id)a0;
- (void)_moveCardView:(id)a0 toView:(id)a1 belowView:(id)a2;
- (void)_updateWithTransitionContext:(id)a0;

@end
