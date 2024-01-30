@interface SASettingOpenControlCenterSettings : SASettingOpenSettings

+ (id)openControlCenterSettings;
+ (id)openControlCenterSettingsWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
