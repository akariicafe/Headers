@class MPCAssistantDiscovery, NSObject;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface MPCAssistantEndpointContext : MPCAssistantContext {
    MPCAssistantDiscovery *_discoveryLogical;
    MPCAssistantDiscovery *_discoveryAudio;
    MPCAssistantDiscovery *_discoveryEndpoint;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_group> *modificationInProgress;

- (id)init;
- (void).cxx_destruct;
- (void)_discoverLocalEndpointFromClusterUsingDeviceInfo:(id)a0 completion:(id /* block */)a1;
- (void)_discoverLocalEndpointFromDeviceInfo:(id)a0 completion:(id /* block */)a1;
- (void)_discoverLocalEndpointFromHomeTheaterUsingDeviceInfo:(id)a0 completion:(id /* block */)a1;
- (void)_discoverLocalEndpointFromMultiplayerUsingDeviceInfo:(id)a0 completion:(id /* block */)a1;
- (void)_modifyOutputDevices:(id)a0 onEndpoint:(id)a1 completion:(id /* block */)a2;
- (void)_updateDiscoverableDeviceList:(id)a0 deviceInfo:(id)a1 completion:(id /* block */)a2;
- (void)modifySystemMusicContextForDestination:(id)a0 completion:(id /* block */)a1;
- (void)modifySystemMusicContextForEndpointDestination:(id)a0 completion:(id /* block */)a1;
- (void)modifySystemMusicContextForEndpointDestination:(id)a0 discoveryHandler:(id /* block */)a1 completion:(id /* block */)a2;
- (BOOL)shouldSearchForLogicalDevices;

@end
