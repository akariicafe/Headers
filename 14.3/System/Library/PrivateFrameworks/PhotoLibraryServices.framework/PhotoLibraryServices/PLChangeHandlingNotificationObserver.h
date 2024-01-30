@class NSObject;
@protocol OS_dispatch_queue;

@interface PLChangeHandlingNotificationObserver : NSObject {
    NSObject<OS_dispatch_queue> *_targetQueue;
    NSObject<OS_dispatch_queue> *_lowNotifyQueue;
    NSObject<OS_dispatch_queue> *_highNotifyQueue;
    int _notifyTokenLow;
    int _notifyTokenHigh;
    id /* block */ _notificationBlock;
    double _throttleInterval;
}

- (void)stopObservingRemoteNotifications;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithLowPriorityThrottleInterval:(double)a0;
- (void)startObservingRemoteNotificationsWithBlock:(id /* block */)a0;
- (void)_inq_suspendIfThrottling;
- (void)_inq_startObservingRemoteNotificationsWithBlock:(id /* block */)a0;
- (void)_inq_handleLowPriorityNotification;
- (void)_inq_handleThrottleTimer;
- (void)_inq_handleHighPriorityNotification;
- (void)_inq_stopObservingRemoteNotifications;

@end
