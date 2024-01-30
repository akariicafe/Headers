@class NSString, GCDeviceAdaptiveTriggersStatusPayload, GCDeviceAdaptiveTriggersPayload, GCController;
@protocol GCAdaptiveTriggersXPCProxyRemoteServerEndpointInterface, NSSecureCoding, NSCopying, NSObject;

@interface GCAdaptiveTriggersXPCProxyClientEndpoint : NSObject <_GCIPCEndpointClient, GCAdaptiveTriggers, GCAdaptiveTriggersXPCProxyRemoteClientEndpointInterface> {
    GCController *_controller;
    id<GCAdaptiveTriggersXPCProxyRemoteServerEndpointInterface> _serverEndpoint;
    id _connectionInterruptionRegistration;
    id _connectionInvalidationRegistration;
}

@property (readonly) id<NSObject, NSCopying, NSSecureCoding> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) GCDeviceAdaptiveTriggersPayload *leftTrigger;
@property (retain, nonatomic) GCDeviceAdaptiveTriggersStatusPayload *leftStatus;
@property (retain, nonatomic) GCDeviceAdaptiveTriggersPayload *rightTrigger;
@property (retain, nonatomic) GCDeviceAdaptiveTriggersStatusPayload *rightStatus;

- (void)invalidateConnection;
- (void)setController:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)fetchObjectIdentifierWithReply:(id /* block */)a0;
- (void)setRemoteEndpoint:(id)a0 connection:(id)a1;
- (void)refreshStatuses;
- (void)_remoteEndpointHasSetStatuses:(id)a0;
- (void)newStatuses:(id)a0;
- (id)initWithIdentifier:(id)a0 initialStatuses:(id)a1;

@end
