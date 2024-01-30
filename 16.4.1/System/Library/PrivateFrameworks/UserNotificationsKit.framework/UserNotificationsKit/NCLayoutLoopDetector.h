@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface NCLayoutLoopDetector : NSObject

@property (retain) NSMutableArray *notificationLayoutsInProgress;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void)_saveNotificationLayoutsInProgress;
- (id)_savedNotificationLayoutsInProgress;
- (void)removeNotificationRequestFromLayoutsInProgress:(id)a0;
- (BOOL)layoutInProgressContainsNotificationRequest:(id)a0;
- (id)init;
- (void)addNotificationRequestToLayoutsInProgress:(id)a0;
- (void).cxx_destruct;

@end
