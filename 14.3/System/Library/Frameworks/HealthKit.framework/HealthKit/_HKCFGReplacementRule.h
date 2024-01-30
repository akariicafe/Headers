@class NSArray, NSString;

@interface _HKCFGReplacementRule : NSObject {
    NSString *_description;
}

@property (copy, nonatomic) NSArray *rightHandSide;
@property (readonly, copy, nonatomic) id /* block */ nodeEvaluator;
@property (readonly, nonatomic) unsigned long long lengthIncrease;

+ (id)ruleWithLHS:(id)a0 RHS:(id)a1 nodeEvaluator:(id /* block */)a2;

- (void).cxx_destruct;
- (id)description;

@end
