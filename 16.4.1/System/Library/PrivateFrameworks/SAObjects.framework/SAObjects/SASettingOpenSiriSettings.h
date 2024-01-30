@interface SASettingOpenSiriSettings : SASettingOpenSettings

+ (id)openSiriSettings;
+ (id)openSiriSettingsWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
