@class NSXPCListener, NSString, APSConnection, NSObject;
@protocol OS_dispatch_queue;

@interface WBSCloudHistoryPushAgent : NSObject <NSXPCListenerDelegate, WBSCloudHistoryPushAgent> {
    NSXPCListener *_xpcListener;
    APSConnection *_pushConnection;
    NSObject<OS_dispatch_queue> *_pushNotificationStateQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)connection:(id)a0 didReceivePublicToken:(id)a1;
- (void)acknowledgePendingPushNotifications;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)queryMemoryFootprint:(id /* block */)a0;
- (BOOL)_hasUnacknowledgedPushNotifications;
- (void)_setHasUnacknowledgedPushNotifications:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (id)_pushTopic;
- (id)_userDefaults;
- (void)connection:(id)a0 didReceiveToken:(id)a1 forTopic:(id)a2 identifier:(id)a3;
- (BOOL)_hasAcknowledgedPushNotifications;
- (void)connection:(id)a0 didReceiveIncomingMessage:(id)a1;
- (void)_setHasAcknowlegedPushNotifications:(BOOL)a0;
- (void)clearAcknowledgedPushNotifications;
- (void)getPushNotifications:(id /* block */)a0;

@end
