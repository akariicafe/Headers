@interface SASettingOpenFacebookSettings : SASettingOpenAppSettings

+ (id)openFacebookSettings;
+ (id)openFacebookSettingsWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
