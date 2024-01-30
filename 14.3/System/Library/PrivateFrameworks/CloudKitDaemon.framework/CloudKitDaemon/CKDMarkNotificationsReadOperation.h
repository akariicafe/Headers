@class NSArray, NSMutableDictionary, NSMutableSet;
@protocol CKMarkNotificationsReadOperationCallbacks;

@interface CKDMarkNotificationsReadOperation : CKDOperation

@property (retain, nonatomic) NSArray *notificationIDs;
@property (retain, nonatomic) NSMutableDictionary *errorByNotificationID;
@property (retain, nonatomic) NSMutableSet *successfulNotificationIDs;
@property (retain, nonatomic) id<CKMarkNotificationsReadOperationCallbacks> clientOperationCallbackProxy;
@property (copy, nonatomic) id /* block */ notificationMarkedRead;

+ (long long)isPredominatelyDownload;

- (id)activityCreate;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)initWithOperationInfo:(id)a0 clientContext:(id)a1;
- (void).cxx_destruct;
- (void)main;
- (int)operationType;
- (void)_handleNotificationID:(id)a0 withResponse:(id)a1;

@end
