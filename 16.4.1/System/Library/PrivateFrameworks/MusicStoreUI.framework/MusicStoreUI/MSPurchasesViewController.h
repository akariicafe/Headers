@class SUSegmentedControl, NSArray, UIView;

@interface MSPurchasesViewController : SUViewController {
    long long _activeViewControllerIndex;
    UIView *_containerView;
    SUSegmentedControl *_segmentedControl;
    NSArray *_viewControllers;
}

- (id)initWithSection:(id)a0;
- (void)dealloc;
- (id)_activeViewController;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (void)_segmentedControlAction:(id)a0;
- (id)copyArchivableContext;
- (void)invalidateForMemoryPurge;
- (void)restoreArchivableContext:(id)a0;
- (void)tabBarControllerDidReselectTabBarItem:(id)a0;
- (id)_newSegmentedControlWithPageSectionGroup:(id)a0;
- (id)_newViewControllerForPageSection:(id)a0;
- (void)_reloadSegmentedControlPlacement;
- (void)_reloadViewControllersWithSection:(id)a0;
- (void)_setActiveViewControllerIndex:(long long)a0;
- (void)_showActiveViewController;
- (void)_tabConfigurationChangedNotification:(id)a0;

@end
