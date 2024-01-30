@interface SRDRequestDispatcherInternal : NSObject {
    void /* unknown type, empty encoding */ rdmbQueue;
    void /* unknown type, empty encoding */ broker;
    void /* unknown type, empty encoding */ messagePublisher;
    void /* unknown type, empty encoding */ sessionsManager;
    void /* unknown type, empty encoding */ aceCommandDispatcher;
    void /* unknown type, empty encoding */ serviceHelper;
    void /* unknown type, empty encoding */ instrumentationUtil;
    void /* unknown type, empty encoding */ assetLogger;
    void /* unknown type, empty encoding */ sessionUserId;
}

- (id)domains;
- (id)init;
- (void).cxx_destruct;
- (void)cancelRequestWithAssistantId:(id)a0 requestId:(id)a1;
- (void)startSessionWithAssistantId:(id)a0 languageCode:(id)a1 understandingOnDevice:(BOOL)a2;
- (id)commandsForDomain:(id)a0;
- (void)endDictationSessionWithAssistantId:(id)a0;
- (void)endSessionWithAssistantId:(id)a0 withDelay:(BOOL)a1;
- (void)handleCommand:(id)a0 executionContextInfo:(id)a1 reply:(id /* block */)a2;
- (BOOL)implementsCommand:(id)a0 forDomain:(id)a1;
- (id)initWithRequestDispatcherServiceHelper:(id)a0;
- (void)pauseDictationRecognitionWithAssistantId:(id)a0 requestId:(id)a1;
- (void)postTestResultCandidateWithAssistantId:(id)a0 requestId:(id)a1 rcId:(id)a2 recognitionSausage:(id)a3;
- (void)postTestResultSelectedWithAssistantId:(id)a0 requestId:(id)a1 rcId:(id)a2;
- (void)prewarmWithAssistantId:(id)a0 languageCode:(id)a1 prewarmOptions:(unsigned long long)a2 sharedUserId:(id)a3;
- (void)requestCompletedWithAssistantId:(id)a0 requestId:(id)a1;
- (void)resumeDictationRecognitionWithAssistantId:(id)a0 requestId:(id)a1 prefixText:(id)a2 postfixText:(id)a3 selectedText:(id)a4;
- (void)sendMultiUserInfoWithDeviceAssistantId:(id)a0 multiUserInfo:(id)a1 isRMVEnabled:(BOOL)a2;
- (void)sendRequestContextWithAssistantId:(id)a0 requestId:(id)a1 audioSource:(id)a2 audioDestination:(id)a3 responseMode:(id)a4 isEyesFree:(BOOL)a5 isVoiceTriggerEnabled:(BOOL)a6 isTextToSpeechEnabled:(BOOL)a7 isTriggerlessFollowup:(BOOL)a8 bargeInModes:(id)a9 approximatePreviousTTSInterval:(id)a10 deviceRestrictions:(id)a11 voiceTriggerEventInfo:(id)a12 voiceAudioSessionId:(unsigned int)a13;
- (BOOL)sessionExistsForAssistantId:(id)a0;
- (void)startCorrectionSpeechRequestWithAssistantId:(id)a0 requestId:(id)a1 inputOrigin:(id)a2 utterance:(id)a3 previousUtterance:(id)a4;
- (void)startDirectActionRequestWithAssistantId:(id)a0 requestId:(id)a1 inputOrigin:(id)a2 directAction:(id)a3 requestExecutionParameters:(id)a4;
- (void)startLocalRequestWithAssistantId:(id)a0 requestId:(id)a1 inputOrigin:(id)a2;
- (void)startSessionWithAssistantId:(id)a0 languageCode:(id)a1;
- (void)startSessionWithAssistantId:(id)a0 languageCode:(id)a1 understandingOnDevice:(BOOL)a2 sharedUserId:(id)a3;
- (void)startSpeechDictationRequestWithAssistantId:(id)a0 requestId:(id)a1 inputOrigin:(id)a2 dictationOptions:(id)a3;
- (void)startSpeechDictationSessionWithAssistantId:(id)a0 languageCode:(id)a1 recognitionOnDevice:(BOOL)a2;
- (void)startSpeechRequestWithAssistantId:(id)a0 requestId:(id)a1 inputOrigin:(id)a2;
- (void)startSpeechRequestWithAssistantId:(id)a0 requestId:(id)a1 inputOrigin:(id)a2 location:(id)a3;
- (void)startSpeechRequestWithAssistantId:(id)a0 requestId:(id)a1 inputOrigin:(id)a2 location:(id)a3 asrOnServer:(BOOL)a4;
- (void)startTestSpeechRequestWithAssistantId:(id)a0 requestId:(id)a1 enableASR:(BOOL)a2 inputOrigin:(id)a3 location:(id)a4 jitContext:(id)a5 overrideModelPath:(id)a6;
- (void)startTestSpeechRequestWithAssistantId:(id)a0 requestId:(id)a1 inputOrigin:(id)a2;
- (void)startTextRequestWithAssistantId:(id)a0 requestId:(id)a1 inputOrigin:(id)a2 utterance:(id)a3;
- (void)startUnderstandingDictationRequestWithAssistantId:(id)a0 requestId:(id)a1 inputOrigin:(id)a2 dictationOptions:(id)a3;
- (void)startUnderstandingDictationSessionWithAssistantId:(id)a0 languageCode:(id)a1 understandingOnDevice:(BOOL)a2;
- (void)startUnderstandingOnServerRequestWithAssistantId:(id)a0 requestId:(id)a1 inputOrigin:(id)a2;
- (void)startUnderstandingOnServerTextRequestWithAssistantId:(id)a0 requestId:(id)a1 inputOrigin:(id)a2 utterance:(id)a3;

@end
