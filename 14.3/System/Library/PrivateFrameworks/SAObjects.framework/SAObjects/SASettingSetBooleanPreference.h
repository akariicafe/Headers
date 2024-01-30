@class NSString;

@interface SASettingSetBooleanPreference : SASettingSetBool

@property (copy, nonatomic) NSString *settingKey;

+ (id)setBooleanPreference;
+ (id)setBooleanPreferenceWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
