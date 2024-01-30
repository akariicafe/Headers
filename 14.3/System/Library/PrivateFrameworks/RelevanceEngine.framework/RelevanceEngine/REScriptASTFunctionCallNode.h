@class REScriptToken, NSArray;

@interface REScriptASTFunctionCallNode : REScriptASTNode

@property (readonly, nonatomic) REScriptToken *functionIdentifier;
@property (readonly, nonatomic) NSArray *arguments;

+ (id)parseBuffer:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)dependencies;
- (id)initWithFunctionName:(id)a0 arguments:(id)a1;

@end
