@interface SASettingGetVoiceOver : SASettingGetBool

+ (id)getVoiceOver;
+ (id)getVoiceOverWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;

@end
