@class NSMapTable, MPCPlaybackEngine, NSString, AVPlayerPlaybackCoordinator;

@interface MPCMediaFoundationTranslator : NSObject <MFQueueControlling>

@property (readonly, copy, nonatomic) NSMapTable *mapping;
@property (weak, nonatomic) MPCPlaybackEngine *playbackEngine;
@property (readonly, nonatomic) AVPlayerPlaybackCoordinator *playbackCoordinator;
@property (readonly, copy, nonatomic) NSString *targetContentItemID;

- (id)initWithPlaybackEngine:(id)a0;
- (void).cxx_destruct;
- (id)MPAVItemForMFPlayerItem:(id)a0;
- (id)_MPAVItemForContentItemID:(id)a0 allowReuse:(BOOL)a1;
- (BOOL)canSkipInDirection:(long long)a0 fromItem:(id)a1;
- (id)contentItemIDsFromOffset:(long long)a0 toOffset:(long long)a1 nowPlayingIndex:(long long *)a2;
- (id)itemToFollowItem:(id)a0 direction:(long long)a1 distance:(long long)a2 reason:(long long)a3;
- (id)queueItemForContentItemID:(id)a0 allowReuse:(BOOL)a1 error:(id *)a2;
- (id)queueItemForPlayerItem:(id)a0 allowReuse:(BOOL)a1;
- (void)resetMapping;
- (void)setMPAVItem:(id)a0 forMFPlayerItem:(id)a1;
- (void)updatePlayerPlaybackCoordinator:(id)a0;

@end
