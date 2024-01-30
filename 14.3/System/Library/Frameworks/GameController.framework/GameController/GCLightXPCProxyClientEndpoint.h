@class NSString, GCDeviceLight, GCController;
@protocol NSSecureCoding, NSCopying, NSObject, GCLightXPCProxyRemoteServerEndpointInterface;

@interface GCLightXPCProxyClientEndpoint : NSObject <_GCIPCEndpointClient, GCDeviceLightComponent, GCLightXPCProxyRemoteClientEndpointInterface> {
    GCController *_controller;
    id<GCLightXPCProxyRemoteServerEndpointInterface> _serverEndpoint;
    id _connectionInterruptionRegistration;
    id _connectionInvalidationRegistration;
}

@property (readonly) id<NSObject, NSCopying, NSSecureCoding> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) GCDeviceLight *light;

- (void)invalidateConnection;
- (id)init;
- (void).cxx_destruct;
- (void)setController:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)fetchObjectIdentifierWithReply:(id /* block */)a0;
- (void)setRemoteEndpoint:(id)a0 connection:(id)a1;
- (void)observeChangesForLight:(id)a0;
- (void)refreshLight;
- (void)newLight:(id)a0;
- (void)stopObservingChangesForLight:(id)a0;
- (void)_remoteEndpointHasSetLight:(id)a0;
- (id)initWithIdentifier:(id)a0 initialLight:(id)a1;

@end
