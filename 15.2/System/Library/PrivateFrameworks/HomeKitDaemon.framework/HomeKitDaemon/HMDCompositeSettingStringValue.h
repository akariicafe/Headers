@class NSString;

@interface HMDCompositeSettingStringValue : HMDCompositeSettingValue <HMDCompositeSettingsStringValueProviding>

@property (readonly, copy) NSString *stringValue;

- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)initWithValue:(id)a0;
- (BOOL)isEqualValue:(id)a0;

@end
