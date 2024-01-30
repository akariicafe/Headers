@class REScriptToken, NSDictionary, REScriptASTNode;

@interface REScriptASTFeatureNode : REScriptASTNode

@property (readonly, nonatomic) REScriptToken *name;
@property (readonly, nonatomic) NSDictionary *options;
@property (readonly, nonatomic) REScriptASTNode *value;

+ (id)parseBuffer:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)dependencies;
- (id)initWithName:(id)a0 options:(id)a1 expression:(id)a2;

@end
