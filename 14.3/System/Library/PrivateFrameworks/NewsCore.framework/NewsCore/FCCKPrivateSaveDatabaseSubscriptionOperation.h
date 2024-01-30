@class NSString, CKNotificationInfo;

@interface FCCKPrivateSaveDatabaseSubscriptionOperation : FCCKPrivateDatabaseOperation

@property (copy, nonatomic) NSString *subscriptionID;
@property (copy, nonatomic) CKNotificationInfo *notificationInfo;
@property (copy, nonatomic) id /* block */ saveDatabaseSubscriptionCompletionBlock;

- (void).cxx_destruct;
- (BOOL)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;

@end
