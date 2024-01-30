@class CSAudioRecordContext, NSString, CSSiriRecordingInfo, CSAudioRecordDeviceInfo, NSURL, NSMutableDictionary, NSDictionary, NSUUID, NSObject, NSMutableSet, CSSiriAudioFileWriter;
@protocol OS_dispatch_queue, OS_dispatch_group, AFRelinquishableAssertion;

@interface CSSiriSpeechRecordingContext : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isCurrent;
    NSString *_startSpeechId;
    NSString *_selectedResultCandidateId;
    CSAudioRecordContext *_audioRecordContext;
    CSAudioRecordDeviceInfo *_audioRecordDeviceInfo;
    NSDictionary *_voiceTriggerInfo;
    NSDictionary *_recordingSettings;
    CSSiriRecordingInfo *_recordingInfo;
    CSSiriAudioFileWriter *_audioFileWriter;
    NSURL *_recordedAudioFileURL;
    id<AFRelinquishableAssertion> _startRecordingAudioSessionAssertion;
    id<AFRelinquishableAssertion> _twoShotDetectionAudioSessionAssertion;
    NSObject<OS_dispatch_group> *_recordingAudioGroup;
    BOOL _voiceIdentificationTraining_allowsWithoutResultCandidate;
    NSMutableSet *_voiceIdentificationTraining_allowedResultCandidateIds;
    NSMutableDictionary *_voiceIdentificationTraining_resultCandidateToSharedUserIdMap;
    NSUUID *_turnIdentifier;
    NSString *_voiceIdentificationTraining_withoutResultCandidateSharedUserId;
    BOOL _stopRecordingInstrumented;
}

@property (readonly, copy, nonatomic) NSString *sessionUUID;
@property (readonly, nonatomic) BOOL wantsRecordedAudioBufferLogs;

- (void)resignCurrent;
- (void)becomeCurrent;
- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)_createRequestLinkInfo:(id)a0 component:(int)a1;
- (void)_didBecomeCurrent;
- (void)_didResignCurrent;
- (void)_donateRecordedAudioForVoiceIdentificationTrainingWithCompletion:(id /* block */)a0;
- (void)_finalizeAudioFileWriterWithCompletion:(id /* block */)a0;
- (void)_initializeAudioFileWriterWithAudioStreamBasicDescription:(const struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)a0;
- (void)_instrumentSiriCue:(int)a0;
- (void)_removeRecordedAudio;
- (void)acquireRecordedAudioWithHandler:(id /* block */)a0;
- (void)appendRecordedAudioBuffer:(id)a0;
- (void)beginRecordingAudioWithAudioStreamBasicDescription:(const struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)a0;
- (void)didDetectTwoShotWithAudioActivationInfo:(id)a0 atTime:(double)a1;
- (void)didStopRecordingWithError:(id)a0;
- (void)emitRequestLinkEventForMHUUID:(id)a0;
- (void)endRecordingAudio;
- (void)getAudioRecordRouteAndDeviceIdentificationWithCompletion:(id /* block */)a0;
- (id)initWithSessionUUID:(id)a0 turnIdentifier:(id)a1;
- (void)instrumentSiriCue:(int)a0;
- (void)instrumentSiriCueForAlertType:(long long)a0;
- (void)relinquishAudioSessionAssertionsWithContext:(id)a0;
- (void)relinquishAudioSessionAssertionsWithError:(id)a0;
- (void)updateAccessToRecordedAudioForVoiceIdentificationTraining:(BOOL)a0 forResultCandidateId:(id)a1 sharedUserId:(id)a2;
- (void)updateAudioRecordContext:(id)a0;
- (void)updateAudioRecordDeviceInfo:(id)a0;
- (void)updateRecordingInfo:(id)a0;
- (void)updateRecordingSettings:(id)a0;
- (void)updateSelectedResultCandidateId:(id)a0;
- (void)updateStartSpeechId:(id)a0;
- (void)updateVoiceTriggerInfo:(id)a0;
- (void)willPrepareAndStartRecordingWithAudioActivationInfo:(id)a0;
- (void)willStopRecordingAtHostTime:(unsigned long long)a0;

@end
