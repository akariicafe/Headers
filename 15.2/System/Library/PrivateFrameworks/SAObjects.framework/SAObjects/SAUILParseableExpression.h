@class SADomainObject, NSString;

@interface SAUILParseableExpression : SADomainObject

@property (retain, nonatomic) SADomainObject *context;
@property (copy, nonatomic) NSString *expressionString;

+ (id)parseableExpression;
+ (id)parseableExpressionWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
