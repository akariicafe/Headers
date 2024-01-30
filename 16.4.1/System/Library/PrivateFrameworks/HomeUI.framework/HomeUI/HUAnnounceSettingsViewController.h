@class HMHome, NSString, HUAnnounceSettingsItemModuleController;

@interface HUAnnounceSettingsViewController : HUItemTableViewController <HUAccessorySettingsDetailsViewControllerProtocol>

@property (readonly, nonatomic) HMHome *home;
@property (retain, nonatomic) HUAnnounceSettingsItemModuleController *moduleController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithHome:(id)a0;
- (id)buildItemModuleControllerForModule:(id)a0;
- (id)initWithAccessoryGroupItem:(id)a0;
- (id)initWithAccessorySettingItem:(id)a0;
- (id)initWithAccessorySettingItem:(id)a0 module:(id)a1;

@end
