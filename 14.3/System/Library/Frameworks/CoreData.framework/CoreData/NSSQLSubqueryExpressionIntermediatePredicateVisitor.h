@class NSSQLIntermediate;

@interface NSSQLSubqueryExpressionIntermediatePredicateVisitor : NSObject {
    NSSQLIntermediate *_scope;
    BOOL _foundKeypath;
}

- (void)dealloc;
- (void)visitPredicateExpression:(id)a0;
- (BOOL)checkPredicate:(id)a0;
- (id)initWithScope:(id)a0;
- (void)visitPredicate:(id)a0;

@end
