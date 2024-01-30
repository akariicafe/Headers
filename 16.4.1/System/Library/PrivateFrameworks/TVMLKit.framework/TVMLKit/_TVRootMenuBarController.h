@class UINavigationController, NSArray, NSString, IKAppTabBar, UIViewController;
@protocol IKAppNavigationController, _TVAppNavigationControllerDelegate;

@interface _TVRootMenuBarController : UITabBarController <UITabBarControllerDelegate, TVAppRootViewController, IKAppTabBarController>

@property (retain, nonatomic) NSArray *appTabBarItems;
@property (nonatomic) unsigned long long previousSelectedIndex;
@property (retain, nonatomic) id<_TVAppNavigationControllerDelegate> appNavigationControllerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UINavigationController *currentNavigationController;
@property (readonly, nonatomic) UIViewController *currentViewController;
@property (readonly, nonatomic) id<IKAppNavigationController> appNavigationController;
@property (readonly, nonatomic) IKAppTabBar *appTabBar;

- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)dealloc;
- (void)viewDidLoad;
- (id)init;
- (void).cxx_destruct;
- (void)tabBarController:(id)a0 didSelectViewController:(id)a1;
- (unsigned long long)tabBarControllerSupportedInterfaceOrientations:(id)a0;
- (id)selectedTabItemForTabBar:(id)a0;
- (void)tabBar:(id)a0 setSelectedTabItem:(id)a1;
- (id)tabBar:(id)a0 setTabItems:(id)a1;
- (id)transientTabItemForTabBar:(id)a0;
- (unsigned long long)numberOfTabsInTabBar:(id)a0;
- (void)setAppNavigationControllersDelegate:(id)a0;
- (id)tabBar:(id)a0 tabItemAtIndex:(unsigned long long)a1;

@end
