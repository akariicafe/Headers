@class UINavigationController, UIViewController, NSArray;

@interface VideosUI.TabBarViewHostingController : VUIBaseViewController <VUITVAppRootViewController, VUITabBarProtocol> {
    void /* unknown type, empty encoding */ previousSelectedIndex;
    void /* unknown type, empty encoding */ tabBarInfo;
    void /* unknown type, empty encoding */ cancellable;
    void /* unknown type, empty encoding */ $__lazy_storage_$_hostingViewController;
}

@property (nonatomic, readonly) UINavigationController *currentNavigationController;
@property (nonatomic, readonly) UIViewController *currentViewController;
@property (nonatomic, readonly) NSArray *tabBarItems;
@property (nonatomic) unsigned long long selectedIndex;
@property (nonatomic) BOOL tabBarHidden;

- (BOOL)isTabBarHidden;
- (void)configureDebugUIGestureWithHandler:(id /* block */)a0;
- (void)updateWithTabBarItems:(id)a0 setSelectedIndexFromDefaults:(BOOL)a1 appContext:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)vui_viewDidLayoutSubviews;

@end
