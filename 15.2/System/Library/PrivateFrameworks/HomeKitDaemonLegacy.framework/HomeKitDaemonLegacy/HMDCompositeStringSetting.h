@class NSString;

@interface HMDCompositeStringSetting : HMDCompositeSetting <HMDCompositeSettingsStringValueProviding>

@property (readonly, copy) NSString *stringValue;

- (id)attributeDescriptions;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualValue:(id)a0;
- (id)initWithValue:(id)a0 readVersion:(id)a1 writeVersion:(id)a2;

@end
