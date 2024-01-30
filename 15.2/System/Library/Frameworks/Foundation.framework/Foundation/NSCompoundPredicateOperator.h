@interface NSCompoundPredicateOperator : NSPredicateOperator

+ (void)initialize;
+ (id)notPredicateOperator;
+ (id)orPredicateOperator;
+ (id)andPredicateOperator;

- (id)symbol;
- (BOOL)evaluatePredicates:(id)a0 withObject:(id)a1 substitutionVariables:(id)a2;
- (id)predicateFormat;
- (BOOL)evaluatePredicates:(id)a0 withObject:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
