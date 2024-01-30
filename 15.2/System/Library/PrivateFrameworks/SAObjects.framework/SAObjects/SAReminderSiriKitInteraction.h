@class SAIntentGroupProtobufMessage;

@interface SAReminderSiriKitInteraction : SADomainObject

@property (retain, nonatomic) SAIntentGroupProtobufMessage *intent;
@property (retain, nonatomic) SAIntentGroupProtobufMessage *intentResponse;

+ (id)siriKitInteraction;
+ (id)siriKitInteractionWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
