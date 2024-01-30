@class NSString, PXAppleMusicPlayerController, NSObject;
@protocol OS_dispatch_queue, OS_os_log;

@interface PXAppleMusicAudioSession : PXAudioSession <PXChangeObserver>

@property (readonly, nonatomic) NSString *playerClientIdentifier;
@property (retain, nonatomic) PXAppleMusicPlayerController *playerController;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *stateQueue;
@property (nonatomic) BOOL stateQueue_isPreparingToPlay;
@property (nonatomic) BOOL stateQueue_hasSeekedOrPlayed;
@property (nonatomic) BOOL stateQueue_shouldPlayWhenPrepared;
@property (nonatomic) long long stateQueue_playerPlaybackState;
@property (readonly, nonatomic) NSObject<OS_os_log> *log;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)errorDidChange;
- (void)_updatePlayerVolume;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)pause;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })currentTime;
- (void)play;
- (void)_updateStatus;
- (void)prepareToPlay;
- (id)initWithAsset:(id)a0 volume:(float)a1 startTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 queue:(id)a3 audioSessionDelegate:(id)a4;
- (void)desiredPlayerVolumeDidChange;
- (void)playFromTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)_stateQueue_playFromTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)performFinalCleanup;
- (void)_ensureCurrentPlayerClient;
- (void)_updateIsAtEnd;
- (void)_stateQueue_play;
- (void)_stateQueue_pause;
- (void)_stateQueue_prepareToPlayIfNeeded;
- (void)_handlePlayerPreparedToPlay:(BOOL)a0 error:(id)a1 signpostID:(unsigned long long)a2;
- (void)_stateQueue_handlePlayerPreparedToPlay:(BOOL)a0 error:(id)a1 signpostID:(unsigned long long)a2;
- (void)_stateQueue_updateState;
- (void)_handlePlayerTransactionDeclinedWithError:(id)a0;

@end
