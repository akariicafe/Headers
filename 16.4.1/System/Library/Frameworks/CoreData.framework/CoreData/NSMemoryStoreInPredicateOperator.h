@class NSManagedObjectContext;

@interface NSMemoryStoreInPredicateOperator : NSInPredicateOperator {
    NSManagedObjectContext *_context;
}

- (void)setContext:(id)a0;
- (BOOL)performPrimitiveOperationUsingObject:(id)a0 andObject:(id)a1;
- (void)dealloc;

@end
