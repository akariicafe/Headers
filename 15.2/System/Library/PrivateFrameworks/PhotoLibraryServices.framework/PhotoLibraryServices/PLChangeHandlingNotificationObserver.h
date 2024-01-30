@class NSObject;
@protocol OS_dispatch_queue;

@interface PLChangeHandlingNotificationObserver : NSObject {
    NSObject<OS_dispatch_queue> *_targetQueue;
    NSObject<OS_dispatch_queue> *_lowNotifyQueue;
    NSObject<OS_dispatch_queue> *_highNotifyQueue;
    double _throttleInterval;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    int _notifyTokenLow;
    int _notifyTokenHigh;
    id /* block */ _notificationBlock;
}

@property (readonly) int notifyTokenLow;
@property (readonly) int notifyTokenHigh;
@property (readonly, copy) id /* block */ notificationBlock;

- (void)_inq_handleLowPriorityNotification;
- (BOOL)stopObservingRemoteNotifications;
- (void)_locked_startObservingRemoteNotificationsWithBlock:(id /* block */)a0;
- (void)_inq_suspendIfThrottling;
- (void)startObservingRemoteNotificationsWithBlock:(id /* block */)a0;
- (void)_inq_handleThrottleTimer;
- (BOOL)_locked_stopObservingRemoteNotifications;
- (void).cxx_destruct;
- (id)initWithLowPriorityThrottleInterval:(double)a0;
- (void)dealloc;
- (void)_inq_handleHighPriorityNotification;

@end
