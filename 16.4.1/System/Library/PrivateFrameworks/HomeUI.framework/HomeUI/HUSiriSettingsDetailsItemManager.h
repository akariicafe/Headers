@class NSString, HFHomeKitAccessorySettingsItemProvider, HUHomeKitAccessorySettingsItemModule, HMAccessorySettingsController, NSArray;

@interface HUSiriSettingsDetailsItemManager : HFItemManager <HFHomeKitAccessorySettingsDataSourceDelegate>

@property (retain, nonatomic) HMAccessorySettingsController *settingsController;
@property (retain, nonatomic) HFHomeKitAccessorySettingsItemProvider *siriSettingsItemProvider;
@property (retain, nonatomic) NSString *settingGroupKeyPath;
@property (retain, nonatomic) HUHomeKitAccessorySettingsItemModule *module;
@property (retain, nonatomic) NSArray *homeKitAccessorySettingsModules;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_buildItemModulesForHome:(id)a0;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)_buildSectionsWithDisplayedItems:(id)a0;
- (BOOL)_shouldSkipModuleCreationForGroupKeyPath:(id)a0;
- (id)initWithDelegate:(id)a0 module:(id)a1;
- (id)updateSettingItem:(id)a0 withValue:(id)a1;

@end
