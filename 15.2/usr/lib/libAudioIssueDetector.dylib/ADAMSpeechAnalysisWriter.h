@class SFSpeechAudioBufferRecognitionRequest, NSString, SFSpeechRecognizer, SRSensorWriter, NSMutableDictionary, NSObject, AVAudioFormat;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface ADAMSpeechAnalysisWriter : NSObject <SFSpeechRecognitionTaskDelegate> {
    SFSpeechRecognizer *_SpeechRecognizer;
    SFSpeechAudioBufferRecognitionRequest *_SpeechRequest;
    SRSensorWriter *_speechWriter;
    unsigned long long _frameCnt;
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _completionHandler;
    unsigned long long _pendingRequestCnt;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _statusLock;
    NSObject<OS_dispatch_semaphore> *_throttlingSemaphore;
    NSMutableDictionary *_taskTimestamps;
    unsigned long long _lastTimestamp;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _timestampLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _initLock;
    BOOL _SpeechRecognizerInitialized;
    AVAudioFormat *_format;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)censoredResultFromInputResult:(id)a0;

- (BOOL)isComplete;
- (BOOL)isMonitoring;
- (void)speechRecognitionDidDetectSpeech:(id)a0;
- (void)speechRecognitionTask:(id)a0 didHypothesizeTranscription:(id)a1;
- (void)speechRecognitionTask:(id)a0 didFinishRecognition:(id)a1;
- (void)speechRecognitionTaskWasCancelled:(id)a0;
- (void)speechRecognitionTask:(id)a0 didFinishSuccessfully:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithWriterName:(id)a0 audioFormat:(id)a1 completionHandler:(id /* block */)a2;
- (int)write:(id)a0 withMetadata:(const struct Metadata { struct AudioTimeStamp { double x0; unsigned long long x1; double x2; unsigned long long x3; struct SMPTETime { short x0; short x1; unsigned int x2; unsigned int x3; unsigned int x4; short x5; short x6; short x7; short x8; } x4; unsigned int x5; unsigned int x6; } x0; union { unsigned int x0; unsigned int x1; } x1; unsigned long long x2; } *)a1;
- (BOOL)verifyStateInit;
- (BOOL)verifyStateOn;
- (void)_initSpeechAnalyzer;
- (unsigned long long)_addPendingRequest;
- (unsigned long long)_removePendingRequest;
- (unsigned long long)_getNumPendingRequests;
- (void)_recordTimestamp:(unsigned long long)a0 forTask:(id)a1;
- (unsigned long long)_fetchTimestampforTask:(id)a0;

@end
