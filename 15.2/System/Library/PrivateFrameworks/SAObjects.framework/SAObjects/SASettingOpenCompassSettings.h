@interface SASettingOpenCompassSettings : SASettingOpenAppSettings

+ (id)openCompassSettings;
+ (id)openCompassSettingsWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
