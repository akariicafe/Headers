@class NSArray, AVQueuePlayer;

@interface PlayerItemsLooper : NSObject

@property (retain, nonatomic) AVQueuePlayer *player;
@property (copy, nonatomic) NSArray *loopedAssets;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithPlayer:(id)a0 assets:(id)a1;
- (void)enqueueAssetItems;
- (void)observeLastAndEnqueueAssetItems;
- (void)playerItemAtEnd:(id)a0;

@end
