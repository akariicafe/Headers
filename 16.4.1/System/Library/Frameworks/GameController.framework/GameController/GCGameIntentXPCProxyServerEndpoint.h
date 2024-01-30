@class NSString;
@protocol NSObject, NSSecureCoding, GCGameIntentXPCProxyRemoteClientEndpointInterface, _GCIPCEndpointConnection, NSCopying, _GCControllerComponentDescription, GCGameIntentXPCProxyServerEndpointDelegate;

@interface GCGameIntentXPCProxyServerEndpoint : NSObject <_GCIPCEndpointServer, GCGameIntentXPCProxyRemoteServerEndpointInterface> {
    id<GCGameIntentXPCProxyRemoteClientEndpointInterface> _clientEndpoint;
    id<_GCIPCEndpointConnection> _connection;
    id _connectionInterruptionRegistration;
    id _connectionInvalidationRegistration;
}

@property (readonly, nonatomic) id<_GCControllerComponentDescription> receiverDescription;
@property (weak, nonatomic) id<GCGameIntentXPCProxyServerEndpointDelegate> delegate;
@property (retain, nonatomic) id userInfo;
@property (readonly) id<NSObject, NSCopying, NSSecureCoding> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidateConnection;
- (id)initWithIdentifier:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)fetchObjectIdentifierWithReply:(id /* block */)a0;
- (BOOL)acceptClient:(id)a0 onConnection:(id)a1 error:(id *)a2;
- (void)invalidateClient;
- (void)triggerGameIntentWithEvent:(long long)a0;

@end
