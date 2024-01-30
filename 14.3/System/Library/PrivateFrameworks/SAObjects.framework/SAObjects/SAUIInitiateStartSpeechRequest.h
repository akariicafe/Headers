@interface SAUIInitiateStartSpeechRequest : SABaseClientBoundCommand

+ (id)initiateStartSpeechRequest;
+ (id)initiateStartSpeechRequestWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
