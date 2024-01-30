@class NSString, NSArray, NSMutableSet, HMAccessorySettingsController, HUHomeKitAccessorySettingsItemModule;

@interface HUAirPlaySettingsDetailsItemManager : HFItemManager

@property (retain, nonatomic) HMAccessorySettingsController *settingsController;
@property (retain, nonatomic) NSMutableSet *allItemProviders;
@property (retain, nonatomic) NSString *settingGroupKeyPath;
@property (retain, nonatomic) NSArray *dependentSettingItems;
@property (retain, nonatomic) HUHomeKitAccessorySettingsItemModule *module;
@property (retain, nonatomic) NSArray *homeKitAccessorySettingsModules;

- (void).cxx_destruct;
- (void)_subscribeToAccessorySettings:(id)a0;
- (id)_buildSectionsWithDisplayedItems:(id)a0;
- (id)_buildItemModulesForHome:(id)a0;
- (id)initWithDelegate:(id)a0 module:(id)a1;
- (id)updateSettingItem:(id)a0 withValue:(id)a1;
- (BOOL)_shouldHideModuleHavingGroupKeyPath:(id)a0;

@end
