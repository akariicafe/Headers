@interface SASettingOpenNotesSettings : SASettingOpenAppSettings

+ (id)openNotesSettings;
+ (id)openNotesSettingsWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
