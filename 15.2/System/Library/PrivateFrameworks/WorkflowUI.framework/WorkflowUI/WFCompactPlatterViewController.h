@class UIViewController, NSString, WFCompactPlatterView, UIScrollView, UIPanGestureRecognizer, WFCompactPlatterTransitioningDelegate;
@protocol WFCompactPlatterContentContainer;

@interface WFCompactPlatterViewController : UIViewController <WFCompactPlatterSizingDelegate, UIScrollViewDelegate, UIGestureRecognizerDelegate, WFCompactPlatterPresentation>

@property (retain, nonatomic) WFCompactPlatterTransitioningDelegate *wf_transitioningDelegate;
@property (weak, nonatomic) UIScrollView *scrollView;
@property (nonatomic) struct CGSize { double width; double height; } minimumPlatterSize;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } gestureOriginFrame;
@property (nonatomic) struct CGPoint { double x; double y; } gestureTranslation;
@property (readonly, weak, nonatomic) WFCompactPlatterView *platterView;
@property (readonly, nonatomic) BOOL isInteractingWithPlatter;
@property (retain, nonatomic) UIViewController *contentViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<WFCompactPlatterContentContainer> platterContentContainer;
@property (nonatomic) BOOL platterHeightAnimationsDisabled;

- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (BOOL)_canShowWhileLocked;
- (void)scrollToTopAnimated:(BOOL)a0;
- (void)loadView;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)setTransitioningDelegate:(id)a0;
- (id)init;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)handlePan:(id)a0;
- (void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)a0;
- (double)contentHeightForWidth:(double)a0 withMaximumVisibleHeight:(double)a1;
- (double)platterHeightForWidth:(double)a0 withMaximumHeight:(double)a1;
- (void)invalidateContentSize;
- (void)platterViewDidInvalidateSize:(id)a0;
- (void)updateContentSizeAndPlatterPosition;
- (void)updatePlatterPosition;
- (double)maximumExpectedVisibleContentHeight;
- (void)invalidatePlatterSize;
- (void)platterInteractionDidBegin;
- (void)platterInteractionDidFinish;
- (void)platterInteractionRequestedDismissal;
- (BOOL)allowsInteractiveDismissal;
- (void)animateInteractive:(BOOL)a0 animationBlock:(id /* block */)a1 completion:(id /* block */)a2;

@end
