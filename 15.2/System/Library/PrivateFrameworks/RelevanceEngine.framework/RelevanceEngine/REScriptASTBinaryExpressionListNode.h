@class NSArray;

@interface REScriptASTBinaryExpressionListNode : REScriptASTNode

@property (readonly, nonatomic) NSArray *expressions;

+ (id)parseBuffer:(id)a0 error:(id *)a1;

- (id)dependencies;
- (id)initWithExpressions:(id)a0;
- (void).cxx_destruct;

@end
