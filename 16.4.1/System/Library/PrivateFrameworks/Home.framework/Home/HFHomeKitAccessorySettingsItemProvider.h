@class NSUUID, NSString, NSArray, HFItem, NSDictionary, HMAccessorySettingsController, NSMutableSet, HMHomeManager;
@protocol HFServiceLikeItem;

@interface HFHomeKitAccessorySettingsItemProvider : HFItemProvider <HFHomeKitSettingItemProviderProtocol>

@property (retain, nonatomic) NSDictionary *usageOptions;
@property (retain, nonatomic) NSArray *moduleSettings;
@property (copy, nonatomic) NSString *groupKeyPath;
@property (retain, nonatomic) NSUUID *accessoryIdentifier;
@property (retain, nonatomic) NSMutableSet *settingItems;
@property (retain, nonatomic) HMHomeManager *homeManager;
@property (retain, nonatomic) HMAccessorySettingsController *settingsController;
@property (retain, nonatomic) HFItem<HFServiceLikeItem> *sourceItem;
@property (retain, nonatomic) NSArray *allKeyPaths;
@property (retain, nonatomic) NSArray *homeKitKeyPaths;
@property (retain, nonatomic) NSDictionary *splitSettingsDictionary;
@property (retain, nonatomic) NSDictionary *nonHomeKitSettingsDictionary;
@property (nonatomic) BOOL settingsAlreadyFetched;

- (BOOL)updateSettings:(id)a0;
- (void).cxx_destruct;
- (id)items;
- (id)reloadItems;
- (void)_subscribeToAccessorySettings:(id)a0;
- (id)initWithSettingsController:(id)a0 sourceItem:(id)a1 settingGroupKeyPath:(id)a2 moduleSettings:(id)a3 usageOptions:(id)a4;
- (id)sourceItemAccessory;
- (void)updateSettingValue:(id)a0 forKeyPath:(id)a1;
- (id)_fetchSettingsAndReloadItems;
- (id)_generateAccessorySettingItemForSettings:(id)a0 homeKitSettings:(id)a1 keyPaths:(id)a2;
- (id)_generateAccessorySettingItemForSettings:(id)a0 keyPaths:(id)a1;
- (id)_reloadItemsFromSettings:(id)a0 performInitialUpdateOnItems:(BOOL)a1;
- (BOOL)shouldUpdateForKeyPaths:(id)a0;

@end
