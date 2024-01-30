@class NSHashTable, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, ASDNotificationCenterDialogObserver;

@interface ASDNotificationCenter : NSObject <ASDNotificationServiceProtocol> {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableDictionary *_notificationObservers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _observerLock;
    NSHashTable *_progressObservers;
}

@property (weak) id<ASDNotificationCenterDialogObserver> dialogObserver;

+ (id)interface;
+ (id)defaultCenter;

- (id)init;
- (void).cxx_destruct;
- (void)deliverProgress:(id)a0;
- (id)_copyProgressObservers;
- (void)addNotificationObserver:(id)a0 forName:(id)a1;
- (void)removeNotificationObserver:(id)a0 forName:(id)a1;
- (void)removeProgressObserver:(id)a0;
- (void)deliverDialogRequest:(id)a0 withResultHandler:(id /* block */)a1;
- (id)_copyNotificationObserversForName:(id)a0;
- (void)addProgressObserver:(id)a0;
- (void)deliverEngagementRequest:(id)a0 withResultHandler:(id /* block */)a1;
- (void)deliverNotifications:(id)a0;
- (void)deliverAuthenticateRequest:(id)a0 withResultHandler:(id /* block */)a1;

@end
