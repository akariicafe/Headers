@class NSString, GCSystemGesturesState;
@protocol _GCIPCEndpointConnection, GCSystemGestureXPCProxyServerEndpointDelegate, NSSecureCoding, GCSystemGestureXPCProxyRemoteClientEndpointInterface, _GCControllerComponentDescription, NSCopying, NSObject;

@interface GCSystemGestureXPCProxyServerEndpoint : NSObject <_GCIPCEndpointServer, GCSystemGestureXPCProxyRemoteServerEndpointInterface> {
    id<GCSystemGestureXPCProxyRemoteClientEndpointInterface> _clientEndpoint;
    id<_GCIPCEndpointConnection> _connection;
    id _connectionInterruptionRegistration;
    id _connectionInvalidationRegistration;
    unsigned long long _pendingUpdates;
    BOOL _isSystemGestureObserver;
}

@property (readonly, nonatomic) id<_GCControllerComponentDescription> receiverDescription;
@property (weak, nonatomic) id<GCSystemGestureXPCProxyServerEndpointDelegate> delegate;
@property (retain, nonatomic) id userInfo;
@property (retain, nonatomic) GCSystemGesturesState *systemGesturesState;
@property (readonly, nonatomic) BOOL isSystemGestureObserver;
@property (readonly) id<NSObject, NSCopying, NSSecureCoding> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidateConnection;
- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)fetchObjectIdentifierWithReply:(id /* block */)a0;
- (BOOL)acceptClient:(id)a0 onConnection:(id)a1 error:(id *)a2;
- (void)disableSystemGestureForInput:(id)a0;
- (void)enableSystemGestureForInput:(id)a0;
- (void)fetchSystemGesturesStateWithReply:(id /* block */)a0;
- (id)initSystemGestureObserverWithIdentifier:(id)a0 initialValue:(id)a1;
- (id)initSystemGestureObserverWithInitialValue:(id)a0;
- (void)invalidateClient;

@end
