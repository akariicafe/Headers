@class NSSet;

@interface RTPredicateInspector : NSObject <NSPredicateVisitor>

@property (nonatomic) BOOL predicateContainsSubstitutionVariables;
@property (retain, nonatomic) NSSet *substitutionVariables;

- (void)visitPredicate:(id)a0;
- (void)visitPredicateOperator:(id)a0;
- (void)visitPredicateExpression:(id)a0;
- (void).cxx_destruct;
- (BOOL)predicate:(id)a0 referencesSubstitutionVariablesFromSet:(id)a1;
- (void)_inspectExpression:(id)a0;

@end
