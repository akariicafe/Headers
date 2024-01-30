@class UIViewController;

@interface PKWrapperViewController : UIViewController {
    long long _type;
}

@property (readonly, nonatomic) UIViewController *wrappedViewController;

- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (void)viewWillLayoutSubviews;
- (void)_updatePreferredContentSize;
- (BOOL)_canShowWhileLocked;
- (void)loadView;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (unsigned long long)edgesForExtendedLayout;
- (BOOL)extendedLayoutIncludesOpaqueBars;
- (long long)preferredUserInterfaceStyle;
- (void).cxx_destruct;
- (id)childViewControllerForWhitePointAdaptivityStyle;
- (id)childViewControllerForScreenEdgesDeferringSystemGestures;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithWrappedViewController:(id)a0 type:(long long)a1;

@end
