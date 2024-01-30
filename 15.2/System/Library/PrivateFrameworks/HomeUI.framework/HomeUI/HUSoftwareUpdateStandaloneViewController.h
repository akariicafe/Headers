@class HUFirmwareUpdateItemModuleController, NAFuture, HUSoftwareUpdateStandaloneItemManager, NSString, HUSoftwareUpdateItemModuleController, UIBarButtonItem;

@interface HUSoftwareUpdateStandaloneViewController : HUItemTableViewController <HUSoftwareUpdateItemModuleControllerDelegate, HUSwitchCellDelegate>

@property (readonly, nonatomic) HUSoftwareUpdateStandaloneItemManager *itemManager;
@property (retain, nonatomic) HUSoftwareUpdateItemModuleController *softwareUpdateItemModuleController;
@property (retain, nonatomic) HUFirmwareUpdateItemModuleController *firmwareUpdateItemModuleController;
@property (retain, nonatomic) UIBarButtonItem *updateAllBarButton;
@property (retain, nonatomic) NAFuture *softwareUpdateFetchFuture;
@property (nonatomic) BOOL allowRefresh;
@property (nonatomic) BOOL viewVisible;
@property (nonatomic) BOOL showDoneButtonInNavBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (id)keyCommands;
- (id)initWithHome:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)doneButtonPressed:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)itemManager:(id)a0 didUpdateResultsForItem:(id)a1 atIndexPath:(id)a2;
- (void)diffableDataItemManager:(id)a0 didUpdateItems:(id)a1 addItems:(id)a2 removeItems:(id)a3;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (id)initWithItemManager:(id)a0 tableViewStyle:(long long)a1;
- (void)updateCell:(id)a0 forItem:(id)a1 indexPath:(id)a2 animated:(BOOL)a3;
- (void)switchCell:(id)a0 didTurnOn:(BOOL)a1;
- (void)setupCell:(id)a0 forItem:(id)a1 indexPath:(id)a2;
- (BOOL)shouldHideSeparatorsForCell:(id)a0 indexPath:(id)a1;
- (id)itemModuleControllers;
- (id)softwareUpdateModuleController:(id)a0 presentViewController:(id)a1;
- (id)softwareUpdateModuleController:(id)a0 dismissViewController:(id)a1;
- (id)softwareUpdateModuleController:(id)a0 navigateToViewController:(id)a1;
- (void)_refreshUpdateAllBarButton;
- (void)_didTapUpdateAllButton:(id)a0;
- (id)_createUpdateAllBarButton;
- (void)_kickoffSoftwareUpdate;
- (void)_triggerRefresh:(id)a0;

@end
