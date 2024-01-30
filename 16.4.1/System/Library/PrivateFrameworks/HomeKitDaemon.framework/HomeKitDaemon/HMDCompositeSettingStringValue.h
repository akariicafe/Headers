@class NSString;

@interface HMDCompositeSettingStringValue : HMDCompositeSettingValue <HMDCompositeSettingsStringValueProviding>

@property (readonly, copy) NSString *stringValue;

- (id)initWithValue:(id)a0;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (BOOL)isEqualValue:(id)a0;

@end
