@interface SASettingGetBool : SASettingGetValue

+ (id)getBool;
+ (id)getBoolWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)mutatingCommand;

@end
