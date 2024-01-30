@class NSCountedSet, NSString, FCMapTable, NSHashTable, NFMutexLock, FCBoostableOperationThrottler;
@protocol FCFetchCoordinatorDelegate;

@interface FCFetchCoordinator : NSObject <FCBoostableOperationThrottlerDelegate> {
    NSHashTable *_fetchGroups;
    NSCountedSet *_allKeys;
    FCMapTable *_fetchOperationsByGroup;
    NFMutexLock *_accessLock;
    FCBoostableOperationThrottler *_fetchThrottler;
}

@property (weak, nonatomic) id<FCFetchCoordinatorDelegate> delegate;
@property unsigned long long maxConcurrentFetchCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)fetchKeys:(id)a0 context:(id)a1 qualityOfService:(long long)a2 relativePriority:(long long)a3 completionQueue:(id)a4 completion:(id /* block */)a5;
- (id)fetchKey:(id)a0 qualityOfService:(long long)a1 completionQueue:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (id)init;
- (void)operationThrottlerPerformOperation:(id)a0;
- (id)fetchKeysUnconditionally:(id)a0 context:(id)a1 qualityOfService:(long long)a2 relativePriority:(long long)a3 completionQueue:(id)a4 completion:(id /* block */)a5;

@end
