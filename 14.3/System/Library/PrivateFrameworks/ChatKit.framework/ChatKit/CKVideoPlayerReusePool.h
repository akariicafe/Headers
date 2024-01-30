@class NSMutableArray;

@interface CKVideoPlayerReusePool : NSObject

@property (retain, nonatomic) NSMutableArray *pool;

+ (id)sharedPool;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)lowMemoryWarningReceived:(id)a0;
- (long long)indexOfPlayerWithGUID:(id)a0;
- (id)existingVideoPlayerForTransferGUID:(id)a0;
- (long long)indexOfAvailablePlayer;
- (id)_dequeuePlayerAtIndex:(long long)a0;
- (void)removeUneededVideoPlayers;
- (id)dequeueAvailableVideoPlayer;
- (void)returnPlayerToPool:(id)a0;

@end
