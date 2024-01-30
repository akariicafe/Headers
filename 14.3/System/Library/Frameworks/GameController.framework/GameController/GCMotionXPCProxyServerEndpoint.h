@class NSString;
@protocol GCMotionXPCProxyServerEndpointDelegate, NSSecureCoding, _GCIPCEndpointConnection, GCMotionXPCProxyRemoteClientEndpointInterface, NSCopying, _GCControllerComponentDescription, NSObject;

@interface GCMotionXPCProxyServerEndpoint : NSObject <_GCIPCEndpointServer, GCMotionXPCProxyRemoteServerEndpointInterface> {
    id<GCMotionXPCProxyRemoteClientEndpointInterface> _clientEndpoint;
    id<_GCIPCEndpointConnection> _connection;
    id _connectionInterruptionRegistration;
    id _connectionInvalidationRegistration;
    unsigned long long _pendingUpdates;
}

@property (readonly, nonatomic) id<_GCControllerComponentDescription> receiverDescription;
@property (weak, nonatomic) id<GCMotionXPCProxyServerEndpointDelegate> delegate;
@property (retain, nonatomic) id userInfo;
@property (nonatomic) BOOL sensorsActive;
@property (readonly) id<NSObject, NSCopying, NSSecureCoding> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidateConnection;
- (void).cxx_destruct;
- (void)newSensorsActive:(BOOL)a0;
- (void)fetchSensorsActiveWithReply:(id /* block */)a0;
- (void)fetchObjectIdentifierWithReply:(id /* block */)a0;
- (id)initWithIdentifier:(id)a0 initialValue:(BOOL)a1;
- (BOOL)acceptClient:(id)a0 onConnection:(id)a1 error:(id *)a2;
- (id)initWithInitialValue:(BOOL)a0;
- (void)invalidateClient;

@end
