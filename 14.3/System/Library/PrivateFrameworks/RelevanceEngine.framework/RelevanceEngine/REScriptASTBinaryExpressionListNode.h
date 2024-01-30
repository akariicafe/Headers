@class NSArray;

@interface REScriptASTBinaryExpressionListNode : REScriptASTNode

@property (readonly, nonatomic) NSArray *expressions;

+ (id)parseBuffer:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)dependencies;
- (id)initWithExpressions:(id)a0;

@end
