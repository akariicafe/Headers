@class NSMutableArray, NSString, SRSensorWriter, AVAudioFormat, SNEstimateSpeechEmotionRequest, NSObject, SNAudioStreamAnalyzer;
@protocol OS_dispatch_queue, OS_os_transaction;

@interface ADAMSoundAnalysisWriter : NSObject <SNResultsObserving> {
    SNAudioStreamAnalyzer *_SNAnalyzer;
    SRSensorWriter *_emotionWriter;
    SRSensorWriter *_detectionWriter;
    id /* block */ _completeHandler;
    int _streamType;
    unsigned long long _frameCnt;
    unsigned long long _soundDetectionLaughterTimestamp;
    unsigned long long _soundDetectionShoutingTimestamp;
    unsigned long long _soundDetectionSpeechTimestamp;
    unsigned long long _soundDetectionContinuousTimeTracker;
    unsigned long long _speechEmotionTimestamp;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _processing;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _statusLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _initLock;
    BOOL _isLastBatch;
    NSMutableArray *_requests;
    SNEstimateSpeechEmotionRequest *_speechEmotionRequest;
    unsigned char _siriAudioBufferCount;
    BOOL _inSiriUseCase;
    BOOL _soundAnalyzerInitialized;
    AVAudioFormat *_format;
    NSObject<OS_os_transaction> *_transaction;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)request:(id)a0 didFailWithError:(id)a1;
- (BOOL)isComplete;
- (BOOL)isMonitoring;
- (void).cxx_destruct;
- (void)request:(id)a0 didProduceResult:(id)a1;
- (void)requestDidComplete:(id)a0;
- (void)createAndLogOSTransaction;
- (id)initWithWriterName:(id)a0 audioFormat:(id)a1 completionHandler:(id /* block */)a2;
- (void)_initializeSoundAnalyzer;
- (BOOL)_isMonitoringEmotion;
- (BOOL)_isMonitoringSoundDetection;
- (void)reinitializeSpeechEmotionRequest;
- (int)write:(id)a0 withMetadata:(const struct Metadata { struct AudioTimeStamp { double x0; unsigned long long x1; double x2; unsigned long long x3; struct SMPTETime { short x0; short x1; unsigned int x2; unsigned int x3; unsigned int x4; short x5; short x6; short x7; short x8; } x4; unsigned int x5; unsigned int x6; } x0; union { unsigned int x0; unsigned int x1; } x1; unsigned long long x2; } *)a1;
- (void)_setProcessing:(BOOL)a0;
- (BOOL)verifyStateInit;
- (BOOL)verifyStateOn;

@end
