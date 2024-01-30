@class NSArray, NSString, GCDeviceAdaptiveTriggersPayload;
@protocol NSObject, NSSecureCoding, GCAdaptiveTriggersXPCProxyRemoteClientEndpointInterface, _GCIPCEndpointConnection, NSCopying, _GCControllerComponentDescription, GCAdaptiveTriggersXPCProxyServerEndpointDelegate;

@interface GCAdaptiveTriggersXPCProxyServerEndpoint : NSObject <_GCIPCEndpointServer, GCAdaptiveTriggersXPCProxyRemoteServerEndpointInterface> {
    id<GCAdaptiveTriggersXPCProxyRemoteClientEndpointInterface> _clientEndpoint;
    id<_GCIPCEndpointConnection> _connection;
    id _connectionInterruptionRegistration;
    id _connectionInvalidationRegistration;
    unsigned long long _pendingUpdates;
}

@property (readonly, nonatomic) id<_GCControllerComponentDescription> receiverDescription;
@property (weak, nonatomic) id<GCAdaptiveTriggersXPCProxyServerEndpointDelegate> delegate;
@property (retain, nonatomic) id userInfo;
@property (retain, nonatomic) GCDeviceAdaptiveTriggersPayload *leftTrigger;
@property (retain, nonatomic) GCDeviceAdaptiveTriggersPayload *rightTrigger;
@property (retain, nonatomic) NSArray *statuses;
@property (readonly) id<NSObject, NSCopying, NSSecureCoding> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidateConnection;
- (void).cxx_destruct;
- (void)fetchObjectIdentifierWithReply:(id /* block */)a0;
- (BOOL)acceptClient:(id)a0 onConnection:(id)a1 error:(id *)a2;
- (void)fetchStatusesWithReply:(id /* block */)a0;
- (id)initWithIdentifier:(id)a0 initialStatuses:(id)a1;
- (id)initWithInitialStatuses:(id)a0;
- (void)invalidateClient;
- (void)newAdaptiveTriggerPayload:(id)a0 index:(int)a1;

@end
