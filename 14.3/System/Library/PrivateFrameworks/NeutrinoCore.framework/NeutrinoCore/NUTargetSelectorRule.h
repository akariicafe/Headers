@interface NUTargetSelectorRule : NURule {
    void /* function */ *_predicate;
    void /* function */ *_action;
}

@property (readonly, weak, nonatomic) id target;
@property (readonly, nonatomic) SEL predicateSelector;
@property (readonly, nonatomic) SEL actionSelector;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)performActionWithSystem:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)evaluatePredicateWithSystem:(id)a0;
- (id)initWithTarget:(id)a0 predicate:(SEL)a1 action:(SEL)a2;
- (BOOL)_defaultPredicate:(id)a0;
- (void)_defaultAction:(id)a0;

@end
