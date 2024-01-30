@class NSArray, CKModifySubscriptionsOperationInfo, NSMutableDictionary, NSMutableArray;
@protocol CKModifySubscriptionsOperationCallbacks;

@interface CKModifySubscriptionsOperation : CKDatabaseOperation <CKModifySubscriptionsOperationCallbacks> {
    NSMutableArray *_savedSubscriptions;
    NSMutableArray *_deletedSubscriptionIDs;
    NSMutableDictionary *_subscriptionsBySubscriptionIDs;
    NSMutableDictionary *_subscriptionErrors;
}

@property (readonly, nonatomic) id<CKModifySubscriptionsOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKModifySubscriptionsOperationInfo *operationInfo;
@property (copy, nonatomic) NSArray *subscriptionsToSave;
@property (copy, nonatomic) NSArray *subscriptionIDsToDelete;
@property (copy, nonatomic) id /* block */ perSubscriptionSaveBlock;
@property (copy, nonatomic) id /* block */ perSubscriptionDeleteBlock;
@property (copy, nonatomic) id /* block */ modifySubscriptionsCompletionBlock;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)a0;

- (void)performCKOperation;
- (BOOL)hasCKOperationCallbacksSet;
- (void)fillOutOperationInfo:(id)a0;
- (id)activityCreate;
- (void)fillFromOperationInfo:(id)a0;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)handleSubscriptionSaveForSubscriptionID:(id)a0 error:(id)a1;
- (BOOL)CKOperationShouldRun:(id *)a0;
- (void)handleSubscriptionDeleteForSubscriptionID:(id)a0 error:(id)a1;
- (id)initWithSubscriptionsToSave:(id)a0 subscriptionIDsToDelete:(id)a1;

@end
