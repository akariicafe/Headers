@class NSArray;

@interface CKVideoPlayerReusePool : NSObject {
    void /* unknown type, empty encoding */ pool;
}

@property (class, nonatomic, readonly) CKVideoPlayerReusePool *sharedPool;

@property (nonatomic, copy) NSArray *pool;

- (id)dequeueAvailablePlayerAt:(long long)a0;
- (void)lowMemoryWarningReceivedWithNotification:(id)a0;
- (void)removeUnneededVideoPlayers;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)dequeueAvailableVideoPlayer;
- (id)existingVideoPlayerForTransferGUID:(id)a0;
- (void)returnPlayerToPool:(id)a0;

@end
