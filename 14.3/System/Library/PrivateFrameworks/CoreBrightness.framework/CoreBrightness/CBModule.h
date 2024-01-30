@class NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface CBModule : NSObject {
    id /* block */ _notificationBlock;
    NSObject<OS_os_log> *_logHandle;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)initWithQueue:(id)a0;
- (void)dealloc;
- (void)registerNotificationBlock:(id /* block */)a0;
- (void)unregisterNotificationBlock;

@end
