@class NSString, GCSystemGesturesState, GCController;
@protocol NSSecureCoding, NSCopying, NSObject, GCSystemGestureXPCProxyRemoteServerEndpointInterface;

@interface GCSystemGestureXPCProxyClientEndpoint : NSObject <_GCIPCEndpointClient, GCSystemGestureComponent, GCSystemGestureXPCProxyRemoteClientEndpointInterface> {
    GCController *_controller;
    id<GCSystemGestureXPCProxyRemoteServerEndpointInterface> _serverEndpoint;
    id _connectionInterruptionRegistration;
    id _connectionInvalidationRegistration;
    BOOL _isSystemGestureObserver;
}

@property (readonly) id<NSObject, NSCopying, NSSecureCoding> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) GCSystemGesturesState *systemGesturesState;

- (void)invalidateConnection;
- (void)setController:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)refreshSystemGesturesState;
- (void)_remoteEndpointHasSetSystemGesturesState:(id)a0;
- (void)disableSystemGestureForInput:(id)a0;
- (void)enableSystemGestureForInput:(id)a0;
- (BOOL)isSystemGestureObserver;
- (void)fetchObjectIdentifierWithReply:(id /* block */)a0;
- (void)newSystemGesturesState:(id)a0;
- (id)initWithIdentifier:(id)a0 initialSystemGesture:(id)a1 isSystemGestureObserver:(BOOL)a2;
- (void)setRemoteEndpoint:(id)a0 connection:(id)a1;

@end
