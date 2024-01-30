@class MPCWhiskyControllerDisabledState, NSString, MPCVocalAttenuationPolicyController, MPCRecordingSession, MSVTimer, NSObject, NSDate;
@protocol OS_dispatch_queue, MPCVocalAttenuationModelProvider, MPCVocalAttenuationProcessor;

@interface MPCWhiskyController : MPCSingleTrackAudioProcessor <MPCPlaybackEngineEventObserving, MPCVocalAttenuationPolicyControllerDelegate> {
    NSObject<OS_dispatch_queue> *_setupQueue;
    float _vocalLevel;
    BOOL _processIsBackgrounded;
    NSDate *_shutdownSequenceStartDate;
    float _minVocalLevel;
    float _maxVocalLevel;
    float _defaultVocalLevel;
    MPCWhiskyControllerDisabledState *_disabledState;
}

@property (readonly, nonatomic) MPCRecordingSession *recordingSession;
@property (readonly, copy, nonatomic) NSString *modelID;
@property (readonly, nonatomic) id<MPCVocalAttenuationModelProvider> modelProvider;
@property (readonly, nonatomic) id<MPCVocalAttenuationProcessor> processor;
@property (readonly, nonatomic) MPCVocalAttenuationPolicyController *policyController;
@property (nonatomic) long long state;
@property (retain, nonatomic) MSVTimer *shutdownTimer;
@property (readonly, nonatomic) double renderingTimeLimit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)engineDidResetMediaServices:(id)a0;
- (id)initWithPlaybackEngine:(id)a0;
- (void)_updateState:(long long)a0;
- (void)dealloc;
- (void)engine:(id)a0 didChangeToState:(unsigned long long)a1;
- (void)engine:(id)a0 willChangeToItem:(id)a1 fromItem:(id)a2;
- (void).cxx_destruct;
- (void)_loadModel;
- (void)_stopShutdownSequenceIfRelevant;
- (void)_emitStatisticsEvent;
- (float)_processorLevelForVocalLevel:(float)a0;
- (void)_startShutdownSequenceIfRelevant;
- (void)_tearDownTapData;
- (float)_vocalLevelForProcessorLevel:(float)a0;
- (id)blockingPolicy;
- (unsigned int)creationFlags;
- (void)finalizeTap:(struct opaqueMTAudioProcessingTap { } *)a0;
- (id)initWithPlaybackEngine:(id)a0 modelProvider:(id)a1 processor:(id)a2;
- (void)prepareTap:(struct opaqueMTAudioProcessingTap { } *)a0 maxFrames:(long long)a1 processingFormat:(const struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)a2;
- (void)processTap:(struct opaqueMTAudioProcessingTap { } *)a0 sampleIndex:(long long)a1 numberFrames:(long long)a2 flags:(unsigned int)a3 audioBufferList:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a4 numberFramesOut:(long long *)a5 flagsOut:(unsigned int *)a6;
- (BOOL)shouldAttachAudioTapToItem:(id)a0;
- (void)unprepareTap:(struct opaqueMTAudioProcessingTap { } *)a0;
- (void)vocalAttenuationPolicyControllerDidChange:(id)a0;

@end
