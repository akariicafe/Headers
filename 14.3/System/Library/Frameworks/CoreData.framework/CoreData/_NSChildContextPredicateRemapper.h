@class NSManagedObjectContext;

@interface _NSChildContextPredicateRemapper : NSObject <NSPredicateVisitor> {
    NSManagedObjectContext *_context;
}

- (id)init;
- (void)dealloc;
- (void)visitPredicateExpression:(id)a0;
- (void)visitPredicateOperator:(id)a0;
- (void)visitPredicate:(id)a0;

@end
