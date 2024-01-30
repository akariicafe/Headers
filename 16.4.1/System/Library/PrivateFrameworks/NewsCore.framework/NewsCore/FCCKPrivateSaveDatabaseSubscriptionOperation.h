@class NSString, CKNotificationInfo;

@interface FCCKPrivateSaveDatabaseSubscriptionOperation : FCCKPrivateDatabaseOperation

@property (copy, nonatomic) NSString *subscriptionID;
@property (copy, nonatomic) CKNotificationInfo *notificationInfo;
@property (copy, nonatomic) id /* block */ saveDatabaseSubscriptionCompletionBlock;

- (BOOL)validateOperation;
- (void)operationWillFinishWithError:(id)a0;
- (void)performOperation;
- (void).cxx_destruct;

@end
