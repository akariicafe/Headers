@interface SASettingGetBool : SASettingGetValue

+ (id)getBool;
+ (id)getBoolWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;

@end
