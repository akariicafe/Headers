@class NSString, WFCompactPlatterView, UIScrollView, WFCompactPlatterTransitioningDelegate, UIViewController;
@protocol WFCompactPlatterContentContainer;

@interface WFCompactPlatterViewController : UIViewController <WFCompactPlatterSizingDelegate, UIScrollViewDelegate, WFCompactPlatterPresentation>

@property (retain, nonatomic) WFCompactPlatterTransitioningDelegate *wf_transitioningDelegate;
@property (weak, nonatomic) UIScrollView *scrollView;
@property (nonatomic) struct CGSize { double width; double height; } minimumPlatterSize;
@property (readonly, weak, nonatomic) WFCompactPlatterView *platterView;
@property (retain, nonatomic) UIViewController *contentViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<WFCompactPlatterContentContainer> platterContentContainer;
@property (nonatomic) BOOL platterHeightAnimationsDisabled;

- (void)scrollToTopAnimated:(BOOL)a0;
- (id)init;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)setTransitioningDelegate:(id)a0;
- (void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)a0;
- (BOOL)_canShowWhileLocked;
- (double)contentHeightForWidth:(double)a0 withMaximumVisibleHeight:(double)a1;
- (double)platterHeightForWidth:(double)a0 withMaximumHeight:(double)a1;
- (void)invalidateContentSize;
- (void)platterViewDidInvalidateSize:(id)a0;
- (void)updateContentSizeAndPlatterPosition;
- (void)updatePlatterPosition;
- (double)maximumExpectedVisibleContentHeight;
- (void)invalidatePlatterSize;

@end
