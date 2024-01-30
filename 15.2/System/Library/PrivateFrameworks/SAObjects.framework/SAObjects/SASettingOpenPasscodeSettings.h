@interface SASettingOpenPasscodeSettings : SASettingOpenSettings

+ (id)openPasscodeSettings;
+ (id)openPasscodeSettingsWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
