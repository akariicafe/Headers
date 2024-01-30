@interface SASettingOpenMCCSettings : SASettingOpenAppSettings

+ (id)openMCCSettings;
+ (id)openMCCSettingsWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
