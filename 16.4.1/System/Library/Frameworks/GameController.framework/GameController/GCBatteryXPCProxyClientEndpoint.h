@class NSString, GCDeviceBattery, GCController;
@protocol NSSecureCoding, GCBatteryXPCProxyRemoteServerEndpointInterface, NSCopying, NSObject;

@interface GCBatteryXPCProxyClientEndpoint : NSObject <_GCIPCEndpointClient, GCDeviceBatteryComponent, GCBatteryXPCProxyRemoteClientEndpointInterface> {
    GCController *_controller;
    id<GCBatteryXPCProxyRemoteServerEndpointInterface> _serverEndpoint;
    id _connectionInterruptionRegistration;
    id _connectionInvalidationRegistration;
}

@property (readonly) id<NSObject, NSCopying, NSSecureCoding> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) GCDeviceBattery *battery;

- (void)invalidateConnection;
- (void)setController:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)fetchObjectIdentifierWithReply:(id /* block */)a0;
- (void)_remoteEndpointHasSetBattery:(id)a0;
- (id)initWithIdentifier:(id)a0 initialBattery:(id)a1;
- (void)newBattery:(id)a0;
- (void)refreshBattery;
- (void)setRemoteEndpoint:(id)a0 connection:(id)a1;

@end
