@class NSString;

@interface AVFigRoutingContextCommandOutputDeviceConfigurationModification : NSObject <AVOutputDeviceConfigurationModification>

@property (readonly, nonatomic) struct __CFDictionary { } *routingContextCommandPayload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (void)setDevicePassword:(id)a0;
- (void)addPeerToHomeGroup:(id)a0;
- (void)startAutomaticallyAllowingConnectionsFromPeersInHomeGroupAndRejectOtherConnections:(BOOL)a0;
- (void)stopAutomaticallyAllowingConnectionsFromPeersInHomeGroup;
- (void)removePeerWithIDFromHomeGroup:(id)a0;
- (void)setDeviceName:(id)a0;

@end
