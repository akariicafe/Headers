@class NSMutableArray;

@interface NSSQLPredicateAnalyser : NSObject <NSPredicateVisitor> {
    BOOL _compoundPredicate;
    NSMutableArray *_keys;
    NSMutableArray *_allModifierPredicates;
    NSMutableArray *_setExpressions;
    NSMutableArray *_subqueries;
}

- (id)init;
- (void)dealloc;
- (void)visitPredicateExpression:(id)a0;
- (void)visitPredicateOperator:(id)a0;
- (id)keypaths;
- (id)allModifierPredicates;
- (id)subqueries;
- (void)visitPredicate:(id)a0;
- (id)setExpressions;

@end
