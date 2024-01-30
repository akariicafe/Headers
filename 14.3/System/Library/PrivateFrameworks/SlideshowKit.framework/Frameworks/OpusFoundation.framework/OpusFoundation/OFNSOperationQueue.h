@class NSPointerArray, NSMutableIndexSet, NSObject;
@protocol OS_dispatch_queue;

@interface OFNSOperationQueue : NSOperationQueue {
    NSObject<OS_dispatch_queue> *_operationsLookupTableQueue;
    NSPointerArray *_operationsLookupTable;
    NSMutableIndexSet *_operationsLookupTableFreeIndices;
}

- (id)init;
- (void)dealloc;
- (void)_setupOperationsLookupTable;
- (void)_setOperationLookupObject:(id)a0 forKey:(unsigned long long)a1;
- (id)_operationLookupObjectForKey:(unsigned long long)a0;
- (void)addOperation:(id)a0 context:(id)a1 identifier:(id)a2 queuePriority:(long long)a3;
- (void)cancelAllOperationsWithContext:(id)a0;
- (void)cancelAllOperationsWithIdentifier:(id)a0;
- (void)cancelAllOperationsWithContext:(id)a0 andIdentifier:(id)a1;
- (unsigned long long)addOperation:(id)a0 withPriority:(long long)a1;
- (void)cancelSlideshowOperationWithID:(unsigned long long)a0;

@end
