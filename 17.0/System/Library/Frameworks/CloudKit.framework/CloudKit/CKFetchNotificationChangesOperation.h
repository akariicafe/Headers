@class CKServerChangeToken, CKFetchNotificationChangesOperationInfo;
@protocol CKFetchNotificationChangesOperationCallbacks;

@interface CKFetchNotificationChangesOperation : CKOperation <CKFetchNotificationChangesOperationCallbacks>

@property (retain, nonatomic) CKServerChangeToken *resultServerChangeToken;
@property (nonatomic) BOOL moreComing;
@property (readonly, nonatomic) id<CKFetchNotificationChangesOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKFetchNotificationChangesOperationInfo *operationInfo;
@property (copy, nonatomic) CKServerChangeToken *previousServerChangeToken;
@property (nonatomic) unsigned long long resultsLimit;
@property (copy, nonatomic) id /* block */ notificationChangedBlock;
@property (copy, nonatomic) id /* block */ fetchNotificationChangesCompletionBlock;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)a0;
+ (SEL)daemonInvocationSelector;
+ (SEL)daemonCallbackCompletionSelector;

- (void)ckSignpostEndWithError:(id)a0;
- (BOOL)hasCKOperationCallbacksSet;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (void)fillOutOperationInfo:(id)a0;
- (void)ckSignpostBegin;
- (id)init;
- (id)activityCreate;
- (void)fillFromOperationInfo:(id)a0;
- (id)initWithPreviousServerChangeToken:(id)a0;
- (void).cxx_destruct;
- (void)handleChangedNotification:(id)a0;
- (void)handleOperationDidCompleteWithServerChangeToken:(id)a0 moreComing:(BOOL)a1 metrics:(id)a2 error:(id)a3;

@end
