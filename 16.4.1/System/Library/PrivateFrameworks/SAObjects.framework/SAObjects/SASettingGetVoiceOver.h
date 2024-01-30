@interface SASettingGetVoiceOver : SASettingGetBool

+ (id)getVoiceOver;
+ (id)getVoiceOverWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)mutatingCommand;

@end
