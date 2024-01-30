@interface SASettingOpenGameCenterSettings : SASettingOpenAppSettings

+ (id)openGameCenterSettings;
+ (id)openGameCenterSettingsWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
