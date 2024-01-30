@class NSMutableDictionary;

@interface MRNowPlayingOriginClientManager : NSObject <MRNowPlayingClientState> {
    NSMutableDictionary *_originClients;
    NSMutableDictionary *_originClientRequests;
}

+ (id)sharedManager;

- (void)removeClient:(id)a0;
- (void)removePlayer:(id)a0;
- (id)init;
- (id)existingPlayerClientRequestsForPlayerPath:(id)a0;
- (void).cxx_destruct;
- (id)originClientForPlayerPath:(id)a0;
- (id)playerClientForPlayerPath:(id)a0;
- (id)clientForPlayerPath:(id)a0;
- (id)existingClientRequestsForPlayerPath:(id)a0;
- (id)existingOriginClientRequestsForPlayerPath:(id)a0;
- (void)restoreNowPlayingClientState;
- (id)playerClientRequestsForPlayerPath:(id)a0;
- (void)removeOriginRequests:(id)a0;
- (id)originClientForOrigin:(id)a0;
- (id)originClientRequestsForPlayerPath:(id)a0;
- (id)localOriginClient;
- (id)debugDescription;
- (id)clientRequestsForPlayerPath:(id)a0;
- (void)removeOrigin:(id)a0;

@end
