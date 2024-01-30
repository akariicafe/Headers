@interface SAAssistantNotFound : SABaseClientBoundCommand

+ (id)assistantNotFoundWithDictionary:(id)a0 context:(id)a1;
+ (id)assistantNotFound;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
