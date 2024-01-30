@class NSMutableArray;

@interface CKVideoPlayerReusePool : NSObject

@property (retain, nonatomic) NSMutableArray *pool;

+ (id)sharedPool;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (long long)indexOfPlayerWithGUID:(id)a0;
- (void)returnPlayerToPool:(id)a0;
- (long long)indexOfAvailablePlayer;
- (void)removeUneededVideoPlayers;
- (void)lowMemoryWarningReceived:(id)a0;
- (id)_dequeuePlayerAtIndex:(long long)a0;
- (id)dequeueAvailableVideoPlayer;
- (id)existingVideoPlayerForTransferGUID:(id)a0;

@end
