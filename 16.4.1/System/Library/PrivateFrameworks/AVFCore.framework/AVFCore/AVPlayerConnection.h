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
- (BOOL)addItemToPlayQueueAfterPlaybackItemOfItem:(id)a0;
- (void)dealloc;
- (id)error;
- (id)initWithWeakReferenceToPlayer:(id)a0 weakReferenceToPlayerItem:(id)a1;
- (id)description;
- (id)player;

@end
