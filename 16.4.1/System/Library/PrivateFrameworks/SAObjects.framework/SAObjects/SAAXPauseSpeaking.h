@interface SAAXPauseSpeaking : SADomainCommand

+ (id)pauseSpeaking;
+ (id)pauseSpeakingWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
