@class TSTExpressionNode;

@interface TSTFormulaTokenContext : NSObject

@property (readonly, nonatomic) TSTExpressionNode *expressionNode;
@property (readonly, nonatomic) unsigned long long parenNestingLevel;
@property (readonly, nonatomic) unsigned long long argumentIndex;

+ (id)tokenContextWithExpressionNode:(id)a0 parenNestingLevel:(unsigned long long)a1;
+ (id)tokenContextWithExpressionNode:(id)a0 parenNestingLevel:(unsigned long long)a1 argumentIndex:(unsigned long long)a2;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (id)initWithExpressionNode:(id)a0 parenNestingLevel:(unsigned long long)a1 argumentIndex:(unsigned long long)a2;
- (id)initWithExpressionNode:(id)a0 parenNestingLevel:(unsigned long long)a1;

@end
