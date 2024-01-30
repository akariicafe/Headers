@interface SASettingCommand : SADomainCommand

+ (id)command;
+ (id)commandWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
