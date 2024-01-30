@class SAIntentGroupProtobufMessage;

@interface SAIntentGroupRequestPaymentSnippet : SAUISnippet

@property (retain, nonatomic) SAIntentGroupProtobufMessage *intent;
@property (retain, nonatomic) SAIntentGroupProtobufMessage *intentResponse;

+ (id)requestPaymentSnippet;
+ (id)requestPaymentSnippetWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
