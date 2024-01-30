@class UITabBarItem;

@interface SUMoreListController : UIMoreListController {
    UITabBarItem *_tabBarItem;
}

- (void)dealloc;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)didMoveToParentViewController:(id)a0;
- (id)tabBarItem;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)ITunesStoreUIBarStyle;
- (void)_reloadPreviewOverlayVisibility;
- (void)_badgeDidChangeNotification:(id)a0;

@end
