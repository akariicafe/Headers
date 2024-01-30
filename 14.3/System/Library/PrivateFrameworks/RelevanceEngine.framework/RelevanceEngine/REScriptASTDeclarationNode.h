@class REScriptToken, REScriptASTNode;

@interface REScriptASTDeclarationNode : REScriptASTNode

@property (readonly, nonatomic) REScriptToken *type;
@property (readonly, nonatomic) REScriptToken *name;
@property (readonly, nonatomic) REScriptASTNode *value;

+ (id)parseBuffer:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)dependencies;
- (id)initWithName:(id)a0 type:(id)a1 expression:(id)a2;

@end
