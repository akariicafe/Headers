@interface SASSpeechServerEndpointIdentified : SABaseClientBoundCommand

+ (id)speechServerEndpointIdentified;
+ (id)speechServerEndpointIdentifiedWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;

@end
