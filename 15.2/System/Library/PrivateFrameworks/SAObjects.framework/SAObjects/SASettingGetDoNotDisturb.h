@interface SASettingGetDoNotDisturb : SASettingGetBool

+ (id)getDoNotDisturb;
+ (id)getDoNotDisturbWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;

@end
