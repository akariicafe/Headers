@interface SASettingOpenMessagesSettings : SASettingOpenAppSettings

+ (id)openMessagesSettings;
+ (id)openMessagesSettingsWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
