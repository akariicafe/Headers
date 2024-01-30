@class NSNumber;

@interface HMDCompositeSettingNumberValue : HMDCompositeSettingValue <HMDCompositeSettingsNumberValueProviding>

@property (readonly, copy) NSNumber *numberValue;

- (id)initWithValue:(id)a0;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (BOOL)isEqualValue:(id)a0;

@end
