@class NSTimer, NSString, CSVTUIKeywordDetector, SFSpeechAudioBufferRecognitionRequest, SFSpeechRecognitionTask, NSMutableArray, SFSpeechRecognizer, NSObject;
@protocol OS_dispatch_queue, CSVTUIAudioSession, CSVTUITrainingSessionDelegate;

@interface CSVTUITrainingSession : NSObject <SFSpeechRecognitionTaskDelegate, CSVTUIAudioSessionDelegate, CSVTUIEndPointDelegate> {
    long long _status;
    long long _utteranceId;
    long long _sessionNumber;
    NSString *_locale;
    CSVTUIKeywordDetector *_keywordDetector;
    id<CSVTUIAudioSession> _audioSession;
    SFSpeechRecognizer *_speechRecognizer;
    SFSpeechAudioBufferRecognitionRequest *_speechRecognitionRequest;
    SFSpeechRecognitionTask *_speechRecognitionTask;
    NSTimer *_masterTimer;
    NSMutableArray *_pcmBufArray;
    BOOL _resultReported;
    BOOL _sessionProcess;
    BOOL _sessionSuspended;
    BOOL _ASRErrorOccured;
    id<CSVTUITrainingSessionDelegate> _sessionDelegate;
    id /* block */ _trainingCompletion;
    NSObject<OS_dispatch_queue> *_queue;
    long long _numRequiredTrailingSamples;
    long long _numTrailingSamples;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)speechRecognitionTask:(id)a0 didHypothesizeTranscription:(id)a1;
- (void).cxx_destruct;
- (id)initWithUtteranceId:(long long)a0 sessionNumber:(long long)a1 Locale:(id)a2 audioSession:(id)a3 keywordDetector:(id)a4 speechRecognizer:(id)a5 speechRecognitionRequest:(id)a6 sessionDelegate:(id)a7 sessionDispatchQueue:(id)a8 completion:(id /* block */)a9;
- (void)startTraining;
- (void)suspendTraining;
- (void)closeSessionWithStatus:(int)a0 successfully:(BOOL)a1 complete:(id /* block */)a2;
- (void)resumeTraining;
- (void)audioSessionDidStartRecording:(BOOL)a0 error:(id)a1;
- (void)audioSessionDidStopRecording:(long long)a0;
- (void)audioSessionRecordBufferAvailable:(id)a0;
- (void)audioSessionErrorDidOccur:(id)a0;
- (void)audioSessionUnsupportedAudioRoute;
- (void)didDetectBeginOfSpeech;
- (void)didDetectEndOfSpeech:(long long)a0;
- (void)finishSpeechRecognitionTask;
- (void)closeSessionWithStatus:(int)a0 successfully:(BOOL)a1;
- (void)updateMeterAndForward;
- (void)pushAudioInputIntoPCMBuffer:(id)a0;
- (void)setupSpeechRecognitionTaskWithVoiceTriggerEventInfo:(id)a0;
- (void)feedSpeechRecognitionWithPCMBuffer;
- (void)handleAudioBufferForVTWithAudioInput:(id)a0 withDetectedBlock:(id /* block */)a1;
- (void)handleAudioInput:(id)a0;
- (void)_registerEndPointTimeout;
- (id)requestTriggeredUtterance:(id)a0;
- (BOOL)setupPhraseSpotter;
- (void)startMasterTimerWithTimeout:(float)a0;
- (BOOL)resultAlreadyReported;
- (void)stopMasterTimer;
- (void)closeSessionWithCompletion:(id /* block */)a0;
- (void)trimBeginingOfPCMBufferWithVoiceTriggerEventInfo:(id)a0;
- (void)computeRequiredTrailingSamples;
- (void)feedSpeechRecognitionTrailingSamplesWithCompletedBlock:(id /* block */)a0;
- (long long)numSamplesInPCMBuffer;
- (id)createAVAudioPCMBufferWithNSData:(id)a0;
- (void)handleMasterTimeout:(id)a0;

@end
