@class _GCControllerManagerServer, NSString, NSArray, NSMapTable;
@protocol _GCIPCObjectRegistry, GCControllerServiceRemoteClientInterface, _GCIPCServiceRegistry, _GCIPCIncomingConnection;

@interface _GCAppClientProxy : NSObject <_GCDeviceClient, GCControllerServiceRemoteServerInterface, GCPlayerIndicatorXPCProxyServiceRemoteServerInterface, GCLightXPCProxyServiceRemoteServerInterface, GCMotionXPCProxyServiceRemoteServerInterface, GCBatteryXPCProxyServiceRemoteServerInterface, GCSettingsXPCProxyServiceRemoteServerInterface, _GCAppServerInterface> {
    _GCControllerManagerServer *_server;
    _Atomic BOOL _invalid;
    id<_GCIPCIncomingConnection> _connection;
    id _connectionInvalidationRegistration;
    id _connectionInterruptedRegistration;
    id<GCControllerServiceRemoteClientInterface> _controllerServiceClient;
    unsigned long long _controllerServiceClientPendingUpdates;
    NSMapTable *_publishedControllerDescriptions;
}

@property (readonly, nonatomic, getter=isInvalid) BOOL invalid;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly) id<_GCIPCObjectRegistry> IPCObjectRegistry;
@property (readonly) id<_GCIPCServiceRegistry> IPCServiceRegistry;
@property (copy) NSArray *invalidationHandlers;

+ (id)clientProxyWithConnection:(id)a0 server:(id)a1;

- (id)_initWithConnection:(id)a0 server:(id)a1;
- (void)settingsXPCProxyServiceClientEndpointConnect:(id)a0 reply:(id /* block */)a1;
- (id)init;
- (void)connectToControllerServiceWithClient:(id)a0 reply:(id /* block */)a1;
- (void).cxx_destruct;
- (id)redactedDescription;
- (void)connectToPlayerIndicatorXPCProxyServiceWithClient:(id)a0 reply:(id /* block */)a1;
- (void)dealloc;
- (id)addInvalidationHandler:(id /* block */)a0;
- (void)connectToLightXPCProxyServiceWithClient:(id)a0 reply:(id /* block */)a1;
- (void)takeScreenshotWithReply:(id /* block */)a0;
- (void)motionXPCProxyServiceClientEndpointConnect:(id)a0 reply:(id /* block */)a1;
- (void)connectToBatteryXPCProxyServiceWithClient:(id)a0 reply:(id /* block */)a1;
- (id)description;
- (void)onVideoRecordingStopWithURL:(id)a0 reply:(id /* block */)a1;
- (void)onVideoRecordingStart:(id /* block */)a0;
- (void)pingWithReply:(id /* block */)a0;
- (void)_invalidate;
- (void)fetchControllerDescriptionsWithReply:(id /* block */)a0;
- (void)connectToMotionXPCProxyServiceWithClient:(id)a0 reply:(id /* block */)a1;
- (void)playerIndicatorXPCProxyServiceClientEndpointConnect:(id)a0 reply:(id /* block */)a1;
- (void)connectToPhotoVideoXPCProxyServiceWithClient:(id)a0 reply:(id /* block */)a1;
- (void)lightXPCProxyServiceClientEndpointConnect:(id)a0 reply:(id /* block */)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)debugDescription;
- (void)generateURLFor:(id)a0 optionalFolder:(id)a1 withReply:(id /* block */)a2;
- (void)connectToSettingsXPCProxyServiceWithClient:(id)a0 reply:(id /* block */)a1;
- (void)batteryXPCProxyServiceClientEndpointConnect:(id)a0 reply:(id /* block */)a1;

@end
