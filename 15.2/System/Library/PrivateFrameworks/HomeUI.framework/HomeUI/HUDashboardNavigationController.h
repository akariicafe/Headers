@class UINavigationBar, NSString;

@interface HUDashboardNavigationController : UINavigationController <HUDashboardNavigationBarDelegate>

@property (retain, nonatomic) UINavigationBar *displayedNavigationBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)preferredStatusBarStyle;
- (id)childViewControllerForStatusBarStyle;
- (id)_targetNavigationBarForUISplitViewControllerSidebarButton;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)navigationBar:(id)a0 didChangeBackgroundVisibility:(BOOL)a1;

@end
