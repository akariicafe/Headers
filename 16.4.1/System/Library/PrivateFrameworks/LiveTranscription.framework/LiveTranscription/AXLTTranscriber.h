@class SFSpeechAudioBufferRecognitionRequest, SFSpeechRecognizer, AXLTTranscription, NSString, AXLTLanguageAssetManager, NSTimer, SFSpeechRecognitionTask;

@interface AXLTTranscriber : NSObject <SFSpeechRecognizerDelegate, SFSpeechRecognitionTaskDelegate>

@property (retain, nonatomic) SFSpeechRecognizer *recognizer;
@property (retain, nonatomic) SFSpeechAudioBufferRecognitionRequest *recognitionRequest;
@property (retain, nonatomic) SFSpeechRecognitionTask *recognitionTask;
@property (retain, nonatomic) AXLTTranscription *currentTranscription;
@property (copy) id /* block */ transcriptionCallback;
@property (copy) id /* block */ completionCallback;
@property int pid;
@property (retain) NSString *appName;
@property BOOL isInUse;
@property (retain) AXLTLanguageAssetManager *languageAssetManager;
@property (retain) NSTimer *audioBufferTimeoutTimer;
@property long long downloadState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)speechRecognitionDidDetectSpeech:(id)a0;
- (void)speechRecognitionTask:(id)a0 didFinishRecognition:(id)a1;
- (void)speechRecognitionTask:(id)a0 didFinishSuccessfully:(BOOL)a1;
- (void)speechRecognitionTask:(id)a0 didHypothesizeTranscription:(id)a1;
- (void)speechRecognitionTaskFinishedReadingAudio:(id)a0;
- (void)speechRecognitionTaskWasCancelled:(id)a0;
- (float)_coalsecingTime;
- (void)_downloadAndInstallSpeechRecognizer;
- (void)_handleAssetDownloadError:(id)a0;
- (void)_restartTranscription;
- (void)appendAudioPCMBuffer:(id)a0 forPID:(int)a1;
- (BOOL)isTranscribingForPID:(int)a0;
- (long long)recognitionTaskHint;
- (void)resumeTranscriptionForPID:(int)a0;
- (void)startTranscriptionForPID:(int)a0 appName:(id)a1 callback:(id /* block */)a2 completionCallback:(id /* block */)a3;
- (void)stopTranscriptionForPID:(int)a0;

@end
