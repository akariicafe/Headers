@interface SATimerGet : SADomainCommand

+ (id)get;
+ (id)getWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;

@end
