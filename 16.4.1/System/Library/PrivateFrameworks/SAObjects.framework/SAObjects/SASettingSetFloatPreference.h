@class NSString;

@interface SASettingSetFloatPreference : SASettingSetFloat

@property (copy, nonatomic) NSString *settingKey;

+ (id)setFloatPreference;
+ (id)setFloatPreferenceWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)mutatingCommand;

@end
