@class CKServerChangeToken;
@protocol CKFetchNotificationChangesOperationCallbacks;

@interface CKDFetchNotificationChangesOperation : CKDOperation

@property (retain, nonatomic) CKServerChangeToken *previousServerChangeToken;
@property (nonatomic) unsigned long long resultsLimit;
@property (nonatomic) BOOL wantsChanges;
@property (retain, nonatomic) CKServerChangeToken *resultServerChangeToken;
@property (nonatomic) BOOL moreComing;
@property (retain, nonatomic) id<CKFetchNotificationChangesOperationCallbacks> clientOperationCallbackProxy;
@property (copy, nonatomic) id /* block */ notificationChangedBlock;

- (id)activityCreate;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (int)operationType;
- (void)main;
- (void).cxx_destruct;
- (void)_handleFetchChangesRequestFinished:(id)a0;

@end
