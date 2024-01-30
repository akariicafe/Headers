@class UINavigationController, NSArray, NSString, UIViewController;
@protocol VUITabBarControllerUpdatingDelegate;

@interface VUITabBarController : UITabBarController <UITabBarControllerDelegate, UIGestureRecognizerDelegate, VUITVAppRootViewController, VUITabBarProtocol, VUITabBarChildViewControllerInteraction>

@property (copy, nonatomic) id /* block */ longPressHandler;
@property (nonatomic) BOOL debugGestureSetupDone;
@property (nonatomic) unsigned long long previousSelectedIndex;
@property (nonatomic) BOOL hasSetTabBarIndex;
@property (retain, nonatomic) NSArray *tabBarItems;
@property (weak, nonatomic) id<VUITabBarControllerUpdatingDelegate> updatingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UINavigationController *currentNavigationController;
@property (readonly, nonatomic) UIViewController *currentViewController;
@property (nonatomic) unsigned long long selectedIndex;
@property (nonatomic, getter=isTabBarHidden) BOOL tabBarHidden;

+ (id)_tabBarImageForResource:(id)a0;
+ (id)_tabBarImageForTabIdentifier:(id)a0;

- (void)setViewControllers:(id)a0 animated:(BOOL)a1;
- (void)viewDidLoad;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (unsigned long long)tabBarControllerSupportedInterfaceOrientations:(id)a0;
- (void)tabBarController:(id)a0 didSelectViewController:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_setSelectedViewController:(id)a0;
- (void)_handleDebugUIGesture:(id)a0;
- (BOOL)_shouldIgnoreLastSelectedTabIndex;
- (void)_updateTabbarChildViewController:(id)a0 withTitle:(id)a1 iconResource:(id)a2;
- (id)_tabBarChildViewControllerWithIdentifier:(id)a0 documentRef:(id)a1 supportsInAppBanner:(BOOL)a2 isNonServerTab:(BOOL)a3 title:(id)a4 isSelectedTab:(BOOL)a5 appContext:(id)a6 iconResource:(id)a7 contextData:(id)a8 childItems:(id)a9;
- (void)setVuiSelectedIndex:(unsigned long long)a0;
- (void)_handleSelectedViewControllerDidChange;
- (void)_saveLastSelectedAndScrollToTop:(id)a0 selectedIndex:(unsigned long long)a1 previousSelectedIndex:(unsigned long long)a2;
- (void)_updateTabBarChildViewController:(id)a0 withTitle:(id)a1;
- (void)configureDebugUIGestureWithHandler:(id /* block */)a0;
- (void)setSelectedIndexForTabBarItemIdentifier:(id)a0;
- (unsigned long long)indexForTabBarItemIdentifier:(id)a0;
- (void)updateWithTabBarItems:(id)a0 setSelectedIndexFromDefaults:(BOOL)a1 appContext:(id)a2;
- (void)removeAllChildViewControllers;
- (id)viewControllerWithTabIdentifier:(id)a0;

@end
