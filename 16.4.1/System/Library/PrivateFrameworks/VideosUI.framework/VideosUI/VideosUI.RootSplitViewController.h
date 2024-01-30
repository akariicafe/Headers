@class UINavigationController, UIViewController;

@interface VideosUI.RootSplitViewController : UISplitViewController <VUIRootSplitViewController, UISplitViewControllerDelegate, AMSUIMessageViewControllerDelegate, UIPopoverPresentationControllerDelegate, VUITVAppRootViewController> {
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
    void /* unknown type, empty encoding */ needsModeEvaluationOnDidAppear;
    void /* unknown type, empty encoding */ controllerMap;
    void /* unknown type, empty encoding */ lastSelectedIdentifier;
    void /* unknown type, empty encoding */ hasPostedViewControllerDidChangeNotificationOnLaunch;
    void /* unknown type, empty encoding */ hasDroppedOnTab;
    void /* unknown type, empty encoding */ selectedIndexPath;
    void /* unknown type, empty encoding */ previousIndexPath;
    void /* unknown type, empty encoding */ appContext;
    void /* unknown type, empty encoding */ libraryOnly;
    void /* unknown type, empty encoding */ isSidebarDisabled;
    void /* unknown type, empty encoding */ stagedMode;
    void /* unknown type, empty encoding */ viewIsVisible;
    void /* unknown type, empty encoding */ tvTitle;
    void /* unknown type, empty encoding */ libraryTitle;
    void /* unknown type, empty encoding */ tipPlacementId;
    void /* unknown type, empty encoding */ tipPlacementTabBarItemIndex;
    void /* unknown type, empty encoding */ tipPlacementSideBarItemIdentifier;
    void /* unknown type, empty encoding */ presentedTipViewController;
    void /* unknown type, empty encoding */ accountMessageViewModel;
    void /* unknown type, empty encoding */ accountMessageViewController;
    void /* unknown type, empty encoding */ sidebarOpeningInProgress;
    void /* unknown type, empty encoding */ waitingForPresentationDismissal;
}

@property (nonatomic, readonly) UINavigationController *currentNavigationController;
@property (nonatomic, readonly) UIViewController *currentViewController;

- (long long)adaptivePresentationStyleForPresentationController:(id)a0;
- (void)messageViewController:(id)a0 didSelectActionWithDialogResult:(id)a1;
- (void)messageViewController:(id)a0 didUpdateSize:(struct CGSize { double x0; double x1; })a1;
- (void)messageViewController:(id)a0 didFailWithError:(id)a1;
- (void)splitViewController:(id)a0 willChangeToDisplayMode:(long long)a1;
- (void)handleDeepLinkURL:(id)a0 forBarItemIdentifier:(id)a1;
- (void)updateWithBarItems:(id)a0 setSelectedIndexFromDefaults:(BOOL)a1 appContext:(id)a2;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)initWithStyle:(long long)a0;
- (void)willEnterForeground:(id)a0;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (id)init;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;

@end
