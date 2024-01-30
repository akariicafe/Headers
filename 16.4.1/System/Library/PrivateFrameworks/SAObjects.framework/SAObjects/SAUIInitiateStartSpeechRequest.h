@interface SAUIInitiateStartSpeechRequest : SABaseClientBoundCommand

+ (id)initiateStartSpeechRequest;
+ (id)initiateStartSpeechRequestWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
