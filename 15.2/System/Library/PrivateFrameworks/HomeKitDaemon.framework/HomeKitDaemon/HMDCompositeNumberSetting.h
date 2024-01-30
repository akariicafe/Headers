@class NSNumber;

@interface HMDCompositeNumberSetting : HMDCompositeSetting <HMDCompositeSettingsNumberValueProviding>

@property (readonly, copy) NSNumber *numberValue;

- (id)attributeDescriptions;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualValue:(id)a0;
- (id)initWithValue:(id)a0 readVersion:(id)a1 writeVersion:(id)a2;

@end
