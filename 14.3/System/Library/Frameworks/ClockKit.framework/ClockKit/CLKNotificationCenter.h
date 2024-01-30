@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CLKNotificationCenter : NSObject {
    NSMutableDictionary *_registrationsByNotificationName;
    NSObject<OS_dispatch_queue> *_registrationQueue;
}

+ (id)defaultCenter;

- (id)init;
- (void).cxx_destruct;
- (void)_handleNotification:(id)a0;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0 selector:(SEL)a1 notificationName:(id)a2;
- (void)removeObserver:(id)a0 notificationName:(id)a1;
- (void)_queue_registerObserver:(id)a0 selector:(SEL)a1 forNotificationName:(id)a2;
- (void)_queue_unregisterObserver:(id)a0 forNotificationName:(id)a1 cleanupIfLastObserver:(BOOL)a2;
- (void)_postNotificationName:(id)a0;

@end
