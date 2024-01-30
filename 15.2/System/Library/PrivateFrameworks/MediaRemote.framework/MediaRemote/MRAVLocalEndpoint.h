@class MRAVRoutingDiscoverySession;

@interface MRAVLocalEndpoint : MRAVOutputContextEndpoint

@property (readonly, nonatomic) MRAVRoutingDiscoverySession *audioDiscoverySession;

+ (id)sharedLocalEndpointForRoutingContextWithUID:(id)a0;
+ (id)sharedLocalEndpoint;

- (id)groupLeader;
- (void)setListeningMode:(id)a0 outputDeviceUID:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
- (void)setAllowsHeadTrackedSpatialAudio:(BOOL)a0 outputDeviceUID:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
- (void)setHeadTrackedSpatialAudioMode:(id)a0 outputDeviceUID:(id)a1 queue:(id)a2 completion:(id /* block */)a3;

@end
