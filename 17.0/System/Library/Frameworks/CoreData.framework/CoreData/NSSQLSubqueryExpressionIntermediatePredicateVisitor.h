@class NSSQLIntermediate;

@interface NSSQLSubqueryExpressionIntermediatePredicateVisitor : NSObject {
    NSSQLIntermediate *_scope;
    BOOL _foundKeypath;
}

- (void)dealloc;
- (void)visitPredicate:(id)a0;
- (void)visitPredicateExpression:(id)a0;
- (BOOL)checkPredicate:(id)a0;

@end
