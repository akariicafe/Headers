@class NSString, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface WBSDistributedNotificationObserver : NSObject {
    NSString *_notificationName;
    long long _notificationType;
    BOOL _observing;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    id /* block */ _notificationHandler;
    id /* block */ _timeoutHandler;
}

@property (copy) id /* block */ notificationHandler;
@property (copy) id /* block */ timeoutHandler;

- (void)_didTimeOut;
- (void)waitWithTimeout:(double)a0;
- (id)init;
- (id)initWithNotificationName:(id)a0 type:(long long)a1;
- (void).cxx_destruct;
- (void)_scheduleTimeoutTimerWithTimeout:(double)a0;
- (void)_didReceiveNotification:(id)a0;
- (void)_invalidateTimeoutTimer;
- (void)stopWaiting;
- (void)_startObserving;
- (id)initWithNotificationName:(id)a0;
- (void)_stopObserving;

@end
