@class NSArray, UIViewController;

@interface VideosUI.DocumentViewController : UIViewController <UINavigationControllerDelegate> {
    void /* unknown type, empty encoding */ templateViewController;
    void /* unknown type, empty encoding */ deferLoadingTemplateController;
    void /* unknown type, empty encoding */ documentDelegate;
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
    void /* unknown type, empty encoding */ pagePerformanceReporter;
}

@property (nonatomic, readonly) long long preferredStatusBarStyle;
@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;
@property (nonatomic, readonly) unsigned long long supportedInterfaceOrientations;
@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarHidden;
@property (nonatomic, readonly) BOOL shouldAutomaticallyForwardAppearanceMethods;

- (void)navigationController:(id)a0 didShowViewController:(id)a1 animated:(BOOL)a2;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (void)didMoveToParentViewController:(id)a0;
- (void)didBecomeActive:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)scrollToTop;
- (void)willResignActive:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)overrideTraitCollectionForChildViewController:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;

@end
