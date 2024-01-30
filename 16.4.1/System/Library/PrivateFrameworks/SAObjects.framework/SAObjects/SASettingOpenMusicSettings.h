@interface SASettingOpenMusicSettings : SASettingOpenAppSettings

+ (id)openMusicSettings;
+ (id)openMusicSettingsWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
