@interface SAAXStartSpeaking : SADomainCommand

+ (id)startSpeaking;
+ (id)startSpeakingWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
