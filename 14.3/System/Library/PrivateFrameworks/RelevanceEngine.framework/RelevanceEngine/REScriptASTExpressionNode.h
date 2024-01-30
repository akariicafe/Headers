@class REScriptASTNode;

@interface REScriptASTExpressionNode : REScriptASTNode

@property (readonly, nonatomic) REScriptASTNode *prefixExpression;
@property (readonly, nonatomic) REScriptASTNode *binaryExpressions;

+ (id)parseBuffer:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)dependencies;
- (id)initWithPrefixExpression:(id)a0 binaryExpression:(id)a1;

@end
