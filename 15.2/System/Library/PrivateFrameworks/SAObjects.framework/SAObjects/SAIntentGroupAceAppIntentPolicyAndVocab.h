@class SAIntentGroupProtobufMessage;

@interface SAIntentGroupAceAppIntentPolicyAndVocab : SADomainObject

@property (retain, nonatomic) SAIntentGroupProtobufMessage *aceAppBundleInfo;

+ (id)aceAppIntentPolicyAndVocab;
+ (id)aceAppIntentPolicyAndVocabWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
