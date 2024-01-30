@class NSString, SAUILParseableExpression;

@interface SAUILParsedExpression : SADomainObject

@property (retain, nonatomic) SAUILParseableExpression *parseableExpression;
@property (copy, nonatomic) NSString *parsedOutput;

+ (id)parsedExpression;
+ (id)parsedExpressionWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
