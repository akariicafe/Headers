@class NSCountedSet, NSMapTable, NFMutexLock, NSHashTable, FCBoostableOperationThrottler, NSString;
@protocol FCFetchCoordinatorDelegate;

@interface FCFetchCoordinator : NSObject <FCBoostableOperationThrottlerDelegate>

@property (retain, nonatomic) NSHashTable *fetchGroups;
@property (retain, nonatomic) NSCountedSet *allKeys;
@property (retain, nonatomic) NSMapTable *fetchOperationsByGroup;
@property (retain, nonatomic) NFMutexLock *accessLock;
@property (retain, nonatomic) FCBoostableOperationThrottler *fetchThrottler;
@property (weak, nonatomic) id<FCFetchCoordinatorDelegate> delegate;
@property unsigned long long maxConcurrentFetchCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)fetchKeysUnconditionally:(id)a0 context:(id)a1 qualityOfService:(long long)a2 relativePriority:(long long)a3 completionQueue:(id)a4 completion:(id /* block */)a5;
- (void)operationThrottlerPerformOperation:(id)a0;
- (void)removeFetchGroup:(id)a0;
- (void)beginFetchesIfNeededWithLock;
- (void)cancelFetchesIfNeededWithLock;
- (void)addFetchGroup:(id)a0;
- (id)fetchKeys:(id)a0 context:(id)a1 qualityOfService:(long long)a2 relativePriority:(long long)a3 completionQueue:(id)a4 completion:(id /* block */)a5;
- (id)fetchKey:(id)a0 qualityOfService:(long long)a1 completionQueue:(id)a2 completion:(id /* block */)a3;

@end
