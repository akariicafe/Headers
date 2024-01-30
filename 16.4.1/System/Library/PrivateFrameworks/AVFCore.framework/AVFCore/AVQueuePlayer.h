@class AVQueuePlayerInternal;

@interface AVQueuePlayer : AVPlayer {
    AVQueuePlayerInternal *_queuePlayer;
}

+ (void)initialize;
+ (id)queuePlayerWithItems:(id)a0;

- (void)removeItem:(id)a0;
- (void)removeAllItems;
- (void)dealloc;
- (id)initWithItems:(id)a0;
- (id)init;
- (id)items;
- (void)advanceToNextItem;
- (void)setActionAtItemEnd:(long long)a0;
- (long long)_defaultActionAtItemEnd;
- (BOOL)canInsertItem:(id)a0 afterItem:(id)a1;
- (BOOL)canOverlapPlaybackFromPlayerItem:(id)a0 toPlayerItem:(id)a1;
- (void)insertItem:(id)a0 afterItem:(id)a1;

@end
