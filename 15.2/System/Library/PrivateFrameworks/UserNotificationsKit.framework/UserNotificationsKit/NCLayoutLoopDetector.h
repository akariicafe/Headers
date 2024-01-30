@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface NCLayoutLoopDetector : NSObject

@property (retain) NSMutableArray *notificationLayoutsInProgress;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void)addNotificationRequestToLayoutsInProgress:(id)a0;
- (void)removeNotificationRequestFromLayoutsInProgress:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)layoutInProgressContainsNotificationRequest:(id)a0;
- (void)_saveNotificationLayoutsInProgress;
- (id)_savedNotificationLayoutsInProgress;

@end
