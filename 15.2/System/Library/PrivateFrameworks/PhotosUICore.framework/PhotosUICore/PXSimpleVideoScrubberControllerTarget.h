@class NSString, AVPlayer;

@interface PXSimpleVideoScrubberControllerTarget : NSObject <PXVideoScrubberControllerTarget> {
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _currentItemDuration;
}

@property (readonly, nonatomic) AVPlayer *videoPlayer;
@property (copy, nonatomic) id /* block */ durationChangeHandler;
@property (copy, nonatomic) id /* block */ statusChangeHandler;
@property (copy, nonatomic) id /* block */ playerItemChangeHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct { long long x0; int x1; unsigned int x2; long long x3; })playerCurrentTime;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })currentItemDuration;
- (void)videoScrubberController:(id)a0 seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 toleranceBefore:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 toleranceAfter:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 completionHandler:(id /* block */)a4;
- (id)playerItem;
- (void)removeTimeObserver:(id)a0;
- (float)playRate;
- (void)cancelPendingSeeks;
- (void).cxx_destruct;
- (id)init;
- (id)addPeriodicTimeObserverForInterval:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 queue:(id)a1 usingBlock:(id /* block */)a2;
- (id)initWithVideoPlayer:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (long long)playerStatus;

@end
