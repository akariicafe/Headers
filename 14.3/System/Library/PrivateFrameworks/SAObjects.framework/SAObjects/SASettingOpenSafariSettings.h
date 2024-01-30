@interface SASettingOpenSafariSettings : SASettingOpenAppSettings

+ (id)openSafariSettings;
+ (id)openSafariSettingsWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
