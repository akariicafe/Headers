@class REScriptToken, NSDictionary, REScriptASTNode;

@interface REScriptASTRuleNode : REScriptASTNode

@property (readonly, nonatomic) REScriptToken *type;
@property (readonly, nonatomic) REScriptToken *name;
@property (readonly, nonatomic) NSDictionary *options;
@property (readonly, nonatomic) REScriptASTNode *expression;

+ (id)parseBuffer:(id)a0 error:(id *)a1;

- (id)dependencies;
- (void).cxx_destruct;
- (id)initWithType:(id)a0 options:(id)a1 name:(id)a2 expression:(id)a3;

@end
