@class AVQueuePlayerInternal;

@interface AVQueuePlayer : AVPlayer {
    AVQueuePlayerInternal *_queuePlayer;
}

+ (void)initialize;
+ (id)queuePlayerWithItems:(id)a0;

- (void)removeItem:(id)a0;
- (id)initWithItems:(id)a0;
- (void)advanceToNextItem;
- (void)setActionAtItemEnd:(long long)a0;
- (id)init;
- (BOOL)canOverlapPlaybackFromPlayerItem:(id)a0 toPlayerItem:(id)a1;
- (void)dealloc;
- (BOOL)canInsertItem:(id)a0 afterItem:(id)a1;
- (long long)_defaultActionAtItemEnd;
- (void)insertItem:(id)a0 afterItem:(id)a1;
- (id)items;
- (void)removeAllItems;

@end
