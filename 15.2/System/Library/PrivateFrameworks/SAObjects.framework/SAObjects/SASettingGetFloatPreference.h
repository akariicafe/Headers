@class NSString;

@interface SASettingGetFloatPreference : SASettingGetFloat

@property (copy, nonatomic) NSString *settingKey;

+ (id)getFloatPreference;
+ (id)getFloatPreferenceWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
