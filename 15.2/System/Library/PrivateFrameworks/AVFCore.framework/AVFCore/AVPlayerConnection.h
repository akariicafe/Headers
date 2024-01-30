@class NSError, AVWeakReference;

@interface AVPlayerConnection : NSObject {
    AVWeakReference *_playerReference;
    AVWeakReference *_playerItemReference;
    long long _status;
    NSError *_error;
}

@property (readonly, nonatomic) long long status;

- (void)removeItemFromPlayQueue;
- (id)playerItem;
- (id)description;
- (BOOL)addItemToPlayQueueAfterPlaybackItemOfItem:(id)a0;
- (id)initWithWeakReferenceToPlayer:(id)a0 weakReferenceToPlayerItem:(id)a1;
- (id)error;
- (void)dealloc;
- (id)player;

@end
