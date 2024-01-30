@class NSManagedObjectContext;

@interface _NSChildContextPredicateRemapper : NSObject <NSPredicateVisitor> {
    NSManagedObjectContext *_context;
}

- (id)createPredicateForFetchFromPredicate:(id)a0 withContext:(id)a1;
- (void)visitPredicate:(id)a0;
- (void)visitPredicateOperator:(id)a0;
- (id)initWithContext:(id)a0;
- (void)visitPredicateExpression:(id)a0;
- (id)init;
- (void)dealloc;

@end
