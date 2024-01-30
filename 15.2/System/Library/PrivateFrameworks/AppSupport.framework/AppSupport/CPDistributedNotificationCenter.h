@class NSString, NSLock, NSObject;
@protocol OS_dispatch_queue;

@interface CPDistributedNotificationCenter : NSObject {
    NSString *_centerName;
    NSLock *_lock;
    struct __CFRunLoopSource { } *_receiveNotificationSource;
    BOOL _isServer;
    struct __CFDictionary { } *_sendPorts;
    unsigned long long _startCount;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)_serverPortToNotificationCenterMapDispatchQueue;
+ (struct __CFDictionary { } *)_serverPortToNotificationCenterMap;
+ (id)centerNamed:(id)a0;
+ (void)setCenter:(id)a0 forServerPort:(unsigned int)a1;
+ (id)centerForServerPort:(unsigned int)a0;

- (void)deliverNotification:(id)a0 userInfo:(id)a1;
- (void)startDeliveringNotificationsToRunLoop:(struct __CFRunLoop { } *)a0;
- (void)runServer;
- (void)stopDeliveringNotifications;
- (void)_checkIn;
- (void)_checkOutAndRemoveSource;
- (void)postNotificationName:(id)a0 userInfo:(id)a1;
- (void)_notificationServerWasRestarted;
- (void)_createReceiveSourceForRunLoop:(struct __CFRunLoop { } *)a0;
- (void)postNotificationName:(id)a0;
- (id)_initWithServerName:(id)a0;
- (void)_receivedCheckIn:(unsigned int)a0 auditToken:(struct { unsigned int x0[8]; } *)a1;
- (id)name;
- (void)runServerOnCurrentThread;
- (BOOL)postNotificationName:(id)a0 userInfo:(id)a1 toBundleIdentifier:(id)a2;
- (void)dealloc;
- (void)startDeliveringNotificationsToMainThread;

@end
