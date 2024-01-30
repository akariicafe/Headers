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
- (BOOL)isOperationType:(int)a0;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (int)operationType;
- (void)_handleSubscriptionSaved:(id)a0 responseCode:(id)a1;
- (void)_handleSubscriptionDeleted:(id)a0 responseCode:(id)a1;
- (void)main;
- (void).cxx_destruct;
- (void)_handleSubscriptionSaved:(id)a0 error:(id)a1;

@end
