@interface SASettingOpenSettings : SASettingCommand

+ (id)openSettings;
+ (id)openSettingsWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
