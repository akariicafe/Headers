@class MRPlaybackQueue, MRPlayerPath, NSArray, MRPlaybackQueueSubscriptionController, NSMutableDictionary, NSOperationQueue, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface MRNowPlayingPlayerClientRequests : NSObject <MRNowPlayingClientState> {
    MRPlaybackQueue *_playbackQueue;
    unsigned int _playbackState;
    NSArray *_supportedCommands;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_responseQueue;
    NSMutableDictionary *_playbackQueueCompletions;
    NSMutableArray *_supportedCommandsCompletions;
    NSMutableArray *_playbackStateCompletions;
    NSMutableDictionary *_transactionCallbacks;
    NSMutableDictionary *_transactions;
    NSOperationQueue *_enquedNowPlayingInfoRequests;
    NSOperationQueue *_enquedNowPlayingInfoAssetRequests;
}

@property (readonly, nonatomic) MRPlayerPath *playerPath;
@property (readonly, nonatomic) MRPlaybackQueueSubscriptionController *subscriptionController;
@property (nonatomic) unsigned int playbackState;
@property (copy, nonatomic) MRPlaybackQueue *playbackQueue;
@property (retain, nonatomic) NSArray *supportedCommands;

- (id)initWithPlayerPath:(id)a0;
- (void)handlePlaybackStateRequestWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)addPlaybackQueueCompletion:(id /* block */)a0 forRequest:(id)a1;
- (void)dealloc;
- (void)handleSupportedCommandsRequestWithCompletion:(id /* block */)a0;
- (id)transactionCallbacksForName:(unsigned long long)a0;
- (void)updateContentItems:(id)a0;
- (void)restoreNowPlayingClientState;
- (void)enqueuePlaybackQueueRequest:(id)a0 completion:(id /* block */)a1;
- (void)receiveTransaction:(unsigned long long)a0 fromMessage:(id)a1;
- (void)updateContentItemArtwork:(id)a0;
- (void)addTransactionCallback:(id /* block */)a0 forName:(unsigned long long)a1;
- (id)debugDescription;
- (void)removePlaybackQueueCompletionForRequest:(id)a0;

@end
