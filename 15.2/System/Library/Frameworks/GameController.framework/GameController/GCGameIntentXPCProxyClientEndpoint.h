@class NSString, GCController;
@protocol NSSecureCoding, NSCopying, NSObject, GCGameIntentXPCProxyRemoteServerEndpointInterface;

@interface GCGameIntentXPCProxyClientEndpoint : NSObject <_GCIPCEndpointClient, GCDeviceGameIntentComponent, GCGameIntentXPCProxyRemoteClientEndpointInterface> {
    GCController *_controller;
    id<GCGameIntentXPCProxyRemoteServerEndpointInterface> _serverEndpoint;
    id _connectionInterruptionRegistration;
    id _connectionInvalidationRegistration;
}

@property (readonly) id<NSObject, NSCopying, NSSecureCoding> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidateConnection;
- (id)initWithIdentifier:(id)a0;
- (void)setController:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)fetchObjectIdentifierWithReply:(id /* block */)a0;
- (void)setRemoteEndpoint:(id)a0 connection:(id)a1;
- (void)triggerGestureGameIntent;

@end
