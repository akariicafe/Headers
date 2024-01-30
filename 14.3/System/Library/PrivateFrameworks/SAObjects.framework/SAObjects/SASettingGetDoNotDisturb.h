@interface SASettingGetDoNotDisturb : SASettingGetBool

+ (id)getDoNotDisturb;
+ (id)getDoNotDisturbWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;

@end
