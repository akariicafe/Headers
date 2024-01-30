@class HUMediaServiceSettingsItemModuleController, NSString, HUAboutResidentDeviceFooterView, HFUserItem, HUEditUserItemManager, HUAccessorySettingsItemModuleController, HUPendingAccessoriesGridViewController, HFPinCodeManager;

@interface HUEditUserViewController : HUUserTableViewController <HUAboutResidentDeviceFooterViewDelegate, HUAboutResidentDeviceViewControllerDelegate, HUSwitchCellDelegate, HUAccessorySettingsItemModuleControllerDelegate, UINavigationControllerDelegate, HUMediaServiceSettingsItemModuleControllerDelegate, UITextViewDelegate>

@property (readonly, copy, nonatomic) HFUserItem *userItem;
@property (readonly, nonatomic) HUEditUserItemManager *editUserItemManager;
@property (readonly, nonatomic) HUPendingAccessoriesGridViewController *pendingAccessoriesViewController;
@property (retain, nonatomic) HUAccessorySettingsItemModuleController *userSettingsItemModuleController;
@property (retain, nonatomic) HUMediaServiceSettingsItemModuleController *mediaServiceSettingsItemModuleController;
@property (retain, nonatomic) HUAboutResidentDeviceFooterView *aboutResidentDeviceFooterView;
@property (retain, nonatomic) HFPinCodeManager *pinCodeManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)navigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)user;
- (void)doneButtonTapped:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)mediaServiceSettingsItemModuleController:(id)a0 didSelectMediaService:(id)a1;
- (void)_handleUpdatedItem:(id)a0 atIndexPath:(id)a1;
- (id)presentPinDetailsViewController;
- (id)_lazyAboutResidentDeviceFooterView;
- (void)_removeUser;
- (void)aboutResidentDeviceViewControllerDidFinish:(id)a0;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (id)childViewControllersToPreload;
- (void)didSelectDefaultAccounts:(id)a0;
- (void)diffableDataItemManager:(id)a0 didUpdateItems:(id)a1 addItems:(id)a2 removeItems:(id)a3;
- (id)initWithItem:(id)a0 home:(id)a1;
- (void)itemManager:(id)a0 didUpdateResultsForItem:(id)a1 atIndexPath:(id)a2;
- (id)itemModuleControllers;
- (void)learnMoreLinkTapped:(id)a0;
- (void)moduleController:(id)a0 preflightCheckToAllowSwitchingForSettingItem:(id)a1 changingToOn:(BOOL)a2 withCompletion:(id /* block */)a3;
- (void)moduleController:(id)a0 presentGroup:(id)a1;
- (id)moduleController:(id)a0 requestPresentViewController:(id)a1 animated:(BOOL)a2 withCompletion:(id /* block */)a3;
- (void)moduleController:(id)a0 settingUpdatedForItem:(id)a1;
- (BOOL)moduleController:(id)a0 shouldDisableItem:(id)a1;
- (id)presentDefaultAccountViewController;
- (void)setupCell:(id)a0 forItem:(id)a1 indexPath:(id)a2;
- (BOOL)shouldHideSeparatorsForCell:(id)a0 indexPath:(id)a1;
- (void)switchCell:(id)a0 didTurnOn:(BOOL)a1;
- (void)updateCell:(id)a0 forItem:(id)a1 indexPath:(id)a2 animated:(BOOL)a3;

@end
