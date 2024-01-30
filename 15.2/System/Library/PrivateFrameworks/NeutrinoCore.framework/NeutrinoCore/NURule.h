@interface NURule : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long salience;

+ (id)ruleWithPredicate:(id)a0 assertingFact:(id)a1 grade:(double)a2;
+ (id)ruleWithPredicate:(id)a0 retractingFact:(id)a1 grade:(double)a2;
+ (id)ruleWithPredicate:(id)a0 action:(id /* block */)a1;
+ (id)ruleWithBlockPredicate:(id /* block */)a0 action:(id /* block */)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)evaluatePredicateWithSystem:(id)a0;
- (void)performActionWithSystem:(id)a0;

@end
