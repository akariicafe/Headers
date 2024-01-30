@class NSArray;

@interface SAGetAppIntentPolicyAndVocab : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *clientIdentifiers;

+ (id)getAppIntentPolicyAndVocab;
+ (id)getAppIntentPolicyAndVocabWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
