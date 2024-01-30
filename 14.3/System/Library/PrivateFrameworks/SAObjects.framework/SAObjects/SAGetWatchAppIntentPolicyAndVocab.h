@class NSArray;

@interface SAGetWatchAppIntentPolicyAndVocab : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *clientIdentifiers;

+ (id)getWatchAppIntentPolicyAndVocab;
+ (id)getWatchAppIntentPolicyAndVocabWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
