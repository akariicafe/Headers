@class TSKAVPlayerController;

@interface TSKAVPlayerTimeController : NSObject {
    id mTimeObserver;
    BOOL mObservingPlayerStatus;
}

@property (nonatomic) double absoluteCurrentTime;
@property (nonatomic) double currentTime;
@property (readonly, nonatomic) double remainingTime;
@property (nonatomic) double updateInterval;
@property (readonly, retain, nonatomic) TSKAVPlayerController *playerController;

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (id)initWithPlayerController:(id)a0;
- (void)p_createTimeObserver;
- (void)p_setTimeValuesWithoutScrubbing;
- (void)p_teardownTimeObserver;
- (void)p_beginScrubbingIfNeeded;
- (void)p_endScrubbing;
- (void)startObservingTime;
- (void)stopObservingTime;

@end
