@class NSArray;

@interface VideosUI.PaginationTemplateController : UIViewController {
    void /* unknown type, empty encoding */ bottomMarginForPageControl;
    void /* unknown type, empty encoding */ templateModel;
    void /* unknown type, empty encoding */ lastContentOffset;
    void /* unknown type, empty encoding */ lastScrollDirection;
    void /* unknown type, empty encoding */ currentPage;
    void /* unknown type, empty encoding */ isAnimationInProgress;
    void /* unknown type, empty encoding */ impressionsTracker;
    void /* unknown type, empty encoding */ impressionsCalculator;
    void /* unknown type, empty encoding */ $__lazy_storage_$_imageProxyQueue;
    void /* unknown type, empty encoding */ $__lazy_storage_$_animator;
    void /* unknown type, empty encoding */ $__lazy_storage_$_rightSwipeGestureRecognizer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_leftSwipeGestureRecognizer;
    void /* unknown type, empty encoding */ playbackEventSubscriber;
    void /* unknown type, empty encoding */ currentPageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_reusableViews;
    void /* unknown type, empty encoding */ $__lazy_storage_$_pageControl;
}

@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;

- (void)leftSwipped:(id)a0;
- (void)rightSwipped:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)initWithCoder:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;

@end
