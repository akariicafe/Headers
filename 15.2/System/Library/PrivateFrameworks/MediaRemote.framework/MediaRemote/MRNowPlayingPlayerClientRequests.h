@class MRPlaybackQueue, MRPlayerPath, NSArray, MRPlaybackQueueSubscriptionController, NSMutableDictionary, MRPlayer, NSOperationQueue, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface MRNowPlayingPlayerClientRequests : NSObject <MRNowPlayingClientState> {
    MRPlaybackQueue *_playbackQueue;
    unsigned int _playbackState;
    NSArray *_supportedCommands;
    MRPlayer *_playerProperties;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_responseQueue;
    NSMutableDictionary *_playbackQueueCompletions;
    NSMutableArray *_supportedCommandsCompletions;
    NSMutableArray *_playbackStateCompletions;
    NSMutableArray *_playerPropertiesCompletions;
    NSMutableDictionary *_transactionCallbacks;
    NSMutableDictionary *_transactions;
    NSOperationQueue *_enquedNowPlayingInfoRequests;
    NSOperationQueue *_enquedNowPlayingInfoAssetRequests;
}

@property (readonly, nonatomic) MRPlayerPath *playerPath;
@property (readonly, nonatomic) MRPlaybackQueueSubscriptionController *subscriptionController;
@property (nonatomic) unsigned int playbackState;
@property (copy, nonatomic) MRPlaybackQueue *playbackQueue;
@property (copy, nonatomic) NSArray *supportedCommands;
@property (copy, nonatomic) MRPlayer *playerProperties;

- (id)initWithPlayerPath:(id)a0;
- (void)restoreNowPlayingClientState;
- (void)receiveTransaction:(unsigned long long)a0 fromMessage:(id)a1;
- (void)enqueuePlaybackQueueRequest:(id)a0 completion:(id /* block */)a1;
- (void)removePlaybackQueueCompletionForRequest:(id)a0;
- (void)addPlaybackQueueCompletion:(id /* block */)a0 forRequest:(id)a1;
- (id)transactionCallbacksForName:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)handlePlayerPropertiesRequestWithCompletion:(id /* block */)a0;
- (void)updateContentItemArtwork:(id)a0;
- (void)dealloc;
- (void)updateContentItems:(id)a0;
- (void)handlePlaybackStateRequestWithCompletion:(id /* block */)a0;
- (void)handleSupportedCommandsRequestWithCompletion:(id /* block */)a0;
- (void)addTransactionCallback:(id /* block */)a0 forName:(unsigned long long)a1;
- (id)debugDescription;

@end
