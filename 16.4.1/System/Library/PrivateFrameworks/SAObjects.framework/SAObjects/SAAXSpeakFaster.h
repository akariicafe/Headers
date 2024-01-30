@interface SAAXSpeakFaster : SADomainCommand

+ (id)speakFaster;
+ (id)speakFasterWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
