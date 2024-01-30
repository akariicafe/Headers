@class MPCAssistantDiscovery, NSObject;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface MPCAssistantEndpointContext : MPCAssistantContext {
    MPCAssistantDiscovery *_discoveryLogical;
    MPCAssistantDiscovery *_discoveryAudio;
    MPCAssistantDiscovery *_discoveryEndpoint;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_group> *modificationInProgress;

- (void).cxx_destruct;
- (id)init;
- (void)modifySystemMusicContextForDestination:(id)a0 completion:(id /* block */)a1;
- (void)modifySystemMusicContextForEndpointDestination:(id)a0 completion:(id /* block */)a1;
- (void)_updateDiscoverableDeviceList:(id)a0 deviceInfo:(id)a1 completion:(id /* block */)a2;
- (void)_discoverLocalEndpointFromDeviceInfo:(id)a0 completion:(id /* block */)a1;
- (void)_discoverLocalEndpointFromStereoPairUsingDeviceInfo:(id)a0 completion:(id /* block */)a1;
- (void)_modifyOutputDevices:(id)a0 onEndpoint:(id)a1 completion:(id /* block */)a2;
- (BOOL)shouldSearchForLogicalDevices;

@end
