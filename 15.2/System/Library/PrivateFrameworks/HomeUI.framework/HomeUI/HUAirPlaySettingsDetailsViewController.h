@class HUAirPlaySettingsDetailsItemManager, NSMapTable, NSString;

@interface HUAirPlaySettingsDetailsViewController : HUItemTableViewController <HUSwitchCellDelegate, HUHomeKitAccessorySettingsItemModuleControllerDelegate, HUHomeKitAccessorySettingDetailsViewControllerProtocol>

@property (retain) NSMapTable *cellToItemMap;
@property (retain, nonatomic) HUAirPlaySettingsDetailsItemManager *airPlaySettingsDetailsItemManager;
@property (retain, nonatomic) NSMapTable *moduleToModuleControllerMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (void)updateCell:(id)a0 forItem:(id)a1 indexPath:(id)a2 animated:(BOOL)a3;
- (void)switchCell:(id)a0 didTurnOn:(BOOL)a1;
- (void)setupCell:(id)a0 forItem:(id)a1 indexPath:(id)a2;
- (id)itemModuleControllers;
- (id)initWithAccessorySettingItem:(id)a0 module:(id)a1;

@end
