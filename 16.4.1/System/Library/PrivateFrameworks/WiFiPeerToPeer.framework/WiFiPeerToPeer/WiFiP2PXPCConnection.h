@class NSXPCConnection, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source, WiFiP2PXPCConnectionDelegate;

@interface WiFiP2PXPCConnection : NSObject {
    unsigned long long _endpointType;
    NSObject<OS_dispatch_queue> *_queue;
    long long _retryTimeout;
    NSXPCConnection *_connection;
    id _remoteObject;
    int _notifyToken;
    NSObject<OS_dispatch_source> *_retryTimer;
    NSMutableArray *_queuedRequests;
}

@property (weak) id<WiFiP2PXPCConnectionDelegate> delegate;

+ (id)frameworkBundle;
+ (id)directQueryOnEndpointType:(unsigned long long)a0 exportedObject:(id)a1 withExportedInterface:(id)a2 error:(id *)a3 querying:(id /* block */)a4;
+ (id)directQueryOnEndpointType:(unsigned long long)a0 error:(id *)a1 querying:(id /* block */)a2;
+ (id)localization;
+ (id)endpointForEndpointType:(unsigned long long)a0;
+ (BOOL)directRequestOnEndpointType:(unsigned long long)a0 error:(id *)a1 requesting:(id /* block */)a2;
+ (BOOL)supportsWiFiP2P;
+ (id)convertError:(long long)a0;
+ (id)wifiPeerToPeerWorkloop;
+ (long long)defaultRetryTimeout;
+ (const char *)wifiPeerToPeerAvailableNotification;

- (void)handleError:(long long)a0;
- (void)reconnectOnAvailableNotification;
- (void)withRemoteObjectProxy:(id /* block */)a0;
- (id)initWithEndpointType:(unsigned long long)a0 queue:(id)a1 retryTimeout:(long long)a2;
- (void)handleConnectionInvalidated;
- (void)cleanUpRemovingNotifyToken:(BOOL)a0;
- (void)dealloc;
- (void)attemptConnection;
- (void)withRemoteObjectProxy:(id /* block */)a0 clientErrorHandler:(id /* block */)a1;
- (void)stop;
- (void)start;
- (void)invalidate;
- (void).cxx_destruct;
- (void)withRemoteObjectProxy:(id /* block */)a0 clientCompletionHandler:(id /* block */)a1;

@end
