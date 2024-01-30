@interface HMDCompositeSettingBoolValue : HMDCompositeSettingValue <HMDCompositeSettingsBoolValueProviding>

@property (readonly) BOOL boolValue;

- (id)attributeDescriptions;
- (id)initWithValue:(BOOL)a0;
- (BOOL)isEqualValue:(id)a0;

@end
