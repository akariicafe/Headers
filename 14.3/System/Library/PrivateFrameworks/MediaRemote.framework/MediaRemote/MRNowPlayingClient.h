@class NSArray, MRPlayerPath, MRClient, NSMutableArray, MRPlayer;

@interface MRNowPlayingClient : NSObject <MRNowPlayingClientState> {
    MRPlayer *_activePlayer;
    NSMutableArray *_playerClients;
    BOOL _isForeground;
}

@property (retain, nonatomic) MRPlayerPath *playerPath;
@property (retain, nonatomic) MRClient *client;
@property (readonly, nonatomic) MRPlayerPath *activePlayerPath;
@property (readonly, nonatomic) NSArray *playerClients;
@property (nonatomic) BOOL useMediaRemoteActivePlayerHeuristic;

- (id)initWithPlayerPath:(id)a0;
- (void)removePlayer:(id)a0;
- (void)reevaluateActivePlayerWithReason:(id)a0 completion:(id /* block */)a1;
- (void)updateActivePlayerPath:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)setActivePlayerPath:(id)a0 completion:(id /* block */)a1;
- (void)dealloc;
- (void)requestActiveForPlayerPath:(id)a0 completion:(id /* block */)a1;
- (id)nowPlayingPlayerClientForPlayerPath:(id)a0;
- (void)applicationDidEnterBackground;
- (void)restoreNowPlayingClientState;
- (id)description;
- (id)debugDescription;
- (void)applicationWillEnterForeground;
- (void)mergeClient:(id)a0;

@end
