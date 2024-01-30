@class NSString, NSMapTable, HUSiriSettingsDetailsItemManager;

@interface HUSiriSettingsDetailsViewController : HUItemTableViewController <HUSwitchCellDelegate, HUHomeKitAccessorySettingsItemModuleControllerDelegate, UITextViewDelegate, HUHomeKitAccessorySettingDetailsViewControllerProtocol>

@property (retain) NSMapTable *cellToItemMap;
@property (retain, nonatomic) HUSiriSettingsDetailsItemManager *siriSettingsDetailsItemManager;
@property (retain, nonatomic) NSMapTable *moduleToModuleControllerMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (void)updateCell:(id)a0 forItem:(id)a1 indexPath:(id)a2 animated:(BOOL)a3;
- (void)switchCell:(id)a0 didTurnOn:(BOOL)a1;
- (void)setupCell:(id)a0 forItem:(id)a1 indexPath:(id)a2;
- (id)itemModuleControllers;
- (id)initWithAccessorySettingItem:(id)a0 module:(id)a1;
- (void)moduleController:(id)a0 preflightCheckToAllowSwitchingForSettingItem:(id)a1 changingToOn:(BOOL)a2 withCompletion:(id /* block */)a3;
- (void)_updateSwitchSettingItem:(id)a0 forCell:(id)a1 withValue:(BOOL)a2;
- (void)_preflightCheckToAllowSwitchingForSettingItem:(id)a0 changingToOn:(BOOL)a1 withCompletion:(id /* block */)a2;

@end
