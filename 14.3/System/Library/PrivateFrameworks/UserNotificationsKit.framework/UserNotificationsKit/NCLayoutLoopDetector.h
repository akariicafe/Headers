@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface NCLayoutLoopDetector : NSObject

@property (retain) NSMutableArray *notificationLayoutsInProgress;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (id)init;
- (void).cxx_destruct;
- (id)_savedNotificationLayoutsInProgress;
- (void)_saveNotificationLayoutsInProgress;
- (BOOL)layoutInProgressContainsNotificationRequest:(id)a0;
- (void)addNotificationRequestToLayoutsInProgress:(id)a0;
- (void)removeNotificationRequestFromLayoutsInProgress:(id)a0;

@end
