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
- (id)initWithInitialValue:(BOOL)a0;
- (void).cxx_destruct;
- (void)fetchObjectIdentifierWithReply:(id /* block */)a0;
- (BOOL)acceptClient:(id)a0 onConnection:(id)a1 error:(id *)a2;
- (void)fetchSensorsActiveWithReply:(id /* block */)a0;
- (id)initWithIdentifier:(id)a0 initialValue:(BOOL)a1;
- (void)invalidateClient;
- (void)newSensorsActive:(BOOL)a0;

@end
