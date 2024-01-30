@class NSTimer;

@interface PXMockAudioSession : PXAudioSession {
    NSTimer *_currentTimeUpdateTimer;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _currentTime;
}

- (void)pause;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })currentTime;
- (void).cxx_destruct;
- (void)play;
- (void)prepareToPlay;
- (void)_handleCurrentTimeUpdateTimer:(id)a0;
- (void)_invalidateCurrentTimeUpdateTimer;
- (void)_startCurrentTimeUpdateTimer;
- (id)initWithAsset:(id)a0 volume:(float)a1 startTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 queue:(id)a3 audioSessionDelegate:(id)a4;
- (void)playFromTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;

@end
