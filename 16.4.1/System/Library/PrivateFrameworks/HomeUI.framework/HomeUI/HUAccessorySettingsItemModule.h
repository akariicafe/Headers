@class HMSettings, NSString, HMAccessory, NSSet, HMSettingGroup, HFAccessorySettingsEntity, HFAccessorySettingsItemProvider, NATreeNode;
@protocol HFHomeKitSettingsVendor;

@interface HUAccessorySettingsItemModule : HUServiceDetailsItemModule <HFHomeKitSettingsObserver, HFMediaObjectObserver> {
    NSSet *_itemProviders;
}

@property (readonly, nonatomic) HMAccessory *accessory;
@property (readonly, nonatomic) HMSettings *settings;
@property (readonly, nonatomic) NATreeNode *codex;
@property (readonly, nonatomic) HFAccessorySettingsEntity *parentEntity;
@property (readonly, nonatomic) HMSettingGroup *parentSettingGroup;
@property (retain, nonatomic) NSSet *settingItemsToBeDisplayed;
@property (retain, nonatomic) NSSet *groupItemsToBeDisplayed;
@property (readonly, nonatomic) id<HFHomeKitSettingsVendor> homeKitSettingsVendor;
@property (readonly, nonatomic) HFAccessorySettingsItemProvider *accessorySettingsItemProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)itemProviders;
- (void)mediaObject:(id)a0 didUpdateSettings:(id)a1;
- (void)settingsDidUpdate:(id)a0;
- (void)updateItems:(id)a0;
- (void)_resetIfNeeded;
- (void)updateItems:(id)a0 matchingDependency:(id)a1;
- (id)_itemSectionForGroup:(id)a0 entity:(id)a1 settingItems:(id)a2 groupItems:(id)a3;
- (id)_itemSectionWithEntity:(id)a0 items:(id)a1;
- (id)_itemSectionsForGroupKeyPaths:(id)a0;
- (id)_itemSectionsForParentGroupWithItems;
- (id)_itemSectionsForShowInSeperateSectionItems:(id)a0;
- (void)_registerForAccessorySettingsUpdates;
- (void)_unregisterForAccessorySettingsUpdates;
- (id)buildSectionsWithDisplayedItems:(id)a0;
- (BOOL)checkSoftwareVersionForAccessories:(id)a0 neededSoftwareVersion:(id)a1;
- (id)getAllHomePodFromItem:(id)a0;
- (id)initWithItemUpdater:(id)a0 home:(id)a1 sourceItem:(id)a2;
- (id)initWithItemUpdater:(id)a0 home:(id)a1 sourceItem:(id)a2 usageOptions:(id)a3;
- (id)initWithItemUpdater:(id)a0 homeKitSettingsVendor:(id)a1 usageOptions:(id)a2;
- (id)initWithItemUpdater:(id)a0 mediaAccessoryItem:(id)a1;
- (id)initWithItemUpdater:(id)a0 settingGroupItem:(id)a1 usageOptions:(id)a2;
- (void)registerForExternalUpdates;
- (void)unregisterForExternalUpdates;
- (id)updateItem:(id)a0 withValue:(id)a1;
- (void)updateItemsForKeyPath:(id)a0;

@end
