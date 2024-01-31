@class NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface CLSDarwinNotificationCenter : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMapTable *_notificationsByName;
    NSMapTable *_notificationsByObserver;
    NSMapTable *_tokenByName;
    NSMapTable *_observerByHash;
}

+ (id)defaultCenter;

- (id)init;
- (void)postNotificationName:(id)a0;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0 notificationName:(id)a1;
- (void)addObserver:(id)a0 notificationName:(id)a1 block:(id /* block */)a2;
- (void)handleObserverRemoval;
- (void)postLocalNotificationName:(id)a0;
- (void)unregisterFromDarwinNotification:(id)a0;

@end
