@class NSString, NSUUID, HFItem, NSDictionary, HMImmutableSetting, HMAccessorySettingsController;
@protocol HFServiceLikeItem;

@interface HFHomeKitAccessorySettingItem : HFItem

@property (retain, nonatomic) HFItem<HFServiceLikeItem> *sourceItem;
@property (copy, nonatomic) NSString *localizedTitle;
@property (retain, nonatomic) NSUUID *homeIdentifier;
@property (retain, nonatomic) NSUUID *accessoryIdentifier;
@property (retain, nonatomic) NSDictionary *settingDict;
@property (copy, nonatomic) NSString *settingKeyPath;
@property (retain, nonatomic) NSDictionary *usageOptions;
@property (retain, nonatomic) HMImmutableSetting *setting;
@property (nonatomic) long long userInterfaceType;
@property (retain, nonatomic) HMAccessorySettingsController *settingsController;
@property (retain, nonatomic) id cachedSettingValue;
@property (nonatomic, getter=isDisabled) BOOL disabled;
@property (nonatomic) unsigned long long displayIndex;
@property (readonly, copy, nonatomic) NSString *targetSettingKeyPath;
@property (readonly, nonatomic) id settingValue;
@property (nonatomic) BOOL isControllable;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)updateValue:(id)a0;
- (id)_subclass_updateWithOptions:(id)a0;
- (void)updateSettingValue:(id)a0;
- (BOOL)updateSetting:(id)a0;
- (id)initWithSetting:(id)a0 sourceItem:(id)a1 localizedTitle:(id)a2 settingsController:(id)a3 homeIdentifier:(id)a4 accessoryIdentifier:(id)a5 settingDict:(id)a6 usageOptions:(id)a7;
- (id)initWithDefaultSetting:(id)a0 sourceItem:(id)a1 localizedTitle:(id)a2 settingsController:(id)a3 homeIdentifier:(id)a4 accessoryIdentifier:(id)a5 settingDict:(id)a6 usageOptions:(id)a7;
- (id)initWithSourceItem:(id)a0 localizedTitle:(id)a1 settingsController:(id)a2 homeIdentifier:(id)a3 accessoryIdentifier:(id)a4 settingDict:(id)a5 usageOptions:(id)a6;
- (void)_decorateOutcomeWithResultKeys:(id)a0;
- (id)initWithSettingsController:(id)a0 localizedTitle:(id)a1 homeIdentifier:(id)a2 accessoryIdentifier:(id)a3 settingDict:(id)a4 usageOptions:(id)a5;
- (id)_formattedValueForSetting;

@end
