@interface SAAXRestartSpeaking : SADomainCommand

+ (id)restartSpeaking;
+ (id)restartSpeakingWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
