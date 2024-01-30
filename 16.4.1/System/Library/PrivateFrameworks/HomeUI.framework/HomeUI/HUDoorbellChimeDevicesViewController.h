@class HUDoorbellChimeDevicesItemManager, NSString;

@interface HUDoorbellChimeDevicesViewController : HUItemTableViewController <HFItemManagerDelegate, HUSwitchCellDelegate, HUAccessorySettingsDetailsViewControllerProtocol, HUHomeKitAccessorySettingDetailsViewControllerProtocol>

@property (retain, nonatomic) HUDoorbellChimeDevicesItemManager *doorbellChimeDevicesItemManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (id)initWithAccessoryGroupItem:(id)a0;
- (id)initWithAccessorySettingItem:(id)a0;
- (id)initWithAccessorySettingItem:(id)a0 module:(id)a1;
- (void)setupCell:(id)a0 forItem:(id)a1 indexPath:(id)a2;
- (void)switchCell:(id)a0 didTurnOn:(BOOL)a1;

@end
