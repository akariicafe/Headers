@class UINavigationController, UIViewController;

@interface VideosUI.RootSplitViewController : UISplitViewController <VUIRootSplitViewController, VUITVAppRootViewController> {
    void /* unknown type, empty encoding */ defaultSectionManager;
    void /* unknown type, empty encoding */ libraryManager;
    void /* unknown type, empty encoding */ sideBarController;
    void /* unknown type, empty encoding */ secondaryColumnHostingController;
    void /* unknown type, empty encoding */ sideBarSections;
    void /* unknown type, empty encoding */ sideBarOnlyItemIdentifiers;
    void /* unknown type, empty encoding */ stagedLibraryBarItems;
    void /* unknown type, empty encoding */ lastSelectedIdentifierInSectionMap;
    void /* unknown type, empty encoding */ splitTabBarController;
    void /* unknown type, empty encoding */ tabBarItems;
    void /* unknown type, empty encoding */ mode;
    void /* unknown type, empty encoding */ controllerMap;
    void /* unknown type, empty encoding */ lastSelectedIdentifier;
    void /* unknown type, empty encoding */ hasPostedViewControllerDidChangeNotificationOnLaunch;
    void /* unknown type, empty encoding */ selectedIndexPath;
    void /* unknown type, empty encoding */ previousIndexPath;
    void /* unknown type, empty encoding */ appContext;
    void /* unknown type, empty encoding */ libraryOnly;
    void /* unknown type, empty encoding */ stagedMode;
    void /* unknown type, empty encoding */ viewIsVisible;
    void /* unknown type, empty encoding */ tvTitle;
    void /* unknown type, empty encoding */ libraryTitle;
}

@property (nonatomic, readonly) UINavigationController *currentNavigationController;
@property (nonatomic, readonly) UIViewController *currentViewController;

- (void)updateWithBarItems:(id)a0 setSelectedIndexFromDefaults:(BOOL)a1 appContext:(id)a2;
- (void)handleDeepLinkURL:(id)a0 forBarItemIdentifier:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (id)initWithStyle:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
