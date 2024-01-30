@class NSUUID, NSString, CSVTUIKeywordDetector, SFSpeechAudioBufferRecognitionRequest, NSTimer, NSDictionary, SFSpeechRecognitionTask, NSMutableArray, SFSpeechRecognizer, NSObject, CSAudioZeroCounter;
@protocol OS_dispatch_queue, CSVTUIAudioSession, CSVTUITrainingSessionDelegate;

@interface CSVTUITrainingSession : NSObject <SFSpeechRecognitionTaskDelegate, CSVTUIAudioSessionDelegate, CSVTUIEndPointDelegate> {
    long long _status;
    long long _utteranceId;
    long long _sessionNumber;
    NSString *_locale;
    NSUUID *_mhUUID;
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
    id /* block */ _trainingCompletionWithResult;
    NSObject<OS_dispatch_queue> *_queue;
    long long _numRequiredTrailingSamples;
    long long _numTrailingSamples;
    CSAudioZeroCounter *_continuousZeroCounter;
}

@property (retain, nonatomic) NSDictionary *voiceTriggerEventInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)speechRecognitionTask:(id)a0 didHypothesizeTranscription:(id)a1;
- (void)stopMasterTimer;
- (void)suspendTraining;
- (void)_registerEndPointTimeout;
- (void)audioSessionDidStartRecording:(BOOL)a0 error:(id)a1;
- (void)audioSessionDidStopRecording:(long long)a0;
- (void)audioSessionErrorDidOccur:(id)a0;
- (void)audioSessionRecordBufferAvailable:(id)a0;
- (void)audioSessionUnsupportedAudioRoute;
- (void)closeSessionWithCompletion:(id /* block */)a0;
- (void)closeSessionWithStatus:(int)a0 successfully:(BOOL)a1;
- (void)closeSessionWithStatus:(int)a0 successfully:(BOOL)a1 complete:(id /* block */)a2;
- (void)closeSessionWithStatus:(int)a0 successfully:(BOOL)a1 voiceTriggerEventInfo:(id)a2 completeWithResult:(id /* block */)a3;
- (void)computeRequiredTrailingSamples;
- (id)createAVAudioPCMBufferWithNSData:(id)a0;
- (id)createDigitalZeroReporterWithVoiceTriggerEventInfo:(id)a0;
- (void)didDetectBeginOfSpeech;
- (void)didDetectEndOfSpeech:(long long)a0;
- (void)feedSpeechRecognitionTrailingSamplesWithCompletedBlock:(id /* block */)a0;
- (void)feedSpeechRecognitionWithPCMBuffer;
- (void)finishSpeechRecognitionTask;
- (int)getTrainingAudioStatusWithVTEI:(id)a0 digitalZeroReporter:(id)a1;
- (void)handleAudioBufferForVTWithAudioInput:(id)a0 withDetectedBlock:(id /* block */)a1;
- (void)handleAudioInput:(id)a0;
- (void)handleMasterTimeout:(id)a0;
- (id)initWithUtteranceId:(long long)a0 sessionNumber:(long long)a1 Locale:(id)a2 audioSession:(id)a3 keywordDetector:(id)a4 speechRecognizer:(id)a5 speechRecognitionRequest:(id)a6 sessionDelegate:(id)a7 sessionDispatchQueue:(id)a8 mhUUID:(id)a9 zeroCounter:(id)a10 completionWithResult:(id /* block */)a11;
- (id)initWithUtteranceId:(long long)a0 sessionNumber:(long long)a1 Locale:(id)a2 audioSession:(id)a3 keywordDetector:(id)a4 speechRecognizer:(id)a5 speechRecognitionRequest:(id)a6 sessionDelegate:(id)a7 sessionDispatchQueue:(id)a8 zeroCounter:(id)a9 completion:(id /* block */)a10;
- (void)logTrainingSessionCompleteWithVoiceTriggerEventInfo:(id)a0;
- (long long)numSamplesInPCMBuffer;
- (void)pushAudioInputIntoPCMBuffer:(id)a0;
- (id)requestTriggeredUtterance:(id)a0;
- (BOOL)resultAlreadyReported;
- (void)resumeTraining;
- (BOOL)setupPhraseSpotter;
- (void)setupSpeechRecognitionTaskWithVoiceTriggerEventInfo:(id)a0;
- (void)startMasterTimerWithTimeout:(float)a0;
- (void)startTraining;
- (void)trimBeginingOfPCMBufferWithVoiceTriggerEventInfo:(id)a0;
- (void)updateMeterAndForward;

@end
