@class NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface CBFilter : NSObject {
    NSObject<OS_os_log> *_logHandle;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    id /* block */ _notificationBlock;
}

- (id)copyPropertyForKey:(id)a0;
- (void)registerNotificationBlock:(id /* block */)a0;
- (void)dealloc;
- (id)filterEvent:(id)a0;
- (void)forgetDataForService:(struct __IOHIDServiceClient { } *)a0;
- (id)init;
- (void)sendNotificationForKey:(id)a0 andValue:(id)a1;
- (void)unregisterNotificationBlock;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (id)filterEvents:(id)a0;
- (void)scheduleWithDispatchQueue:(id)a0;
- (void)unscheduleWithDispatchQueue:(id)a0;

@end
