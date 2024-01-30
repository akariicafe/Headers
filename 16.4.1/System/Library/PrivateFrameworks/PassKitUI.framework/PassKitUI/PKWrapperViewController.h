@class UIViewController;

@interface PKWrapperViewController : UIViewController {
    long long _type;
}

@property (readonly, nonatomic) UIViewController *wrappedViewController;

- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (void)_updatePreferredContentSize;
- (id)childViewControllerForStatusBarHidden;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)_canShowWhileLocked;
- (id)childViewControllerForStatusBarStyle;
- (long long)preferredUserInterfaceStyle;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)loadView;
- (id)childViewControllerForScreenEdgesDeferringSystemGestures;
- (id)childViewControllerForWhitePointAdaptivityStyle;
- (unsigned long long)edgesForExtendedLayout;
- (BOOL)extendedLayoutIncludesOpaqueBars;
- (id)initWithWrappedViewController:(id)a0 type:(long long)a1;

@end
