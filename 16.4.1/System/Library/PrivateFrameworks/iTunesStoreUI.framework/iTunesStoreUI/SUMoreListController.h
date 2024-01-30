@class UITabBarItem;

@interface SUMoreListController : UIMoreListController {
    UITabBarItem *_tabBarItem;
}

- (void)didMoveToParentViewController:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)tabBarItem;
- (void)dealloc;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillAppear:(BOOL)a0;
- (void)_reloadPreviewOverlayVisibility;
- (long long)ITunesStoreUIBarStyle;
- (void)_badgeDidChangeNotification:(id)a0;

@end
