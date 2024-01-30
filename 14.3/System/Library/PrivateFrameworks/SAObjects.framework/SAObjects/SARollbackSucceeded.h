@interface SARollbackSucceeded : SABaseClientBoundCommand

+ (id)rollbackSucceeded;
+ (id)rollbackSucceededWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;

@end
