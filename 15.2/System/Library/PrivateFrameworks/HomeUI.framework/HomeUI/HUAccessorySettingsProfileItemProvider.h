@class HFAccessorySettingManagedConfigurationAdapter, NSMutableSet, HMSettingGroup;

@interface HUAccessorySettingsProfileItemProvider : HFItemProvider

@property (retain, nonatomic) HMSettingGroup *settingGroup;
@property (retain, nonatomic) NSMutableSet *accessorySettingsProfileItems;
@property (retain, nonatomic) HFAccessorySettingManagedConfigurationAdapter *adapter;
@property (copy, nonatomic) id /* block */ filter;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)reloadItems;
- (id)items;
- (id)invalidationReasons;
- (id)initWithAdapter:(id)a0 settingGroup:(id)a1;

@end
