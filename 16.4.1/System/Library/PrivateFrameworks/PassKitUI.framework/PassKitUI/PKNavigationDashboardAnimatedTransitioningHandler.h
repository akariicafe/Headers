@class PKPassthroughView, NSString, UIViewPropertyAnimator, PKNavigationDashboardPassViewController, PKPGSVTransitionInterstitialView, UIView, PKPassGroupsViewController;
@protocol UIViewControllerContextTransitioning;

@interface PKNavigationDashboardAnimatedTransitioningHandler : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning> {
    PKPassGroupsViewController *_presentingVC;
    UIView *_presentingView;
    PKNavigationDashboardPassViewController *_presentedVC;
    UIView *_presentedView;
    PKPassthroughView *_navigationItemsView;
    id<UIViewControllerContextTransitioning> _transitionContext;
    double _animationStartTime;
    BOOL _boostedPresentation;
    BOOL _completed;
    UIViewPropertyAnimator *_alphaPropertyAnimator;
}

@property (nonatomic, getter=isPresenting) BOOL presenting;
@property (nonatomic) double duration;
@property (readonly, nonatomic) BOOL wantsInteractiveStart;
@property (retain, nonatomic) PKPGSVTransitionInterstitialView *leadingInterstitialItemView;
@property (retain, nonatomic) PKPGSVTransitionInterstitialView *trailingInterstitialItemView;
@property (nonatomic, getter=wasDragged) BOOL dragged;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) double completionSpeed;
@property (readonly, nonatomic) long long completionCurve;

- (void)startInteractiveTransition:(id)a0;
- (void)animationEnded:(BOOL)a0;
- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (void)cancel;
- (void)_dismiss;
- (void).cxx_destruct;
- (void)completePresentationImmediately;
- (void)_cancelPresentation;
- (void)_clearNavigationItems;
- (void)_completeCancelledPresentation;
- (void)_completePresentation;
- (double)_contentOffsetAnimationDurationForCollectionView:(id)a0;
- (void)_moveGroupView:(id)a0 toView:(id)a1 belowView:(id)a2;
- (void)_startPresentation;
- (void)_updateWithTransitionContext:(id)a0;
- (void)boostPresentation;

@end
