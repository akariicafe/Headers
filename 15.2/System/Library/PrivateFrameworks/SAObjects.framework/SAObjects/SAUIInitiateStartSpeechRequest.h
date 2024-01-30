@interface SAUIInitiateStartSpeechRequest : SABaseClientBoundCommand

+ (id)initiateStartSpeechRequest;
+ (id)initiateStartSpeechRequestWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
