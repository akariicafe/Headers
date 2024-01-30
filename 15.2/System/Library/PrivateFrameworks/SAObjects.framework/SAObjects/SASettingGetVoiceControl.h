@interface SASettingGetVoiceControl : SASettingGetBool

+ (id)getVoiceControl;
+ (id)getVoiceControlWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;

@end
