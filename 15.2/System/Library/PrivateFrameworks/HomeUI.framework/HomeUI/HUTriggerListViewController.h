@class NSString, HUGridLayoutOptions, HUDashboardNavigationButton, HUTriggerListItemManager;

@interface HUTriggerListViewController : HUItemTableViewController <HUAboutResidentDeviceViewControllerDelegate, HUTriggerEditorDelegate, HUColoredButtonCellDelegate, HUTriggerListSubheadlineCellDelegate, HFHomeObserver>

@property (retain, nonatomic) HUDashboardNavigationButton *navigationAddButton;
@property (readonly, nonatomic) HUTriggerListItemManager *triggerItemManager;
@property (nonatomic) unsigned long long editorPresentationMode;
@property (nonatomic) BOOL isTransitioningSizes;
@property (retain, nonatomic) HUGridLayoutOptions *layoutOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)home:(id)a0 didAddAccessory:(id)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)home:(id)a0 didAddResidentDevice:(id)a1;
- (void)home:(id)a0 didRemoveResidentDevice:(id)a1;
- (void)homeDidUpdateName:(id)a0;
- (void)home:(id)a0 didRemoveRoom:(id)a1;
- (void)home:(id)a0 didUpdateNameForRoom:(id)a1;
- (void)home:(id)a0 didAddRoom:(id)a1;
- (void)home:(id)a0 didRemoveAccessory:(id)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)_deleteItem:(id)a0;
- (id)dashboardNavigator;
- (void)updateCell:(id)a0 forItem:(id)a1 indexPath:(id)a2 animated:(BOOL)a3;
- (void)setupCell:(id)a0 forItem:(id)a1 indexPath:(id)a2;
- (unsigned long long)automaticDisablingReasonsForItem:(id)a0;
- (BOOL)shouldHideHeaderAboveSection:(long long)a0;
- (BOOL)shouldHideFooterBelowSection:(long long)a0;
- (BOOL)shouldHideSeparatorsForCell:(id)a0 indexPath:(id)a1;
- (void)triggerEditor:(id)a0 didFinishWithTriggerBuilder:(id)a1;
- (id)trailingSwipeActionsForItem:(id)a0;
- (void)coloredButtonCellPressed:(id)a0;
- (void)learnMoreLinkTapped:(id)a0;
- (void)aboutResidentDeviceViewControllerDidFinish:(id)a0;
- (void)_invalidateNavigationAddButtonMenu;
- (void)_updateNavigationItems;
- (void)_addTrigger:(id)a0;
- (void)_showSummaryForTriggerItem:(id)a0;
- (void)showAddTriggerView;

@end
