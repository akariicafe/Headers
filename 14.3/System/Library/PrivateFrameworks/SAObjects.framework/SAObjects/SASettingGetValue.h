@interface SASettingGetValue : SASettingCommand

+ (id)getValueWithDictionary:(id)a0 context:(id)a1;
+ (id)getValue;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
