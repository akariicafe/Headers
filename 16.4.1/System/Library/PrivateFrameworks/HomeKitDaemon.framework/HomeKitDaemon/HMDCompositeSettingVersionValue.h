@class HMFVersion;

@interface HMDCompositeSettingVersionValue : HMDCompositeSettingValue <HMDCompositeSettingsVersionValueProviding>

@property (readonly, copy) HMFVersion *version;
@property (readonly) long long type;

- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)initWithVersion:(id)a0 type:(long long)a1;

@end
