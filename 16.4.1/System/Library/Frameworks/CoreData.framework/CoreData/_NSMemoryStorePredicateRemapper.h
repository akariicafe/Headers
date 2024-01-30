@class NSManagedObjectContext;

@interface _NSMemoryStorePredicateRemapper : NSObject <NSPredicateVisitor> {
    NSManagedObjectContext *_context;
}

+ (id)defaultInstance;

- (void)visitPredicateExpression:(id)a0;
- (id)createPredicateForFetchFromPredicate:(id)a0 withContext:(id)a1;
- (void)visitPredicate:(id)a0;
- (void)dealloc;
- (id)createPredicateForFetchFromPredicate:(id)a0;
- (id)init;
- (void)visitPredicateOperator:(id)a0;

@end
