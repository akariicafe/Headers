@interface SACancelSucceeded : SABaseClientBoundCommand

+ (id)cancelSucceeded;
+ (id)cancelSucceededWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;

@end
