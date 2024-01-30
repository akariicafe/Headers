@interface SASettingOpenRemindersSettings : SASettingOpenAppSettings

+ (id)openRemindersSettings;
+ (id)openRemindersSettingsWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
