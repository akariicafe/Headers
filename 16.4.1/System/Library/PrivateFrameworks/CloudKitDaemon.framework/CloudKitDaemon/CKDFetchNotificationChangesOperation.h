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

- (void)_finishOnCallbackQueueWithError:(id)a0;
- (int)operationType;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (void)main;
- (void).cxx_destruct;
- (void)_handleFetchChangesRequestFinished:(id)a0;

@end
