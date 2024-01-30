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
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (void)didMoveToParentViewController:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;

@end
