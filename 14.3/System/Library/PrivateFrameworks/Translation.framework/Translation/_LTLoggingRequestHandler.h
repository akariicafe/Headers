@class NSString, FTBlazarService;

@interface _LTLoggingRequestHandler : NSObject <FTSpeechTranslationResponseDelegate, FTBatchTranslationResponseDelegate>

@property (readonly, nonatomic) FTBlazarService *mtAppService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startLoggingRequest:(id)a0;
- (void).cxx_destruct;
- (void)streamDidReceiveSpeechTranslationStreamingResponse:(id)a0;
- (void)streamFailVerifySpeechTranslationStreamingResponse:(id)a0;
- (void)startSpeechLIDRequest:(id)a0;
- (void)startSpeechSensesLoggingRequest:(id)a0;
- (void)startSafariLatencyLoggingRequest:(id)a0;
- (void)startSafariFeedbackRequest:(id)a0;
- (void)streamDidReceiveBatchTranslationStreamingResponse:(id)a0;
- (void)streamFailVerifyBatchTranslationStreamingResponse:(id)a0;

@end
