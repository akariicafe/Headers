@class NSArray, NSMutableDictionary;

@interface MRNowPlayingOriginClientManager : NSObject <MRNowPlayingClientState> {
    NSMutableDictionary *_originClients;
    NSMutableDictionary *_originClientRequests;
    id /* block */ _createPlayerCallback;
    id /* block */ _destroyPlayerCallback;
    id /* block */ _generatePlayerIDCallback;
    NSMutableDictionary *_activeSystemEndpointUIDs;
    NSMutableDictionary *_activeSystemEndpointUIDCompletions;
}

@property (copy, nonatomic) id /* block */ createNewPlayerCallback;
@property (copy, nonatomic) id /* block */ destroyPlayerCallback;
@property (copy, nonatomic) id /* block */ generatePlayerIDCallback;
@property (readonly, nonatomic) NSArray *originClients;

+ (id)sharedManager;

- (void)restoreNowPlayingClientState;
- (void)removeOrigin:(id)a0;
- (id)existingOriginClientRequestsForPlayerPath:(id)a0;
- (id)existingClientRequestsForPlayerPath:(id)a0;
- (void)removeOriginRequests:(id)a0;
- (id)localOriginClient;
- (id)existingPlayerClientRequestsForPlayerPath:(id)a0;
- (id)originClientForOrigin:(id)a0;
- (void).cxx_destruct;
- (id)clientRequestsForPlayerPath:(id)a0;
- (id)originClientRequestsForPlayerPath:(id)a0;
- (id)init;
- (id)originClientForPlayerPath:(id)a0;
- (id)playerClientRequestsForPlayerPath:(id)a0;
- (id)clientForPlayerPath:(id)a0;
- (id)activeSystemEndpointOutputDeviceUIDForType:(long long)a0;
- (id)playerClientForPlayerPath:(id)a0;
- (void)handleActiveSystemEndpointOutputDeviceUIDForType:(long long)a0 completion:(id /* block */)a1;
- (void)updateActiveSystemEndpointOutputDeviceUID:(id)a0 forType:(long long)a1;
- (id)debugDescription;

@end
