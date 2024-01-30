@interface SAAXPauseSpeaking : SADomainCommand

+ (id)pauseSpeaking;
+ (id)pauseSpeakingWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
