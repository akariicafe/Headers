@class NSSet;

@interface RTPredicateInspector : NSObject <NSPredicateVisitor>

@property (nonatomic) BOOL predicateContainsSubstitutionVariables;
@property (retain, nonatomic) NSSet *substitutionVariables;

- (void).cxx_destruct;
- (void)visitPredicateExpression:(id)a0;
- (void)visitPredicateOperator:(id)a0;
- (BOOL)predicate:(id)a0 referencesSubstitutionVariablesFromSet:(id)a1;
- (void)_inspectExpression:(id)a0;
- (void)visitPredicate:(id)a0;

@end
