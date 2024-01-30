@class NSArray, UIViewController;

@interface VideosUI.DocumentViewController : VideosUI.VUIViewController <UINavigationControllerDelegate> {
    void /* unknown type, empty encoding */ viewWillAppearAfterTabSwitch;
    void /* unknown type, empty encoding */ templateViewController;
    void /* unknown type, empty encoding */ deferLoadingTemplateController;
    void /* unknown type, empty encoding */ documentDelegate;
    void /* unknown type, empty encoding */ ignoreDidMoveToNilParent;
    void /* unknown type, empty encoding */ rebaseIdentifier;
    void /* unknown type, empty encoding */ document;
    void /* unknown type, empty encoding */ isTransitioning;
    void /* unknown type, empty encoding */ loadingView;
    void /* unknown type, empty encoding */ navBarOpacity;
    void /* unknown type, empty encoding */ navBarTitleOpacity;
    void /* unknown type, empty encoding */ navBarTintColor;
    void /* unknown type, empty encoding */ navBarPrefersLargeTitles;
    void /* unknown type, empty encoding */ navBarTitleView;
    void /* unknown type, empty encoding */ navBarTitle;
    void /* unknown type, empty encoding */ navBarCachedWidth;
    void /* unknown type, empty encoding */ needsConfigurationWhenMovesToParent;
    void /* unknown type, empty encoding */ pagePerformanceReporter;
}

@property (nonatomic, readonly) long long preferredStatusBarStyle;
@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;
@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarHidden;
@property (nonatomic, readonly) unsigned long long supportedInterfaceOrientations;
@property (nonatomic, readonly) BOOL vuiShouldAutomaticallyForwardAppearanceMethods;

- (void)navigationController:(id)a0 didShowViewController:(id)a1 animated:(BOOL)a2;
- (id)overrideTraitCollectionForChildViewController:(id)a0;
- (void)didBecomeActive:(id)a0;
- (void)scrollToTop;
- (void)willResignActive:(id)a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)vui_didMoveToParentViewController:(id)a0;
- (void)vui_viewDidLayoutSubviews;
- (void)vui_viewDidLoad;
- (void)vui_viewWillAppear:(BOOL)a0;
- (void)vui_viewDidAppear:(BOOL)a0;
- (void)vui_viewWillDisappear:(BOOL)a0;
- (void)vui_viewDidDisappear:(BOOL)a0;

@end
