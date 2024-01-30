@class SAIntentGroupProtobufMessage;

@interface SAIntentGroupSendPaymentSnippet : SAUISnippet

@property (retain, nonatomic) SAIntentGroupProtobufMessage *intent;
@property (retain, nonatomic) SAIntentGroupProtobufMessage *intentResponse;

+ (id)sendPaymentSnippet;
+ (id)sendPaymentSnippetWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
