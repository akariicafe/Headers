@interface SASettingOpenMessagesSettings : SASettingOpenAppSettings

+ (id)openMessagesSettings;
+ (id)openMessagesSettingsWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
