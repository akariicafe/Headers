@class NSArray, NSMutableDictionary, CKReplaceMergeableDeltasOperationInfo;
@protocol CKReplaceMergeableDeltasOperationCallbacks;

@interface CKReplaceMergeableDeltasOperation : CKDatabaseOperation <CKReplaceMergeableDeltasOperationCallbacks>

@property (retain, nonatomic) NSMutableDictionary *perValueErrors;
@property (readonly, nonatomic) id<CKReplaceMergeableDeltasOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKReplaceMergeableDeltasOperationInfo *operationInfo;
@property (copy, nonatomic) NSArray *replaceDeltasRequests;
@property (copy, nonatomic) id /* block */ perReplacementBlock;
@property (copy, nonatomic) id /* block */ replaceMergeableDeltasCompletionBlock;

+ (SEL)daemonInvocationSelector;

- (BOOL)hasCKOperationCallbacksSet;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (BOOL)CKOperationShouldRun:(id *)a0;
- (void)fillOutOperationInfo:(id)a0;
- (id)activityCreate;
- (void)fillFromOperationInfo:(id)a0;
- (void).cxx_destruct;
- (void)handleCompletedReplaceDeltasRequest:(id)a0 error:(id)a1;
- (id)initWithReplaceDeltasRequests:(id)a0;

@end
