@class NSMutableDictionary, NSArray, NSOperationQueue, NSMutableArray;

@interface VUIMediaInfoFetchController : NSObject

@property (retain, nonatomic) NSOperationQueue *imageQueue;
@property (retain, nonatomic) NSMutableArray *imageOperations;
@property (retain, nonatomic) NSMutableDictionary *prewarmedPlayers;
@property (copy, nonatomic) NSArray *mediaInfos;
@property (nonatomic) unsigned long long index;
@property (nonatomic) unsigned long long playerPreloadOffset;
@property (nonatomic, getter=isPreloadPlaybackEnabled) BOOL preloadPlaybackEnabled;

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)preloadPlayback;
- (id)_prewarmIndices;
- (void)_updateImageOperationPriorities;
- (id)_createPlayerWithPlaylist:(id)a0 isForPrewarming:(BOOL)a1;
- (id)_identifierForPlaylist:(id)a0 isForPrewarming:(BOOL)a1;
- (void)_populateQueueWithMediaInfos:(id)a0;
- (void)_removePrewarmedPlayerForIdentifier:(id)a0;
- (void)_updatePrewarmedPlayers;
- (void)appendMediaInfos:(id)a0;
- (void)clearPreloadedPlayback;
- (id)initWithMediaInfos:(id)a0;
- (void)loadImageAtIndex:(unsigned long long)a0 completion:(id /* block */)a1;
- (id)loadPlayerAtIndex:(unsigned long long)a0;
- (long long)queuePriorityForIndex:(long long)a0 itemCount:(long long)a1 selectedIndex:(long long)a2;
- (void)removeMediaInfoAtIndex:(unsigned long long)a0;
- (void)setMediaInfo:(id)a0 atIndex:(unsigned long long)a1;

@end
