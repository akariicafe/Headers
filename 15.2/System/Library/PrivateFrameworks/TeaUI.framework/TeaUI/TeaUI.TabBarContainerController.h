@class UIViewController;

@interface TeaUI.TabBarContainerController : TeaUI.NavigationController {
    void /* unknown type, empty encoding */ rootViewController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_intrinsicTabBar;
}

@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarHidden;
@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarStyle;
@property (nonatomic, readonly) UIViewController *childViewControllerForHomeIndicatorAutoHidden;

- (id)initWithRootViewController:(id)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithRootViewController:(id)a0 navigationBarClass:(Class)a1;

@end
