@class PXUpdater, NSObject;
@protocol OS_dispatch_queue;

@interface PXAVPlayerAudioSession : PXAudioSession

@property (class, readonly, nonatomic) struct OpaqueCMClock { } *masterClock;

@property (readonly, nonatomic) PXUpdater *updater;
@property (readonly, nonatomic) BOOL isPreparingToPlay;
@property (readonly, nonatomic) BOOL isPlaybackDesired;
@property (readonly, nonatomic) float playerRate;
@property (nonatomic) BOOL playerTimeHasChangedSinceSeeking;
@property (retain, nonatomic) id playerTimeObserver;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } playerTime;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *playerQueue;
@property (readonly, nonatomic) id playerQueue_player;

+ (id)_audioSession;

- (void)pause;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })currentTime;
- (void)didPerformChanges;
- (void)_updateStatus;
- (void)_invalidateStatus;
- (void).cxx_destruct;
- (void)play;
- (void)prepareToPlay;
- (void)_handleAVAsset:(id)a0 audioMix:(id)a1 info:(id)a2;
- (void)_handlePlayerItemFinishedSeekingForPlayback:(id)a0;
- (void)_handlePlayerTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)_invalidatePlayerRate;
- (void)_invalidatePlayerVolume;
- (void)_loadDurationFromAsset:(id)a0;
- (void)_performPlayerTransaction:(id /* block */)a0;
- (void)_playerQueue_performPlayerTransaction:(id /* block */)a0;
- (void)_prepareToPlayIfNeeded;
- (void)_updatePlayerRate;
- (void)_updatePlayerVolume;
- (void)cancelMediaRequest;
- (void)desiredPlayerVolumeDidChange;
- (void)errorDidChange;
- (id)initWithAsset:(id)a0 volume:(float)a1 startTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 queue:(id)a3 audioSessionDelegate:(id)a4;
- (void)performFinalCleanup;
- (void)performInternalChanges:(id /* block */)a0;
- (void)playFromTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)requestMediaWithResultHandler:(id /* block */)a0;
- (void)setIsPlaybackDesired:(BOOL)a0;
- (void)setIsPreparingToPlay:(BOOL)a0;
- (void)setPlayerRate:(float)a0;

@end
