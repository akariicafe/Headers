@class REScriptToken, REScriptASTNode;

@interface REScriptASTBinaryExpressionNode : REScriptASTNode

@property (readonly, nonatomic) REScriptToken *binaryOperator;
@property (readonly, nonatomic) REScriptASTNode *expression;

+ (id)parseBuffer:(id)a0 error:(id *)a1;

- (id)dependencies;
- (void).cxx_destruct;
- (id)initWithOperator:(id)a0 expression:(id)a1;

@end
