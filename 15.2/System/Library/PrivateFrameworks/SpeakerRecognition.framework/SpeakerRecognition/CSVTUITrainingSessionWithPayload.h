@class NSDictionary, NSString;

@interface CSVTUITrainingSessionWithPayload : CSVTUITrainingSession <SFSpeechRecognitionTaskDelegate, CSVTUIAudioSessionDelegate, CSVTUIEndPointDelegate> {
    BOOL _detectBOS;
    BOOL _ASRResultReceived;
    BOOL _reportedStopListening;
    BOOL _utteranceStored;
    unsigned long long _numSamplesFed;
    unsigned long long _bestTriggerSampleStart;
    unsigned long long _extraSamplesAtStart;
}

@property (retain, nonatomic) NSDictionary *voiceTriggerEventInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)speechRecognitionTask:(id)a0 didHypothesizeTranscription:(id)a1;
- (void)speechRecognitionTask:(id)a0 didFinishRecognition:(id)a1;
- (void)speechRecognitionTask:(id)a0 didFinishSuccessfully:(BOOL)a1;
- (void).cxx_destruct;
- (void)startTraining;
- (void)audioSessionDidStartRecording:(BOOL)a0 error:(id)a1;
- (void)audioSessionDidStopRecording:(long long)a0;
- (void)audioSessionRecordBufferAvailable:(id)a0;
- (void)audioSessionErrorDidOccur:(id)a0;
- (void)audioSessionUnsupportedAudioRoute;
- (void)didDetectBeginOfSpeech;
- (void)didDetectEndOfSpeech:(long long)a0;
- (void)_firedVoiceTriggerTimeout;
- (BOOL)shouldHandleSession;
- (BOOL)shouldMatchPayload;
- (void)closeSessionWithStatus:(int)a0 successfully:(BOOL)a1;
- (void)_firedEndPointTimeout;
- (void)_registerVoiceTriggerTimeout;
- (void)handleAudioInput:(id)a0;
- (void)_reportStopListening;
- (void)_registerEndPointTimeout;
- (void)_registerForceEndPointTimeout;
- (void)matchRecognitionResult:(id)a0 withMatchedBlock:(id /* block */)a1 withNonMatchedBlock:(id /* block */)a2;

@end
