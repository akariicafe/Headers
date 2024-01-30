@interface HMDCompositeBoolSetting : HMDCompositeSetting <HMDCompositeSettingsBoolValueProviding>

@property (readonly) BOOL boolValue;

- (id)attributeDescriptions;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualValue:(id)a0;
- (id)initWithValue:(BOOL)a0 readVersion:(id)a1 writeVersion:(id)a2;

@end
