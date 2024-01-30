@interface HMDCompositeSettingBoolValue : HMDCompositeSettingValue <HMDCompositeSettingsBoolValueProviding>

@property (readonly) BOOL boolValue;

- (id)initWithValue:(BOOL)a0;
- (id)attributeDescriptions;
- (BOOL)isEqualValue:(id)a0;

@end
