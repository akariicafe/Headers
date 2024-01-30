@class NSData;

@interface SAUILParsedAttachmentExpression : SAUILParsedExpression

@property (copy, nonatomic) NSData *attachment;

+ (id)parsedAttachmentExpression;
+ (id)parsedAttachmentExpressionWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
