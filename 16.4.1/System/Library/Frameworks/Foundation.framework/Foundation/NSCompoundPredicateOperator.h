@interface NSCompoundPredicateOperator : NSPredicateOperator

+ (void)initialize;
+ (id)orPredicateOperator;
+ (id)notPredicateOperator;
+ (id)andPredicateOperator;

- (id)symbol;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)predicateFormat;
- (BOOL)evaluatePredicates:(id)a0 withObject:(id)a1;
- (BOOL)evaluatePredicates:(id)a0 withObject:(id)a1 substitutionVariables:(id)a2;

@end
