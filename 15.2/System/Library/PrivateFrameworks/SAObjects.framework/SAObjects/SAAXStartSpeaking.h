@interface SAAXStartSpeaking : SADomainCommand

+ (id)startSpeaking;
+ (id)startSpeakingWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
