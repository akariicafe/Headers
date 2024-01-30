@interface SASettingOpenPasscodeSettings : SASettingOpenSettings

+ (id)openPasscodeSettings;
+ (id)openPasscodeSettingsWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
