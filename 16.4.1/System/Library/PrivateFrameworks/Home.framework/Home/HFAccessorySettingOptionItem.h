@class HMAccessorySelectionSettingItem, NSDictionary;

@interface HFAccessorySettingOptionItem : HFAccessorySettingItem

@property (retain, nonatomic) HMAccessorySelectionSettingItem *optionItem;
@property (retain, nonatomic) NSDictionary *usageOptions;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)value;
- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)homeKitObject;
- (id)settingKeyPath;
- (id)toggleSelection;
- (void)_decorateOutcomeWithDependencies:(id)a0;
- (id)initWithHomeKitSettingsVendor:(id)a0 usageOptions:(id)a1 setting:(id)a2 optionItem:(id)a3;

@end
