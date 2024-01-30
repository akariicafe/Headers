@class NSString, SRDRequestDispatcherInternal;

@interface SRDRequestDispatcher : NSObject <AFRequestDispatcher>

@property (readonly, nonatomic) SRDRequestDispatcherInternal *underlyingObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)domains;
- (void).cxx_destruct;
- (id)initWithServiceHelper:(id)a0;
- (id)initWithServiceHelper:(id)a0 asrBridgeDelegate:(id)a1;
- (void)clearContextWithAssistantId:(id)a0;
- (void)cancelRequestWithAssistantId:(id)a0 requestId:(id)a1;
- (id)commandsForDomain:(id)a0;
- (void)handleCommand:(id)a0 executionContextInfo:(id)a1 reply:(id /* block */)a2;
- (BOOL)implementsCommand:(id)a0 forDomain:(id)a1;
- (void)requestCompletedWithAssistantId:(id)a0 requestId:(id)a1;
- (void)startSpeechRequestWithAssistantId:(id)a0 requestId:(id)a1 inputOrigin:(id)a2;
- (void)startSpeechRequestWithAssistantId:(id)a0 requestId:(id)a1 inputOrigin:(id)a2 location:(id)a3;
- (void)sendRequestContextWithAssistantId:(id)a0 requestId:(id)a1 audioSource:(id)a2 audioDestination:(id)a3 isEyesFree:(BOOL)a4 isVoiceTriggerEnabled:(BOOL)a5 isTextToSpeechEnabled:(BOOL)a6 isTriggerlessFollowup:(BOOL)a7 bargeInModes:(id)a8 approximatePreviousTTSInterval:(id)a9 deviceRestrictions:(id)a10;
- (void)startSessionWithAssistantId:(id)a0 languageCode:(id)a1;
- (void)startSessionWithAssistantId:(id)a0 languageCode:(id)a1 understandingOnDevice:(BOOL)a2;
- (void)startLocalRequestWithAssistantId:(id)a0 requestId:(id)a1 inputOrigin:(id)a2;
- (void)startTestSpeechRequestWithAssistantId:(id)a0 requestId:(id)a1 enableASR:(BOOL)a2 inputOrigin:(id)a3 location:(id)a4 jitContext:(id)a5 overrideModelPath:(id)a6;
- (void)startTestSpeechRequestWithAssistantId:(id)a0 requestId:(id)a1 inputOrigin:(id)a2;
- (void)postTestResultCandidateWithAssistantId:(id)a0 requestId:(id)a1 rcId:(id)a2 recognitionSausage:(id)a3;
- (void)postTestResultSelectedWithAssistantId:(id)a0 requestId:(id)a1 rcId:(id)a2;
- (void)startUnderstandingOnServerRequestWithAssistantId:(id)a0 requestId:(id)a1 inputOrigin:(id)a2;
- (void)startUnderstandingOnServerTextRequestWithAssistantId:(id)a0 requestId:(id)a1 inputOrigin:(id)a2 utterance:(id)a3;
- (void)startTextRequestWithAssistantId:(id)a0 requestId:(id)a1 inputOrigin:(id)a2 utterance:(id)a3;
- (void)startDirectActionRequestWithAssistantId:(id)a0 requestId:(id)a1 inputOrigin:(id)a2 directAction:(id)a3 requestExecutionParameters:(id)a4;
- (void)startCorrectionSpeechRequestWithAssistantId:(id)a0 requestId:(id)a1 inputOrigin:(id)a2 utterance:(id)a3 previousUtterance:(id)a4;
- (id)initWithMock:(id)a0;

@end
