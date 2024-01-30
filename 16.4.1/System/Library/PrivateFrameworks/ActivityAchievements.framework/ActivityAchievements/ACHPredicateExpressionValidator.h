@class NSMutableArray;

@interface ACHPredicateExpressionValidator : NSObject <NSPredicateVisitor> {
    BOOL _operatorsValid;
    BOOL _predicateExpressionValid;
    NSMutableArray *_issues;
}

- (void)visitPredicateExpression:(id)a0;
- (void)visitPredicate:(id)a0;
- (void)visitPredicateOperator:(id)a0;
- (void).cxx_destruct;
- (void)visitPredicateExpression:(id)a0 keyPathScope:(id)a1 key:(id)a2;
- (void)_addIssue:(id)a0;
- (id)validateExpressionString:(id)a0;
- (id)validateTemplate:(id)a0;

@end
