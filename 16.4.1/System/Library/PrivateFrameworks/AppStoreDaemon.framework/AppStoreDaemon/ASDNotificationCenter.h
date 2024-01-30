@class NSString, NSMutableDictionary, NSHashTable, NSObject;
@protocol OS_dispatch_queue, ASDNotificationCenterDialogObserver;

@interface ASDNotificationCenter : NSObject <ASDServiceProvider, ASDNotificationServiceProtocol> {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableDictionary *_notificationObservers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _observerLock;
    NSHashTable *_progressObservers;
}

@property (weak) id<ASDNotificationCenterDialogObserver> dialogObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)interface;
+ (id)defaultCenter;

- (void)deliverEngagementRequest:(id)a0 withResultHandler:(id /* block */)a1;
- (void)deliverAuthenticateRequest:(id)a0 withResultHandler:(id /* block */)a1;
- (void)addNotificationObserver:(id)a0 forName:(id)a1;
- (void)deliverViewPresentationRequest:(id)a0 resultHandler:(id /* block */)a1;
- (void)isDialogObserverAvailableWithReplyHandler:(id /* block */)a0;
- (void)addProgressObserver:(id)a0;
- (void)removeProgressObserver:(id)a0;
- (void)deliverProgress:(id)a0;
- (void)removeNotificationObserver:(id)a0 forName:(id)a1;
- (id)init;
- (void)deliverDialogRequest:(id)a0 withResultHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)deliverNotifications:(id)a0;

@end
