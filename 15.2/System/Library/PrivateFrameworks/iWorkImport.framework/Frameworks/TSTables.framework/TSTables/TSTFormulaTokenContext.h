@class TSTExpressionNode;

@interface TSTFormulaTokenContext : NSObject

@property (readonly, nonatomic) TSTExpressionNode *expressionNode;
@property (readonly, nonatomic) unsigned long long parenNestingLevel;
@property (readonly, nonatomic) unsigned long long argumentIndex;

+ (id)tokenContextWithExpressionNode:(id)a0 parenNestingLevel:(unsigned long long)a1;
+ (id)tokenContextWithExpressionNode:(id)a0 parenNestingLevel:(unsigned long long)a1 argumentIndex:(unsigned long long)a2;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)initWithExpressionNode:(id)a0 parenNestingLevel:(unsigned long long)a1 argumentIndex:(unsigned long long)a2;
- (id)initWithExpressionNode:(id)a0 parenNestingLevel:(unsigned long long)a1;

@end
