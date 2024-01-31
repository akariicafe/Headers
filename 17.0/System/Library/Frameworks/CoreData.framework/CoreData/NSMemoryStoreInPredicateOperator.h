@class NSManagedObjectContext;

@interface NSMemoryStoreInPredicateOperator : NSInPredicateOperator {
    NSManagedObjectContext *_context;
}

- (BOOL)performPrimitiveOperationUsingObject:(id)a0 andObject:(id)a1;
- (void)dealloc;
- (void)setContext:(id)a0;

@end
