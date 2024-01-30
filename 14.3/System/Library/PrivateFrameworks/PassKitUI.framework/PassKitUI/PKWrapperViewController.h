@class UIViewController;

@interface PKWrapperViewController : UIViewController {
    long long _type;
}

@property (readonly, nonatomic) UIViewController *wrappedViewController;

- (id)childViewControllerForHomeIndicatorAutoHidden;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForStatusBarHidden;
- (void).cxx_destruct;
- (id)childViewControllerForWhitePointAdaptivityStyle;
- (long long)preferredUserInterfaceStyle;
- (void)loadView;
- (void)_updatePreferredContentSize;
- (id)childViewControllerForScreenEdgesDeferringSystemGestures;
- (unsigned long long)edgesForExtendedLayout;
- (BOOL)extendedLayoutIncludesOpaqueBars;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithWrappedViewController:(id)a0 type:(long long)a1;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)viewWillLayoutSubviews;

@end
