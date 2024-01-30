@class NSString, NSDictionary, HFAccessorySettingsEntity, HMSetting;
@protocol HFHomeKitObject, HFHomeKitSettingsVendor;

@interface HFAccessorySettingItem : HFItem <HFHomeKitSettingItemProtocol>

@property (retain, nonatomic) id<HFHomeKitSettingsVendor> homeKitSettingsVendor;
@property (retain, nonatomic) HMSetting *setting;
@property (retain, nonatomic) HFAccessorySettingsEntity *entity;
@property (retain, nonatomic) NSDictionary *usageOptions;
@property (readonly, nonatomic) NSString *settingKeyPath;
@property (readonly, nonatomic) id<HFHomeKitObject> homeKitObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)value;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)updateValue:(id)a0;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)initWithHomeKitSettingsVendor:(id)a0 usageOptions:(id)a1 setting:(id)a2;
- (void)_decorateOutcomeWithDependencies:(id)a0;
- (void)_decorateOutcomeWithResultKeys:(id)a0;
- (void)_decorateOutcomeWithAccessorySettingResultKeys:(id)a0;
- (void)_decorateHiddenOrDisabled:(id)a0;
- (BOOL)_validateKeyPathDependencies;

@end
