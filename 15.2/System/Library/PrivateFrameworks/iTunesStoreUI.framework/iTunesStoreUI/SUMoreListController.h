@class UITabBarItem;

@interface SUMoreListController : UIMoreListController {
    UITabBarItem *_tabBarItem;
}

- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)didMoveToParentViewController:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (id)tabBarItem;
- (void)dealloc;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (long long)ITunesStoreUIBarStyle;
- (void)_reloadPreviewOverlayVisibility;
- (void)_badgeDidChangeNotification:(id)a0;

@end
