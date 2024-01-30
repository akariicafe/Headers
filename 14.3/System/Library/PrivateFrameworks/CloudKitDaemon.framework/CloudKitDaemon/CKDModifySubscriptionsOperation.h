@class NSArray, NSMutableDictionary;
@protocol CKModifySubscriptionsOperationCallbacks;

@interface CKDModifySubscriptionsOperation : CKDDatabaseOperation

@property (retain, nonatomic) NSArray *subscriptionsToSave;
@property (retain, nonatomic) NSArray *subscriptionIDsToDelete;
@property (retain, nonatomic) NSMutableDictionary *subscriptionsByServerID;
@property (retain, nonatomic) id<CKModifySubscriptionsOperationCallbacks> clientOperationCallbackProxy;
@property (copy, nonatomic) id /* block */ saveCompletionBlock;
@property (copy, nonatomic) id /* block */ deleteCompletionBlock;

+ (long long)isPredominatelyDownload;

- (id)activityCreate;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)initWithOperationInfo:(id)a0 clientContext:(id)a1;
- (void).cxx_destruct;
- (void)main;
- (void)_handleSubscriptionDeleted:(id)a0 responseCode:(id)a1;
- (void)_handleSubscriptionSaved:(id)a0 error:(id)a1;
- (void)_handleSubscriptionSaved:(id)a0 responseCode:(id)a1;
- (int)operationType;

@end
