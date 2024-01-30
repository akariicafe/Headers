@interface SACFProviderCommand : SACFAbstractClientCommand

+ (id)providerCommand;
+ (id)providerCommandWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
