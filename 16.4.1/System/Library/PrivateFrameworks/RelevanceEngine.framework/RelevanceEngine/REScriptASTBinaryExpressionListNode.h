@class NSArray;

@interface REScriptASTBinaryExpressionListNode : REScriptASTNode

@property (readonly, nonatomic) NSArray *expressions;

+ (id)parseBuffer:(id)a0 error:(id *)a1;

- (id)dependencies;
- (void).cxx_destruct;
- (id)initWithExpressions:(id)a0;

@end
