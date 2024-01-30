@class NSString, NSXPCConnection, LANotificationProxy, NSObject;
@protocol LANotificationXPC, LANotificationObserver;

@interface LANotification : NSObject <LANotificationObserverXPC> {
    NSXPCConnection *_connection;
    id<LANotificationXPC> _notification;
    BOOL _appMustBeActive;
    BOOL _waitingForActivation;
}

@property (readonly, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) id<LANotificationXPC> notification;
@property (readonly, nonatomic) LANotificationProxy *proxy;
@property (weak, nonatomic) NSObject<LANotificationObserver> *observer;
@property (nonatomic) BOOL notifyOnResume;
@property (nonatomic) BOOL appMustBeActive;
@property (readonly, nonatomic) NSObject *value;
@property (readonly, nonatomic) NSObject *oldValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isAppActive;
+ (void)postNotificationWithNewValue:(id)a0 oldValue:(id)a1;

- (id)initWithObserver:(id)a0;
- (void)suspend;
- (void)dealloc;
- (void).cxx_destruct;
- (void)resume;
- (void)newValue:(id)a0 oldValue:(id)a1 completionHandler:(id /* block */)a2;
- (void)_appActivityChanged:(id)a0;
- (void)_checkWaiting;
- (id)_notificationNameWhenAppIsActive:(BOOL)a0;
- (void)_notifyObserverWithAction:(id)a0 completionHandler:(id /* block */)a1;
- (void)_observeAppActivity:(BOOL)a0;
- (id)darwinNotificationForValue:(id)a0;
- (void)postNewValue:(id)a0 oldValue:(id)a1;

@end
