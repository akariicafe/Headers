@interface SAAXSpeakSlower : SADomainCommand

+ (id)speakSlower;
+ (id)speakSlowerWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
