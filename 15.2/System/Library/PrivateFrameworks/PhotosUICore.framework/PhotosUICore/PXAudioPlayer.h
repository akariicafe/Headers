@class NSString, PXCurrentTimeRecord, NSTimer, NSError, PXAudioSession, NSObject;
@protocol PXAudioAsset, OS_dispatch_queue, PXAudioPlayerAVAudioSessionDelegate;

@interface PXAudioPlayer : PXObservable <PXChangeObserver, PXAudioSessionAVAudioSessionDelegate> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
}

@property (retain, nonatomic) id<PXAudioAsset> currentAsset;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } currentAssetDuration;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) BOOL isAtEnd;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *sessionsQueue;
@property (retain, nonatomic, setter=sessionsQueue_setCurrentSession:) PXAudioSession *sessionsQueue_currentSession;
@property (retain, nonatomic) PXCurrentTimeRecord *mainQueue_currentTimeRecord;
@property (retain, nonatomic) NSTimer *currentTimeRecordUpdateTimer;
@property (weak, nonatomic) id<PXAudioPlayerAVAudioSessionDelegate> audioSessionDelegate;
@property (readonly, nonatomic) PXAudioSession *currentAudioSession;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } currentTime;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) float volume;
@property (readonly, nonatomic) long long desiredPlayState;
@property (readonly, nonatomic) float targetLoudnessInLKFS;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setVolume:(float)a0;
- (void)didPerformChanges;
- (void)performChanges:(id /* block */)a0;
- (void)setState:(long long)a0;
- (void)setDesiredPlayState:(long long)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)init;
- (void)pause;
- (void)_update;
- (void)_updateState;
- (id)lcdStringForSize:(struct CGSize { double x0; double x1; })a0;
- (void)setTargetLoudnessInLKFS:(float)a0;
- (id)AVAudioSessionForAudioSession:(id)a0;
- (void)playFromStartTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)setCurrentAsset:(id)a0 startTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)setCurrentAsset:(id)a0 startTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 hostTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (void)replayFromTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)_createAudioSessionForAsset:(id)a0 startTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (id)_sessionsQueue_generateCurrentTimeRecord;
- (void)_sessionsQueue_handleOutgoingSession:(id)a0;
- (void)_handleCurrentTimeRecordUpdateTimer;
- (void)_invalidateCurrentTimeRecordUpdateTimer;
- (void)_updateCurrentTimeRecordUpdateTimer;
- (void)_invalidateCurrentTimeRecord;
- (void)_updateCurrentTimeRecord;
- (void)_sessionsQueue_updateCurrentTimeRecord;
- (void)_invalidateState;
- (void)_invalidateCurrentSessionState;
- (void)_updateCurrentSessionState;
- (void)_sessionsQueue_updateCurrentSessionStateWithDesiredPlayState:(long long)a0;
- (void)_sessionsQueue_updateState;

@end
