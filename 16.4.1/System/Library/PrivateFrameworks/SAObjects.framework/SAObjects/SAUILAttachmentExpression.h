@protocol SAAceSerializable;

@interface SAUILAttachmentExpression : SAUILParseableExpression

@property (retain, nonatomic) id<SAAceSerializable> attachmentExpression;

+ (id)attachmentExpressionWithDictionary:(id)a0 context:(id)a1;
+ (id)attachmentExpression;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
