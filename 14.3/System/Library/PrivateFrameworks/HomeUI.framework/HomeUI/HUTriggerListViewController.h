@class NSString, HUGridLayoutOptions, HUDashboardNavigationButton, HUTriggerListItemManager;

@interface HUTriggerListViewController : HUItemTableViewController <HUAboutResidentDeviceViewControllerDelegate, HUTriggerEditorDelegate, HUColoredButtonCellDelegate, HUTriggerListSubheadlineCellDelegate>

@property (readonly, nonatomic) HUDashboardNavigationButton *navigationAddButton;
@property (readonly, nonatomic) HUTriggerListItemManager *triggerItemManager;
@property (nonatomic) unsigned long long editorPresentationMode;
@property (nonatomic) BOOL isTransitioningSizes;
@property (retain, nonatomic) HUGridLayoutOptions *layoutOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (void).cxx_destruct;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)itemManager:(id)a0 performUpdateRequest:(id)a1;
- (void)_updateRightBarButtons;
- (void)triggerEditor:(id)a0 didFinishWithTriggerBuilder:(id)a1;
- (void)updateCell:(id)a0 forItem:(id)a1 indexPath:(id)a2 animated:(BOOL)a3;
- (void)setupCell:(id)a0 forItem:(id)a1 indexPath:(id)a2;
- (unsigned long long)automaticDisablingReasonsForItem:(id)a0;
- (BOOL)shouldHideHeaderAboveSection:(long long)a0;
- (BOOL)shouldHideFooterBelowSection:(long long)a0;
- (BOOL)shouldHideSeparatorsForCell:(id)a0 indexPath:(id)a1;
- (void)coloredButtonCellPressed:(id)a0;
- (void)learnMoreLinkTapped:(id)a0;
- (void)aboutResidentDeviceViewControllerDidFinish:(id)a0;
- (void)_addTrigger:(id)a0;
- (void)_showSummaryForTriggerItem:(id)a0;
- (void)showAddTriggerView;

@end
