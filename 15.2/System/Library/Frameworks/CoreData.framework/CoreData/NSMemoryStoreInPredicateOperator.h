@class NSManagedObjectContext;

@interface NSMemoryStoreInPredicateOperator : NSInPredicateOperator {
    NSManagedObjectContext *_context;
}

- (BOOL)performPrimitiveOperationUsingObject:(id)a0 andObject:(id)a1;
- (void)setContext:(id)a0;
- (void)dealloc;

@end
