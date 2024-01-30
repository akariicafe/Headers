@class GCControllerSettings, NSString;
@protocol _GCIPCEndpointConnection, NSSecureCoding, GCSettingsXPCProxyServerEndpointDelegate, GCSettingsXPCProxyRemoteClientEndpointInterface, NSCopying, _GCControllerComponentDescription, NSObject;

@interface GCSettingsXPCProxyServerEndpoint : NSObject <_GCIPCEndpointServer, GCSettingsXPCProxyRemoteServerEndpointInterface> {
    id<GCSettingsXPCProxyRemoteClientEndpointInterface> _clientEndpoint;
    id<_GCIPCEndpointConnection> _connection;
    id _connectionInterruptionRegistration;
    id _connectionInvalidationRegistration;
    unsigned long long _pendingUpdates;
}

@property (readonly, nonatomic) id<_GCControllerComponentDescription> receiverDescription;
@property (weak, nonatomic) id<GCSettingsXPCProxyServerEndpointDelegate> delegate;
@property (retain, nonatomic) id userInfo;
@property (retain, nonatomic) GCControllerSettings *settingsForBundleID;
@property (retain, nonatomic) GCControllerSettings *settingsDefault;
@property (readonly) id<NSObject, NSCopying, NSSecureCoding> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidateConnection;
- (void).cxx_destruct;
- (void)fetchObjectIdentifierWithReply:(id /* block */)a0;
- (BOOL)acceptClient:(id)a0 onConnection:(id)a1 error:(id *)a2;
- (void)invalidateClient;
- (id)initWithIdentifier:(id)a0 initialValueForBundleID:(id)a1 defaultSettings:(id)a2;
- (void)fetchSettingsWithReply:(id /* block */)a0;
- (id)initWithInitialValueForBundleID:(id)a0 defaultSettings:(id)a1;

@end
