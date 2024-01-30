@class MPCAssistantConnection, MPCAssistantDiscovery;

@interface MPCAssistantSendCommand : NSObject {
    MPCAssistantConnection *_connection;
    MPCAssistantDiscovery *_discovery;
}

- (void).cxx_destruct;
- (id)init;
- (void)sendMediaRemoteCommand:(unsigned int)a0 withOptions:(id)a1 toLocalDestination:(id)a2 completion:(id /* block */)a3;
- (void)sendMediaRemoteCommand:(unsigned int)a0 withOptions:(id)a1 toEndpointDestination:(id)a2 completion:(id /* block */)a3;
- (void)sendCommand:(unsigned int)a0 withOptions:(id)a1 toEndpoint:(id)a2 toDestination:(id)a3 completion:(id /* block */)a4;
- (void)_checkForAccount:(id)a0 destination:(id)a1 origin:(id)a2 queue:(id)a3 completion:(id /* block */)a4;
- (void)_formGroupAndSendCommand:(unsigned int)a0 withOptions:(id)a1 toExternalDestination:(id)a2 completion:(id /* block */)a3;
- (void)_sendCommand:(unsigned int)a0 withOptions:(id)a1 toEndpoint:(void *)a2 toDestination:(id)a3 completion:(id /* block */)a4;
- (void)_sendCommand:(unsigned int)a0 path:(id)a1 options:(id)a2 queue:(id)a3 completion:(id /* block */)a4;
- (BOOL)_isAnyDeviceControllable:(id)a0;
- (void *)_findEndpointFromEndpoints:(id)a0 byGroupLeader:(id)a1;

@end
