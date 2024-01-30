@class NSString, SVKeyValueObserver;

@interface SVAVPlayer : AVPlayer <AVPlayerItemDelegate>

@property (nonatomic) int playbackStatus;
@property (nonatomic) double elapsedTime;
@property (nonatomic) double duration;
@property (nonatomic) double frameRate;
@property (retain, nonatomic) id timeObserver;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } cumulativeTimePlayed;
@property (retain, nonatomic) SVKeyValueObserver *timeControlStatusObserver;
@property (retain, nonatomic) SVKeyValueObserver *statusObserver;
@property (retain, nonatomic) SVKeyValueObserver *durationObserver;
@property (retain, nonatomic) SVKeyValueObserver *loadedTimeRangesObserver;
@property (readonly, nonatomic) int audioMode;
@property (nonatomic) int playbackPosition;
@property (copy, nonatomic) id /* block */ playbackStatusBlock;
@property (copy, nonatomic) id /* block */ playbackProgressBlock;
@property (copy, nonatomic) id /* block */ loadingProgressBlock;
@property (readonly, nonatomic) double totalTimePlayed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)statusChanged;
- (id)initWithPlayerItem:(id)a0 audioMode:(int)a1;
- (void)seekToStartWithCompletionBlock:(id /* block */)a0;
- (void)loadedTimeRangesChanged;
- (id)initWithURL:(id)a0 audioMode:(int)a1;
- (void)addObservers;
- (void)loadFrameRate;
- (void)stopTimeObserver;
- (void)updateTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)setElapsedTime:(double)a0 duration:(double)a1;
- (void)timeControlStatusChanged;
- (void)durationChanged;
- (void)playedToEnd:(id)a0;
- (void)startTimeObserver;

@end
