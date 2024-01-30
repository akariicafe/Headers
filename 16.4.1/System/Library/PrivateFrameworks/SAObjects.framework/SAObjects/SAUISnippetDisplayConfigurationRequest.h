@interface SAUISnippetDisplayConfigurationRequest : SABaseClientBoundCommand

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
