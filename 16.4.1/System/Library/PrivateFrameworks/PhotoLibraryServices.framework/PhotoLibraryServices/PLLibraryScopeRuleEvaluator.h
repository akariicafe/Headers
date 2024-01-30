@class NSArray, PLLibraryScopeRuleInterpreter;

@interface PLLibraryScopeRuleEvaluator : NSObject

@property (retain, nonatomic) PLLibraryScopeRuleInterpreter *interpreter;
@property (retain, nonatomic) NSArray *rules;

- (id)description;
- (void).cxx_destruct;
- (id)evaluateObjects:(id)a0 withResultEnumerationBlock:(id /* block */)a1;
- (id)initWithRules:(id)a0 andInterpreter:(id)a1;

@end
