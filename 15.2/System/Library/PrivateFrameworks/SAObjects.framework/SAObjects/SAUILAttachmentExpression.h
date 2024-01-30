@protocol SAAceSerializable;

@interface SAUILAttachmentExpression : SAUILParseableExpression

@property (retain, nonatomic) id<SAAceSerializable> attachmentExpression;

+ (id)attachmentExpression;
+ (id)attachmentExpressionWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
