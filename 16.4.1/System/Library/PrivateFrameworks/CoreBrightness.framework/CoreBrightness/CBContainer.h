@class NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface CBContainer : NSObject {
    NSObject<OS_os_log> *_logHandle;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    id /* block */ _notificationBlock;
}

- (void)registerNotificationBlock:(id /* block */)a0;
- (void)dealloc;
- (void)unregisterNotificationBlock;
- (void)scheduleWithDispatchQueue:(id)a0;
- (void)unscheduleWithDispatchQueue:(id)a0;

@end
