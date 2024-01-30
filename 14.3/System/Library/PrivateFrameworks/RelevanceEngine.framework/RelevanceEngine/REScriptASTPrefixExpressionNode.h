@class REScriptToken, REScriptASTNode;

@interface REScriptASTPrefixExpressionNode : REScriptASTNode

@property (readonly, nonatomic) REScriptToken *prefixOperator;
@property (readonly, nonatomic) REScriptASTNode *node;

+ (id)parseBuffer:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)dependencies;
- (id)initWithPrefixOperatorToken:(id)a0 primaryExpression:(id)a1;

@end
