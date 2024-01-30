@interface SASettingGetVoiceControl : SASettingGetBool

+ (id)getVoiceControl;
+ (id)getVoiceControlWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;

@end
