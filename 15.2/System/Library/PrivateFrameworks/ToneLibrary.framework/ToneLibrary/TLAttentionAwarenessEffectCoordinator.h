@class NSMutableSet, AVAudioSession, CAReporter;

@interface TLAttentionAwarenessEffectCoordinator : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    long long _preEffectIssueDetectorID;
    long long _postEffectIssueDetectorID;
    CAReporter *_reporter;
    struct AudioTimeStamp { double mSampleTime; unsigned long long mHostTime; double mRateScalar; unsigned long long mWordClockTime; struct SMPTETime { short mSubframes; short mSubframeDivisor; unsigned int mCounter; unsigned int mType; unsigned int mFlags; short mHours; short mMinutes; short mSeconds; short mFrames; } mSMPTETime; unsigned int mFlags; unsigned int mReserved; } _audioTimeStamp;
    NSMutableSet *_effectAudioTapContexts;
    struct { BOOL shouldBypassLowPassFilter; float volumeForLowPassFilterGlobalGain; float effectMix; } _effectParameters;
}

@property (readonly, nonatomic) AVAudioSession *audioSession;
@property (nonatomic) struct { BOOL x0; float x1; float x2; } effectParameters;

- (void).cxx_destruct;
- (void)dealloc;
- (void)setEffectParameters:(struct { BOOL x0; float x1; float x2; })a0 effectMixFadeDuration:(double)a1;
- (id)initWithEffectParameters:(struct { BOOL x0; float x1; float x2; })a0 audioSession:(id)a1;
- (id)audioMixForAsset:(id)a0;
- (void)_prepareAudioProcessingWithEffectAudioTapContext:(id)a0 maximumNumberOfFrames:(unsigned int)a1 processingFormat:(const struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)a2;
- (void)_unprepareAudioProcessingWithEffectAudioTapContext:(id)a0;
- (void)_finalizeAudioProcessingWithEffectAudioTapContext:(id)a0;
- (void)_processAudioWithEffectAudioTapContext:(id)a0 bufferList:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a1 numberOfFramesRequested:(unsigned int)a2 numberOfFramesToProcess:(unsigned int)a3;

@end
