@class NSManagedObjectContext;

@interface NSMemoryStoreEqualityPredicateOperator : NSEqualityPredicateOperator {
    NSManagedObjectContext *_context;
}

- (BOOL)performPrimitiveOperationUsingObject:(id)a0 andObject:(id)a1;
- (void)setContext:(id)a0;
- (void)dealloc;

@end
