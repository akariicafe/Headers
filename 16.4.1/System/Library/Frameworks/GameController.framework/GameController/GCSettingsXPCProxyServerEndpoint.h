@class GCSProfile, NSString;
@protocol _GCIPCEndpointConnection, NSSecureCoding, GCSettingsXPCProxyServerEndpointDelegate, GCSettingsXPCProxyRemoteClientEndpointInterface, NSCopying, _GCControllerComponentDescription, NSObject;

@interface GCSettingsXPCProxyServerEndpoint : NSObject <_GCIPCEndpointServer, GCSettingsXPCProxyRemoteServerEndpointInterface> {
    id<GCSettingsXPCProxyRemoteClientEndpointInterface> _clientEndpoint;
    id<_GCIPCEndpointConnection> _connection;
    id _connectionInterruptionRegistration;
    id _connectionInvalidationRegistration;
    unsigned long long _pendingUpdates;
}

@property (retain, nonatomic) GCSProfile *settingsProfile;
@property (readonly, nonatomic) id<_GCControllerComponentDescription> receiverDescription;
@property (weak, nonatomic) id<GCSettingsXPCProxyServerEndpointDelegate> delegate;
@property (retain, nonatomic) id userInfo;
@property (readonly) id<NSObject, NSCopying, NSSecureCoding> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidateConnection;
- (void).cxx_destruct;
- (id)initWithInitialValueForProfile:(id)a0;
- (void)fetchObjectIdentifierWithReply:(id /* block */)a0;
- (BOOL)acceptClient:(id)a0 onConnection:(id)a1 error:(id *)a2;
- (void)fetchProfileWithReply:(id /* block */)a0;
- (id)initWithIdentifier:(id)a0 initialValueForProfile:(id)a1;
- (void)invalidateClient;

@end
