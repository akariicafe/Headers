@class NSString, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue, LBLocalSpeechRecognizerClientDelegate;

@interface LBLocalSpeechRecognizerClient : NSObject <LBLocalSpeechServiceDelegate> {
    BOOL _recognitionActive;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_xpcConnection;
}

@property (weak, nonatomic) id<LBLocalSpeechRecognizerClientDelegate> delegate;
@property (retain, nonatomic) NSString *uuidString;
@property (retain, nonatomic) NSString *xpcConnectionUUIDString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isInstalledFromStatusString:(id)a0;

- (oneway void)localSpeechServiceDidReceivedEagerRecognitionCandidateWithRequestId:(id)a0 rcId:(unsigned long long)a1 speechPackage:(id)a2 duration:(double)a3 metadata:(id)a4;
- (oneway void)localSpeechServiceDidReceivedPartialResultWithRequestId:(id)a0 language:(id)a1 tokens:(id)a2 metadata:(id)a3;
- (void)resetCacheAndCompileAllAssets;
- (void)disableLocalSpeechRecognitionForRequestId:(id)a0;
- (oneway void)localSpeechServiceDidCompletionRecognitionWithStatistics:(id)a0 requestId:(id)a1 endpointMode:(long long)a2 error:(id)a3;
- (oneway void)localSpeechServiceDidReceivedFinalResultCandidateWithRequestId:(id)a0 speechPackage:(id)a1;
- (id)_service;
- (void)setLocalSpeechRecognizerClientDelegate:(id)a0;
- (void)startDeliverLocalSpeechRecognitionResultsWithSettings:(id)a0;
- (id)_newConnection;
- (void)sendSpeechCorrectionInfo:(id)a0 interactionIdentifier:(id)a1;
- (oneway void)localSpeechServiceDidReceivedFinalResultWithRequestId:(id)a0 speechPackage:(id)a1 metadata:(id)a2;
- (void)preheatLocalSpeechRecognitionWithLanguage:(id)a0 source:(unsigned long long)a1;
- (void)stopLocalSpeechRecognitionTaskWithReason:(unsigned long long)a0 requestId:(id)a1;
- (void)resumeLocalRecognitionWithRequestId:(id)a0 prefixText:(id)a1 postfixText:(id)a2 selectedText:(id)a3;
- (void)stopLocalSpeechRecognitionTaskWithReason:(unsigned long long)a0;
- (oneway void)localSpeechServiceDidReceivedFinalResultWithRequestId:(id)a0 speechPackage:(id)a1;
- (void)dealloc;
- (oneway void)localSpeechServiceDidReceivedEagerRecognitionCandidateWithRequestId:(id)a0 rcId:(unsigned long long)a1 speechPackage:(id)a2 duration:(double)a3;
- (oneway void)localSpeechServiceDidReceivedPartialResultWithRequestId:(id)a0 language:(id)a1 tokens:(id)a2;
- (id)initWithDelegate:(id)a0;
- (oneway void)localSpeechServiceDidReceivedEagerResultWithRequestId:(id)a0 rcId:(unsigned long long)a1 shouldAccept:(BOOL)a2 mitigationSignal:(BOOL)a3 featuresToLog:(id)a4;
- (void)pauseLocalSpeechRecognitionForRequestId:(id)a0;
- (oneway void)localSpeechServiceDidReceivedVoiceIdScoreCard:(id)a0;
- (void)invalidate;
- (id)_connection;
- (void).cxx_destruct;

@end
