@class NSError, AVWeakReference;

@interface AVPlayerConnection : NSObject {
    AVWeakReference *_playerReference;
    AVWeakReference *_playerItemReference;
    long long _status;
    NSError *_error;
}

@property (readonly, nonatomic) long long status;

- (void)dealloc;
- (id)player;
- (id)error;
- (id)description;
- (void)removeItemFromPlayQueue;
- (id)initWithWeakReferenceToPlayer:(id)a0 weakReferenceToPlayerItem:(id)a1;
- (BOOL)addItemToPlayQueueAfterPlaybackItemOfItem:(id)a0;
- (id)playerItem;

@end
