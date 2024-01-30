@class NSString, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue, LBLocalSpeechRecognizerClientDelegate;

@interface LBLocalSpeechRecognizerClient : NSObject <LBLocalSpeechServiceDelegate> {
    BOOL _recognitionActive;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_xpcConnection;
}

@property (weak, nonatomic) id<LBLocalSpeechRecognizerClientDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isInstalledFromStatusString:(id)a0;

- (id)initWithDelegate:(id)a0;
- (id)_connection;
- (id)_newConnection;
- (void).cxx_destruct;
- (void)invalidate;
- (id)_service;
- (void)startDeliverLocalSpeechRecognitionResultsWithSettings:(id)a0;
- (void)disableLocalSpeechRecognitionForRequestId:(id)a0;
- (oneway void)localSpeechServiceDidReceivedPartialResultWithRequestId:(id)a0 language:(id)a1 tokens:(id)a2;
- (oneway void)localSpeechServiceDidReceivedFinalResultWithRequestId:(id)a0 speechPackage:(id)a1;
- (oneway void)localSpeechServiceDidReceivedEagerRecognitionCandidateWithRequestId:(id)a0 rcId:(unsigned long long)a1 speechPackage:(id)a2 duration:(double)a3;
- (oneway void)localSpeechServiceDidReceivedEagerResultWithRequestId:(id)a0 rcId:(unsigned long long)a1 shouldAccept:(BOOL)a2 mitigationSignal:(BOOL)a3 featuresToLog:(id)a4;
- (oneway void)localSpeechServiceDidCompletionRecognitionWithStatistics:(id)a0 requestId:(id)a1 endpointMode:(long long)a2 error:(id)a3;
- (void)stopLocalSpeechRecognitionTaskWithReason:(unsigned long long)a0;

@end
