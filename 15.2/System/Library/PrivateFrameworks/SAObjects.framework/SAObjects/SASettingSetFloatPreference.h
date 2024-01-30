@class NSString;

@interface SASettingSetFloatPreference : SASettingSetFloat

@property (copy, nonatomic) NSString *settingKey;

+ (id)setFloatPreference;
+ (id)setFloatPreferenceWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;

@end
