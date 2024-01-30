@class NSSet;

@interface ATXActionCriteriaPredicateChecker : NSObject <NSPredicateVisitor> {
    NSSet *_propertyNames;
    BOOL _ok;
}

- (void)visitPredicate:(id)a0;
- (void)visitPredicateOperator:(id)a0;
- (id)initWithObject:(id)a0;
- (void)visitPredicateExpression:(id)a0;
- (BOOL)isValid:(id)a0;
- (void).cxx_destruct;

@end
