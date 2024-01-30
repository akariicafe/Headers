@class CKModifySubscriptionsOperationInfo, NSMutableDictionary, NSArray, NSMutableArray;
@protocol CKModifySubscriptionsOperationCallbacks;

@interface CKModifySubscriptionsOperation : CKDatabaseOperation <CKModifySubscriptionsOperationCallbacks>

@property (retain, nonatomic) NSMutableArray *savedSubscriptions;
@property (retain, nonatomic) NSMutableArray *deletedSubscriptionIDs;
@property (retain, nonatomic) NSMutableDictionary *subscriptionsBySubscriptionIDs;
@property (retain, nonatomic) NSMutableDictionary *subscriptionErrors;
@property (readonly, nonatomic) id<CKModifySubscriptionsOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKModifySubscriptionsOperationInfo *operationInfo;
@property (copy, nonatomic) NSArray *subscriptionsToSave;
@property (copy, nonatomic) NSArray *subscriptionIDsToDelete;
@property (copy, nonatomic) id /* block */ modifySubscriptionsCompletionBlock;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)a0;

- (id)activityCreate;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (BOOL)CKOperationShouldRun:(id *)a0;
- (void)fillFromOperationInfo:(id)a0;
- (void)performCKOperation;
- (id)init;
- (void).cxx_destruct;
- (id)initWithSubscriptionsToSave:(id)a0 subscriptionIDsToDelete:(id)a1;
- (void)handleSubscriptionDeleteForSubscriptionID:(id)a0 error:(id)a1;
- (void)handleSubscriptionSaveForSubscriptionID:(id)a0 error:(id)a1;
- (void)fillOutOperationInfo:(id)a0;
- (BOOL)hasCKOperationCallbacksSet;

@end
