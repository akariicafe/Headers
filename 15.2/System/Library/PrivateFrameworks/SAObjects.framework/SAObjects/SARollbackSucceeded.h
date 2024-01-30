@interface SARollbackSucceeded : SABaseClientBoundCommand

+ (id)rollbackSucceeded;
+ (id)rollbackSucceededWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;

@end
