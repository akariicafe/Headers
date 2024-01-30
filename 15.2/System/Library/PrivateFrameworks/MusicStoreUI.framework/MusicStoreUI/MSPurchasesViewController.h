@class SUSegmentedControl, NSArray, UIView;

@interface MSPurchasesViewController : SUViewController {
    long long _activeViewControllerIndex;
    UIView *_containerView;
    SUSegmentedControl *_segmentedControl;
    NSArray *_viewControllers;
}

- (id)initWithSection:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)loadView;
- (void)dealloc;
- (void)_segmentedControlAction:(id)a0;
- (void)tabBarControllerDidReselectTabBarItem:(id)a0;
- (id)copyArchivableContext;
- (void)restoreArchivableContext:(id)a0;
- (void)invalidateForMemoryPurge;
- (id)_activeViewController;
- (id)_newSegmentedControlWithPageSectionGroup:(id)a0;
- (void)_tabConfigurationChangedNotification:(id)a0;
- (void)_reloadSegmentedControlPlacement;
- (void)_reloadViewControllersWithSection:(id)a0;
- (void)_showActiveViewController;
- (void)_setActiveViewControllerIndex:(long long)a0;
- (id)_newViewControllerForPageSection:(id)a0;

@end
