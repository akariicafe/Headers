@class UIView, NSString, NSArray, _PXStoryTransitionEndPointInfo, PXDisplayLink, UIPercentDrivenInteractiveTransition, UIViewController, PXStoryViewControllerItemPlacementInterpolator, PXStoryItemPlacement;
@protocol PXStoryViewControllerTransitionEndPoint, UIViewControllerContextTransitioning;

@interface PXStoryViewControllerTransition : PXObservable <UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning, PXStoryMutableViewControllerTransition>

@property (readonly, weak, nonatomic) UIViewController *presentedViewController;
@property (weak, nonatomic) UIViewController *presentingViewController;
@property (nonatomic) long long transitionKind;
@property (nonatomic) BOOL isEnding;
@property (retain, nonatomic) UIPercentDrivenInteractiveTransition *interactiveTransition;
@property (retain, nonatomic) id<UIViewControllerContextTransitioning> transitionContext;
@property (nonatomic) double transitionDuration;
@property (retain, nonatomic) UIView *fromContentView;
@property (retain, nonatomic) UIView *toContentView;
@property (copy, nonatomic) id /* block */ animationUpdateBlock;
@property (retain, nonatomic) PXDisplayLink *displayLink;
@property (retain, nonatomic) PXStoryViewControllerItemPlacementInterpolator *itemPlacementInterpolator;
@property (copy, nonatomic) NSArray *endPointInfos;
@property (readonly, nonatomic) _PXStoryTransitionEndPointInfo *summaryEndPointInfo;
@property (readonly, nonatomic) _PXStoryTransitionEndPointInfo *detailEndPointInfo;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) id<PXStoryViewControllerTransitionEndPoint> summaryEndPoint;
@property (readonly, nonatomic) id<PXStoryViewControllerTransitionEndPoint> detailEndPoint;
@property (nonatomic) BOOL isInteractive;
@property (readonly, nonatomic) UIViewController *summaryViewController;
@property (readonly, nonatomic) UIViewController *detailViewController;
@property (readonly, nonatomic) PXStoryItemPlacement *summaryItemOriginalPlacement;
@property (readonly, nonatomic) PXStoryItemPlacement *detailItemOriginalPlacement;
@property (readonly, nonatomic) BOOL isVerticalOnly;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double fractionCompleted;
@property (copy, nonatomic) PXStoryItemPlacement *summaryItemPlacementOverride;
@property (copy, nonatomic) PXStoryItemPlacement *detailItemPlacementOverride;

+ (void)prepareTransitionFromSummaryViewController:(id)a0 toPresentedViewController:(id)a1 detailViewController:(id)a2;
+ (id)_createTransitionWithSummaryViewController:(id)a0 presentedViewController:(id)a1 detailViewController:(id)a2;
+ (id)transitionWithDetailViewController:(id)a0;
+ (id)_transitionWithDetailViewController:(id)a0 createIfNeeded:(BOOL)a1 verticalOnly:(BOOL)a2;
+ (void)prepareDismissalOfDetailViewController:(id)a0;
+ (id)interactiveDismissalOfDetailViewController:(id)a0;

- (void)_transitionDidEnd:(BOOL)a0;
- (id)animationControllerForDismissedController:(id)a0;
- (void)finish;
- (id)interactionControllerForPresentation:(id)a0;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (void)animateTransition:(id)a0;
- (void)performChanges:(id /* block */)a0;
- (double)transitionDuration:(id)a0;
- (void)_handleDisplayLink:(id)a0;
- (id)interactionControllerForDismissal:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)cancel;
- (void)installCompletionHandler:(id /* block */)a0;
- (void)setSummaryItemOriginalPlacement:(id)a0;
- (void)setDetailItemOriginalPlacement:(id)a0;
- (void)setIsVerticalOnly:(BOOL)a0;
- (id)_initWithSummaryViewController:(id)a0 presentedViewController:(id)a1 detailViewController:(id)a2;
- (BOOL)_isTransitionAllowedWithKind:(long long)a0;
- (void)_prepareTransitionAnimationWithReadinessHandler:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (void)_endTransitionAnimation:(BOOL)a0;
- (void)_transitionWillBegin;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_rectInContainerViewFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inCoordinateSpace:(id)a1 inContentViewController:(id)a2;
- (BOOL)_isContentViewControllerHidden:(id)a0;
- (id)_transitionViewControllerForContentViewController:(id)a0;
- (void)_transitionDidUpdateWithTransitionTime:(double)a0;

@end
