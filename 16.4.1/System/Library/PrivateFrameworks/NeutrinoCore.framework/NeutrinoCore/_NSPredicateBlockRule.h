@interface _NSPredicateBlockRule : NSPredicateRule {
    id /* block */ _action;
}

- (id)debugDescription;
- (void).cxx_destruct;
- (id)initWithPredicate:(id)a0 action:(id /* block */)a1;
- (void)performActionWithSystem:(id)a0;

@end
