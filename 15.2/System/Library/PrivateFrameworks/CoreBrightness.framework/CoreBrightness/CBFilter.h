@class NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface CBFilter : NSObject {
    NSObject<OS_os_log> *_logHandle;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    id /* block */ _notificationBlock;
}

- (void)registerNotificationBlock:(id /* block */)a0;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (void)sendNotificationForKey:(id)a0 andValue:(id)a1;
- (void)forgetDataForService:(struct __IOHIDServiceClient { } *)a0;
- (void)unregisterNotificationBlock;
- (id)init;
- (id)filterEvent:(id)a0;
- (void)dealloc;
- (void)scheduleWithDispatchQueue:(id)a0;
- (void)unscheduleWithDispatchQueue:(id)a0;
- (id)filterEvents:(id)a0;

@end
