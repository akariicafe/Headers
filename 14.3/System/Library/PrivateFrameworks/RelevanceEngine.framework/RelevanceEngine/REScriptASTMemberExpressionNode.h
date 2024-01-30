@class REScriptToken, REScriptASTNode;

@interface REScriptASTMemberExpressionNode : REScriptASTNode

@property (readonly, nonatomic) REScriptASTNode *expression;
@property (readonly, nonatomic) REScriptToken *member;

+ (id)parseBuffer:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)dependencies;
- (id)initWithMember:(id)a0 expression:(id)a1;

@end
