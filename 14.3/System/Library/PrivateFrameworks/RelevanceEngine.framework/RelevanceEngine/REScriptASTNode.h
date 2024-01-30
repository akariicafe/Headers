@class REScriptToken, NSSet;

@interface REScriptASTNode : NSObject

@property (readonly, nonatomic) REScriptToken *token;
@property (readonly, nonatomic) NSSet *dependencies;

+ (id)parseBuffer:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)initWithToken:(id)a0;

@end
