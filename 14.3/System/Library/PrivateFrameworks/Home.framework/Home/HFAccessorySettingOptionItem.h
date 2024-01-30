@class HMAccessorySelectionSettingItem, NSDictionary;

@interface HFAccessorySettingOptionItem : HFAccessorySettingItem

@property (retain, nonatomic) HMAccessorySelectionSettingItem *optionItem;
@property (retain, nonatomic) NSDictionary *usageOptions;

- (id)initWithHomeKitSettingsVendor:(id)a0 usageOptions:(id)a1 setting:(id)a2 optionItem:(id)a3;
- (id)settingKeyPath;
- (void)_decorateOutcomeWithDependencies:(id)a0;
- (id)toggleSelection;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)value;
- (id)homeKitObject;
- (id)_subclass_updateWithOptions:(id)a0;

@end
