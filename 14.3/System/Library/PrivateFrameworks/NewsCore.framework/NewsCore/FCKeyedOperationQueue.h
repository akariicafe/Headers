@class NSMutableDictionary, NSOrderedSet, NSMutableSet, NSMutableOrderedSet, NSObject;
@protocol OS_dispatch_group, OS_dispatch_queue, FCKeyedOperationQueueDelegate;

@interface FCKeyedOperationQueue : NSObject

@property (weak, nonatomic) id<FCKeyedOperationQueueDelegate> delegate;
@property (retain, nonatomic) NSMutableOrderedSet *mutableKeyQueue;
@property (retain, nonatomic) NSMutableSet *keysForExecutingOperations;
@property (nonatomic) long long maxConcurrentOperationCount;
@property (retain, nonatomic) NSMutableDictionary *cancelHandlersByKey;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *operationExecutionGroup;
@property (copy, nonatomic) NSOrderedSet *keyQueue;
@property (nonatomic, getter=isSuspended) BOOL suspended;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *executionQueue;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0 maxConcurrentOperationCount:(long long)a1;
- (void)_cancelOperationsIfNeeded;
- (void)_enqueueOperationIfNeeded;
- (void)notifyWhenAllOperationsAreFinishedUsingBlock:(id /* block */)a0;

@end
