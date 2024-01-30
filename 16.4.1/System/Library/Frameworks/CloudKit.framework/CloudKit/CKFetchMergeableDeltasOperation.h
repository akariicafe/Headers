@class NSArray, CKFetchMergeableDeltasOperationInfo;
@protocol CKFetchMergeableDeltasOperationCallbacks;

@interface CKFetchMergeableDeltasOperation : CKDatabaseOperation <CKFetchMergeableDeltasOperationCallbacks>

@property (copy, nonatomic) NSArray *mergeableValueIDs;
@property (readonly, nonatomic) id<CKFetchMergeableDeltasOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKFetchMergeableDeltasOperationInfo *operationInfo;
@property (copy, nonatomic) id /* block */ deltasFetchedBlock;
@property (copy, nonatomic) id /* block */ fetchMergeableDeltasCompletionBlock;

+ (SEL)daemonInvocationSelector;
+ (void)applyDaemonCallbackInterfaceTweaks:(id)a0;

- (void)fillOutOperationInfo:(id)a0;
- (void)fillFromOperationInfo:(id)a0;
- (BOOL)CKOperationShouldRun:(id *)a0;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (BOOL)hasCKOperationCallbacksSet;
- (id)activityCreate;
- (void).cxx_destruct;
- (void)handleFetchForMergeableValueID:(id)a0 fetchedDeltas:(id)a1 error:(id)a2;
- (id)initWithMergeableValueIDs:(id)a0;

@end
