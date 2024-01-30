@class HUMediaServiceItem, HUMediaServiceItemManager, HUAccessorySettingsItemModuleController, NSString, HFUserItem;

@interface HUMediaServiceTableViewController : HUItemTableViewController <HUSwitchCellDelegate, HUAccessorySettingsItemModuleControllerDelegate>

@property (readonly, copy, nonatomic) HFUserItem *userItem;
@property (readonly, copy, nonatomic) HUMediaServiceItem *mediaServiceItem;
@property (readonly, copy, nonatomic) HUMediaServiceItemManager *mediaServiceItemManager;
@property (retain, nonatomic) HUAccessorySettingsItemModuleController *userSettingsItemModuleController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (void)_removeService;
- (unsigned long long)automaticDisablingReasonsForItem:(id)a0;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (id)initWithItem:(id)a0 mediaServiceItem:(id)a1;
- (id)itemModuleControllers;
- (void)moduleController:(id)a0 preflightCheckToAllowSwitchingForSettingItem:(id)a1 changingToOn:(BOOL)a2 withCompletion:(id /* block */)a3;
- (void)moduleController:(id)a0 presentGroup:(id)a1;
- (id)moduleController:(id)a0 requestPresentViewController:(id)a1 animated:(BOOL)a2 withCompletion:(id /* block */)a3;
- (void)moduleController:(id)a0 settingUpdatedForItem:(id)a1;
- (BOOL)moduleController:(id)a0 shouldDisableItem:(id)a1;
- (void)setupCell:(id)a0 forItem:(id)a1 indexPath:(id)a2;
- (BOOL)shouldHideFooterBelowSection:(long long)a0;
- (BOOL)shouldHideHeaderAboveSection:(long long)a0;
- (BOOL)shouldHideSeparatorsForCell:(id)a0 indexPath:(id)a1;
- (void)switchCell:(id)a0 didTurnOn:(BOOL)a1;
- (void)updateCell:(id)a0 forItem:(id)a1 indexPath:(id)a2 animated:(BOOL)a3;

@end
