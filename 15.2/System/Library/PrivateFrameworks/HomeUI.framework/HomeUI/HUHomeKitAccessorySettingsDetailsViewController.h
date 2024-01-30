@class HUHomeKitAccessorySettingsItemModuleController, HUHomeKitAccessorySettingsItemModule;

@interface HUHomeKitAccessorySettingsDetailsViewController : HUItemTableViewController

@property (retain, nonatomic) HUHomeKitAccessorySettingsItemModule *collapsedModule;
@property (retain, nonatomic) HUHomeKitAccessorySettingsItemModuleController *moduleController;

- (void).cxx_destruct;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void)didReceiveSettingsUpdatesForAccessoryWithIdentifier:(id)a0 settings:(id)a1;
- (id)buildItemModuleControllerForModule:(id)a0;
- (void)dismissPrivacyController;
- (id)initWithCollapsedAccessorySettingItemModule:(id)a0;

@end
