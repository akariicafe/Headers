@interface SAMPGetState : SADomainCommand

+ (id)getState;
+ (id)getStateWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)mutatingCommand;

@end
