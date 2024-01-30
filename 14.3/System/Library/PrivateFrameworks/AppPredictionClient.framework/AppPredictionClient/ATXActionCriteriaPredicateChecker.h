@class NSSet;

@interface ATXActionCriteriaPredicateChecker : NSObject <NSPredicateVisitor> {
    NSSet *_propertyNames;
    BOOL _ok;
}

- (void).cxx_destruct;
- (id)initWithObject:(id)a0;
- (void)visitPredicateExpression:(id)a0;
- (void)visitPredicateOperator:(id)a0;
- (void)visitPredicate:(id)a0;
- (BOOL)isValid:(id)a0;

@end
