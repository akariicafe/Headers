@interface NURule : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long salience;

+ (id)ruleWithPredicate:(id)a0 assertingFact:(id)a1 grade:(double)a2;
+ (id)ruleWithPredicate:(id)a0 retractingFact:(id)a1 grade:(double)a2;
+ (id)ruleWithPredicate:(id)a0 action:(id /* block */)a1;
+ (id)ruleWithTarget:(id)a0 predicate:(SEL)a1 action:(SEL)a2;
+ (id)ruleWithBlockPredicate:(id /* block */)a0 action:(id /* block */)a1;

- (void)performActionWithSystem:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)evaluatePredicateWithSystem:(id)a0;

@end
