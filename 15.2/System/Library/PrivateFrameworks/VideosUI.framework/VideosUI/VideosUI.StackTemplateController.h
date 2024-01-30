@interface VideosUI.StackTemplateController : VideosUI.StackViewController {
    void /* unknown type, empty encoding */ supportsTabBarChildControllerBehaviours;
    void /* unknown type, empty encoding */ supportsTabBarChildContentInsets;
    void /* unknown type, empty encoding */ hasInAppBanner;
    void /* unknown type, empty encoding */ anchorIdToHighlight;
    void /* unknown type, empty encoding */ showcasePercentageObserver;
    void /* unknown type, empty encoding */ lastShowcasePercentage;
    void /* unknown type, empty encoding */ notificationCenter;
    void /* unknown type, empty encoding */ statusBarStyle;
    void /* unknown type, empty encoding */ navBarGradientView;
    void /* unknown type, empty encoding */ statusBarGradientView;
    void /* unknown type, empty encoding */ pagePerformanceProvider;
}

@property (nonatomic, readonly) long long preferredStatusBarStyle;
@property (nonatomic, readonly) long long preferredStatusBarUpdateAnimation;

- (void)handleAppWillEnterForeground:(id)a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)vui_didMoveToParentViewController:(id)a0;
- (void)vui_viewDidLayoutSubviews;
- (void)vui_viewDidLoad;
- (void)vui_viewWillAppear:(BOOL)a0;
- (void)vui_viewDidAppear:(BOOL)a0;
- (void)vui_viewWillDisappear:(BOOL)a0;
- (void)vui_viewDidDisappear:(BOOL)a0;
- (void)vuiScrollViewDidScroll:(id)a0;

@end
