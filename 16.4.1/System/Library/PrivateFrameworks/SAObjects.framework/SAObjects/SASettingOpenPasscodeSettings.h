@interface SASettingOpenPasscodeSettings : SASettingOpenSettings

+ (id)openPasscodeSettings;
+ (id)openPasscodeSettingsWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
