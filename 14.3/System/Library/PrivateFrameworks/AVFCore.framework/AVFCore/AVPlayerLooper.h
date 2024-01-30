@class NSError, NSArray, AVPlayerLooperInternal;

@interface AVPlayerLooper : NSObject {
    AVPlayerLooperInternal *_looper;
}

@property (readonly) long long status;
@property (readonly) NSError *error;
@property (readonly) long long loopCount;
@property (readonly, nonatomic) NSArray *loopingPlayerItems;

+ (void)initialize;
+ (id)playerLooperWithPlayer:(id)a0 templateItem:(id)a1;
+ (id)playerLooperWithPlayer:(id)a0 templateItem:(id)a1 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2;

- (id)init;
- (void)dealloc;
- (void)_turnOffLooping;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithPlayer:(id)a0 templateItem:(id)a1 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2;
- (BOOL)_setupLoopingReturningError:(id *)a0;
- (void)_changeStatusToFailedWithError:(id)a0;
- (int)_calculateNumberOfCopiesNeeded;
- (void)_configureLoopingItem:(id)a0;
- (void)disableLooping;
- (BOOL)_isWaitingForLastCopyToFinishSet;
- (void)_cleanupAfterPlayingLastLoopingCopy;

@end
