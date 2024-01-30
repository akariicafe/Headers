@class NSNumber;

@interface HMDCompositeSettingNumberValue : HMDCompositeSettingValue <HMDCompositeSettingsNumberValueProviding>

@property (readonly, copy) NSNumber *numberValue;

- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)initWithValue:(id)a0;
- (BOOL)isEqualValue:(id)a0;

@end
