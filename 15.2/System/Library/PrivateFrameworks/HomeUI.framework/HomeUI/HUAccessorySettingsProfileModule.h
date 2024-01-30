@class HUAccessorySettingsProfileItemProvider, NSString, HFAccessorySettingManagedConfigurationAdapter, HFAccessorySettingGroupItem;
@protocol HUAccessorySettingsProfileModuleDelegate;

@interface HUAccessorySettingsProfileModule : HFItemModule <HFAccessorySettingManagedConfigurationAdapterObserver>

@property (weak, nonatomic) id<HUAccessorySettingsProfileModuleDelegate> delegate;
@property (readonly, nonatomic) HUAccessorySettingsProfileItemProvider *profileItemProvider;
@property (readonly, nonatomic) HFAccessorySettingGroupItem *settingGroupItem;
@property (readonly, nonatomic) HFAccessorySettingManagedConfigurationAdapter *adapter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)itemProviders;
- (void).cxx_destruct;
- (id)buildSectionsWithDisplayedItems:(id)a0;
- (void)managedConfigurationAdapterSettingsWereUpdated:(id)a0;
- (id)_actuallyRemoveProfileItem:(id)a0;
- (id)initWithItemUpdater:(id)a0 settingGroupItem:(id)a1;
- (id)promptForRemoveProfileItem:(id)a0;

@end
