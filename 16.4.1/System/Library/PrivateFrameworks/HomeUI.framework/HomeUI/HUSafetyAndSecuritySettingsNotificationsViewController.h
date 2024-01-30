@class HMHome, HUSafetyAndSecuritySettingsNotificationsItemModuleController;

@interface HUSafetyAndSecuritySettingsNotificationsViewController : HUItemTableViewController

@property (readonly, nonatomic) HMHome *home;
@property (retain, nonatomic) HUSafetyAndSecuritySettingsNotificationsItemModuleController *moduleController;

- (void).cxx_destruct;
- (id)initWithHome:(id)a0;
- (id)buildItemModuleControllerForModule:(id)a0;

@end
