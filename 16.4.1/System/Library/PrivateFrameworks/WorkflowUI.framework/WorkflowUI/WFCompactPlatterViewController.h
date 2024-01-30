@class UIViewController, NSString, WFCompactPlatterView, WFWorkflowRunningContext, UIScrollView, UIPanGestureRecognizer, WFCompactPlatterTransitioningDelegate;
@protocol WFCompactPlatterContentContainer, BNPresentableContext, WFCompactAppearanceProvider;

@interface WFCompactPlatterViewController : UIViewController <WFCompactPlatterSizingDelegate, UIScrollViewDelegate, UIGestureRecognizerDelegate, WFCompactPlatterPresentation, WFBannerPresentable>

@property (retain, nonatomic) WFCompactPlatterTransitioningDelegate *wf_transitioningDelegate;
@property (weak, nonatomic) UIScrollView *scrollView;
@property (nonatomic) struct CGSize { double width; double height; } minimumPlatterSize;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } gestureOriginFrame;
@property (nonatomic) struct CGPoint { double x; double y; } gestureTranslation;
@property (readonly, weak, nonatomic) WFCompactPlatterView *platterView;
@property (readonly, nonatomic) BOOL isInteractingWithPlatter;
@property (retain, nonatomic) UIViewController *contentViewController;
@property (retain, nonatomic) WFWorkflowRunningContext *associatedRunningContext;
@property (retain, nonatomic) id<WFCompactAppearanceProvider> appearanceProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<WFCompactPlatterContentContainer> platterContentContainer;
@property (nonatomic) BOOL platterHeightAnimationsDisabled;
@property (readonly, nonatomic) BOOL providesHostedContent;
@property (readonly, nonatomic) UIViewController *viewController;
@property (readonly, nonatomic) long long presentableBehavior;
@property (weak, nonatomic) id<BNPresentableContext> presentableContext;
@property (readonly, nonatomic, getter=isDraggingDismissalEnabled) BOOL draggingDismissalEnabled;
@property (readonly, nonatomic, getter=isDraggingInteractionEnabled) BOOL draggingInteractionEnabled;
@property (readonly, nonatomic, getter=isTouchOutsideDismissalEnabled) BOOL touchOutsideDismissalEnabled;
@property (readonly, nonatomic) long long presentableType;
@property (readonly, copy, nonatomic) NSString *requesterIdentifier;
@property (readonly, copy, nonatomic) NSString *requestIdentifier;

- (void)handlePan:(id)a0;
- (void)scrollToTopAnimated:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (id)init;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)setTransitioningDelegate:(id)a0;
- (void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })bannerContentOutsets;
- (BOOL)allowsInteractiveDismissal;
- (void)animateInteractive:(BOOL)a0 animationBlock:(id /* block */)a1 completion:(id /* block */)a2;
- (double)contentHeightForWidth:(double)a0 withMaximumVisibleHeight:(double)a1;
- (void)invalidateContentSize;
- (void)invalidatePlatterSize;
- (double)maximumExpectedVisibleContentHeight;
- (double)platterHeightForWidth:(double)a0 withMaximumHeight:(double)a1;
- (void)platterInteractionDidBegin;
- (void)platterInteractionDidFinish;
- (void)platterInteractionRequestedDismissal;
- (void)platterViewDidInvalidateSize:(id)a0;
- (void)systemDismissedBanner;
- (void)updateContentSizeAndPlatterPosition;
- (void)updatePlatterPosition;
- (void)updateScrollViewSeparators;

@end
