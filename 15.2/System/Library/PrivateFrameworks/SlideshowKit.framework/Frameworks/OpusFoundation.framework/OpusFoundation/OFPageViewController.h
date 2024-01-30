@class UITapGestureRecognizer, NSString, NSDictionary, _OFViewControllerTransitionContext, UIPanGestureRecognizer, OFUIViewController;
@protocol OFPageViewControllerDataSource, OFPageViewControllerDelegate;

@interface OFPageViewController : OFUIViewController <UIGestureRecognizerDelegate> {
    _OFViewControllerTransitionContext *_currentTransitionContext;
    double _progressOffset;
    BOOL _isInteractive;
    BOOL _isForward;
    BOOL _chainsNextTransition;
    double _progressVelocityForChainedTransition;
    UIPanGestureRecognizer *_panGestureRecognizer;
    UITapGestureRecognizer *_tapGestureRecognizer;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _tapRegionInsets;
    struct CGSize { double width; double height; } _tapRegionBreadths;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _effectiveTapRegionInsets;
    struct CGSize { double width; double height; } _effectiveTapRegionBreadths;
    struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *_tapRegions;
    double _pageSpacing;
    NSDictionary *_incomingAndOutgoingViewControllersForManualTransition;
    long long _lastKnownNavigationDirection;
    struct { unsigned char delegateImplementsInteractionControllerForAnimationController : 1; unsigned char delegateImplementsWillStartTransitioning : 1; unsigned char delegateImplementsDidStartTransitioning : 1; unsigned char delegateImplementsWillFinishTransitioning : 1; unsigned char delegateImplementsDidFinishTransitioning : 1; unsigned char delegateImplementsWillStartBouncing : 1; unsigned char delegateImplementsDidFinishBouncing : 1; unsigned char dataSourceSuppliesBeforeViewController : 1; unsigned char dataSourceSuppliesAfterViewController : 1; unsigned char dataSourceSuppliesPageCount : 1; unsigned char dataSourceSuppliesPageNumber : 1; } _flags;
}

@property (nonatomic) id<OFPageViewControllerDataSource> dataSource;
@property (nonatomic) id<OFPageViewControllerDelegate> delegate;
@property (nonatomic) long long navigationOrientation;
@property (readonly) OFUIViewController *viewController;
@property (nonatomic) BOOL panIsEnabled;
@property (nonatomic) BOOL bouncesOnEdges;
@property (nonatomic) BOOL wantsPageControl;
@property (nonatomic) double interactiveTransitionTrackingBoxRadius;
@property (nonatomic) double interactiveTransitionProgressThreshold;
@property (nonatomic) double interactiveTransitionVelocityThreshold;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)viewClass;

- (void)viewWillAppear:(BOOL)a0;
- (void)commonInit;
- (void)loadView;
- (id)_pageControl;
- (void)_contentViewFrameOrBoundsDidChange;
- (void)_pageControlValueChanged:(id)a0;
- (void)_updatePageControlViaDataSourceIfNecessary;
- (void)_handleTapGesture:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)_contentView;
- (void)dealloc;
- (void)_handlePanGesture:(id)a0;
- (void)_startTransition;
- (id)_transitionContextForDirection:(long long)a0 fromViewController:(id)a1 toViewController:(id)a2;
- (void)_beginTransitionWithContext:(id)a0 completionHandler:(id /* block */)a1;
- (void)setViewController:(id)a0 direction:(long long)a1 animated:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)bounceInDirection:(long long)a0 completionHandler:(id /* block */)a1;
- (double)_progressFromRubberBandingProgress:(double)a0;
- (id)_customInteractionControllerForAnimationController:(id)a0;
- (double)_normalizerForFingerTracking;
- (double)_normalizerForBoxTracking;
- (void)_updateInteractiveTransitionForProgress:(double)a0;
- (void)_cancelInteractiveTransitionWithProgressVelocity:(double)a0;
- (void)_resumeInteractiveTransitionWithTranslation:(double)a0;
- (void)_startInteractiveTransitionWithVelocity:(double)a0;
- (void)_finishInteractiveTransitionWithProgress:(double)a0 andProgressVelocity:(double)a1;
- (BOOL)_shouldFinishTransitionWithVelocity:(double)a0;
- (void)_fakeHandlePanGesture;
- (BOOL)usesPageControl;
- (double)_rubberBandingProgressFromProgress:(double)a0;
- (id)_customAnimationControllerForDirection:(long long)a0 fromViewController:(id)a1 toViewController:(id)a2;
- (void)reportTransitionProgress:(double)a0;

@end
