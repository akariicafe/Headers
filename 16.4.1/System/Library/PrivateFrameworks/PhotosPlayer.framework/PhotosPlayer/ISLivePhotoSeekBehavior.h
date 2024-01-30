@interface ISLivePhotoSeekBehavior : ISBehavior {
    BOOL _isSeeking;
    BOOL _needsSeek;
    BOOL _needsTransitionToVideo;
}

@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } seekTime;
@property (copy, nonatomic) id /* block */ seekCompletionHandler;

- (void).cxx_destruct;
- (long long)behaviorType;
- (void)activeDidChange;
- (void)_callSeekCompletionHandler:(BOOL)a0;
- (void)_handleDidSeekToSeekTime:(BOOL)a0;
- (void)_seekIfNeeded;
- (id)initWithInitialLayoutInfo:(id)a0 seekTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;

@end
