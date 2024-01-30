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

- (void)connection:(id)a0 didReceiveToken:(id)a1 forTopic:(id)a2 identifier:(id)a3;
- (void)connection:(id)a0 didReceiveIncomingMessage:(id)a1;
- (void)connection:(id)a0 didReceivePublicToken:(id)a1;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)acknowledgePendingPushNotifications;
- (void)getPushNotifications:(id /* block */)a0;
- (void)_setHasUnacknowledgedPushNotifications:(BOOL)a0;
- (void)queryMemoryFootprint:(id /* block */)a0;
- (id)_userDefaults;
- (id)_pushTopic;
- (BOOL)_hasUnacknowledgedPushNotifications;
- (void)clearAcknowledgedPushNotifications;
- (id)init;
- (BOOL)_hasAcknowledgedPushNotifications;
- (void)_setHasAcknowlegedPushNotifications:(BOOL)a0;
- (void).cxx_destruct;

@end
