@interface SASettingCommand : SADomainCommand

+ (id)command;
+ (id)commandWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
