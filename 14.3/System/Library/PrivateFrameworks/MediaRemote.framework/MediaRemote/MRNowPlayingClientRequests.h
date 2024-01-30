@class MRClient, NSArray, NSMutableArray;

@interface MRNowPlayingClientRequests : NSObject <MRNowPlayingClientState> {
    NSMutableArray *_playerClients;
}

@property (readonly, nonatomic) MRClient *client;
@property (readonly, nonatomic) NSArray *nowPlayingClients;

- (id)initWithClient:(id)a0;
- (void)removePlayer:(id)a0;
- (void).cxx_destruct;
- (id)existingNowPlayingPlayerClientRequestsForPlayerPath:(id)a0;
- (id)nowPlayingPlayerClientRequestsForPlayerPath:(id)a0;
- (void)restoreNowPlayingClientState;
- (id)debugDescription;

@end
