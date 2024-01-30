@class NSMutableDictionary, CKMarkNotificationsReadOperationInfo, NSArray, NSMutableArray;
@protocol CKMarkNotificationsReadOperationCallbacks;

@interface CKMarkNotificationsReadOperation : CKOperation <CKMarkNotificationsReadOperationCallbacks>

@property (retain, nonatomic) NSMutableArray *notificationIDsMarkedRead;
@property (retain, nonatomic) NSMutableDictionary *errorsByNotificationID;
@property (readonly, nonatomic) id<CKMarkNotificationsReadOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKMarkNotificationsReadOperationInfo *operationInfo;
@property (copy, nonatomic) NSArray *notificationIDs;
@property (copy, nonatomic) id /* block */ markNotificationsReadCompletionBlock;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)a0;

- (void)performCKOperation;
- (BOOL)hasCKOperationCallbacksSet;
- (void)fillOutOperationInfo:(id)a0;
- (id)activityCreate;
- (void)fillFromOperationInfo:(id)a0;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)CKOperationShouldRun:(id *)a0;
- (void)handleMarkNotificationReadCompletionForNotificationID:(id)a0 error:(id)a1;
- (id)initWithNotificationIDsToMarkRead:(id)a0;

@end
