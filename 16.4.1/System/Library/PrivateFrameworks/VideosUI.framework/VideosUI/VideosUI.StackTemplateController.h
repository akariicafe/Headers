@interface VideosUI.StackTemplateController : VideosUI.StackViewController {
    void /* unknown type, empty encoding */ supportsTabBarChildControllerBehaviours;
    void /* unknown type, empty encoding */ supportsTabBarChildContentInsets;
    void /* unknown type, empty encoding */ anchorIdToHighlight;
    void /* unknown type, empty encoding */ showcasePercentageObserver;
    void /* unknown type, empty encoding */ lastShowcasePercentage;
    void /* unknown type, empty encoding */ notificationCenter;
    void /* unknown type, empty encoding */ hasEnabledShowcasing;
    void /* unknown type, empty encoding */ statusBarStyle;
    void /* unknown type, empty encoding */ navBarGradientView;
    void /* unknown type, empty encoding */ statusBarGradientView;
    void /* unknown type, empty encoding */ accountMessageViewModel;
    void /* unknown type, empty encoding */ _accountMessageViewController;
    void /* unknown type, empty encoding */ viewIsVisibleForAccountMessage;
    void /* unknown type, empty encoding */ pastFirstViewDidAppear;
    void /* unknown type, empty encoding */ accountMessageAdditionTargetOffset;
    void /* unknown type, empty encoding */ accountMessageNeedsDeferredAnimationIn;
    void /* unknown type, empty encoding */ accountMessageDismissalTargetOffset;
    void /* unknown type, empty encoding */ targetParentController;
    void /* unknown type, empty encoding */ didEnqueueImpressionMetrics;
    void /* unknown type, empty encoding */ waitingForPresentationDismissal;
    void /* unknown type, empty encoding */ pagePerformanceProvider;
}

@property (nonatomic, readonly) long long preferredStatusBarStyle;
@property (nonatomic, readonly) long long preferredStatusBarUpdateAnimation;

- (void)handleAppWillEnterForeground:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)willEnterForeground:(id)a0;
- (void)dealloc;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)vui_viewDidLoad;
- (void)vui_didMoveToParentViewController:(id)a0;
- (void)vui_viewDidAppear:(BOOL)a0;
- (void)vui_viewDidDisappear:(BOOL)a0;
- (void)vui_viewDidLayoutSubviews;
- (void)vui_viewWillAppear:(BOOL)a0;
- (void)vui_viewWillDisappear:(BOOL)a0;
- (void)vui_willMoveToParentViewController:(id)a0;
- (BOOL)vuiScrollViewShouldScrollToTop:(id)a0;
- (BOOL)shouldRubberbandElementWithCategory:(unsigned long long)a0 in:(id)a1 at:(id)a2;
- (void)vuiScrollViewDidEndScrollingAnimation:(id)a0;
- (void)vuiScrollViewDidScroll:(id)a0;
- (void)vuiScrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(struct CGPoint { double x0; double x1; } *)a2;

@end
