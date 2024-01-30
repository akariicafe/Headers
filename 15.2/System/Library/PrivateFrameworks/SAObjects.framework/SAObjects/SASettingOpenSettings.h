@interface SASettingOpenSettings : SASettingCommand

+ (id)openSettings;
+ (id)openSettingsWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
