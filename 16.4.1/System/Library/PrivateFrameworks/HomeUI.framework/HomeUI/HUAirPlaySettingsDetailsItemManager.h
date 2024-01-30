@class NSString, NSArray, NSMutableSet, HMAccessorySettingsController, HUHomeKitAccessorySettingsItemModule;

@interface HUAirPlaySettingsDetailsItemManager : HFItemManager <HFHomeKitAccessorySettingsDataSourceDelegate>

@property (retain, nonatomic) HMAccessorySettingsController *settingsController;
@property (retain, nonatomic) NSMutableSet *allItemProviders;
@property (retain, nonatomic) NSString *settingGroupKeyPath;
@property (retain, nonatomic) NSArray *dependentSettingItems;
@property (retain, nonatomic) HUHomeKitAccessorySettingsItemModule *module;
@property (retain, nonatomic) NSArray *homeKitAccessorySettingsModules;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_buildItemModulesForHome:(id)a0;
- (id)_buildSectionsWithDisplayedItems:(id)a0;
- (BOOL)_shouldHideModuleHavingGroupKeyPath:(id)a0;
- (void)_subscribeToAccessorySettings:(id)a0;
- (id)initWithDelegate:(id)a0 module:(id)a1;
- (id)updateSettingItem:(id)a0 withValue:(id)a1;

@end
