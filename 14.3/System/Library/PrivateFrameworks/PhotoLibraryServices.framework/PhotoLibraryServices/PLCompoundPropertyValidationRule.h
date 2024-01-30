@class NSArray;

@interface PLCompoundPropertyValidationRule : PLPropertyValidationRule

@property (nonatomic) long long compoundType;
@property (retain, nonatomic) NSArray *rules;

+ (id)andCompoundPropertyValidationRuleWithRules:(id)a0;
+ (id)orCompoundPropertyValidationRuleWithRules:(id)a0;

- (id)predicate;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0 rules:(id)a1;
- (id)currentValuesOfObject:(id)a0;
- (id)keyPaths;

@end
