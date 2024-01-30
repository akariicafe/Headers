@interface SASettingCommand : SADomainCommand

+ (id)command;
+ (id)commandWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
