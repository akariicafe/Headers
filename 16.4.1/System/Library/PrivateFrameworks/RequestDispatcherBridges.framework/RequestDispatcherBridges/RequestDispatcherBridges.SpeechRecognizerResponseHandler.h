@interface RequestDispatcherBridges.SpeechRecognizerResponseHandler : NSObject <LBLocalSpeechRecognizerClientDelegate> {
    void /* unknown type, empty encoding */ requestId;
    void /* unknown type, empty encoding */ messagePublisher;
    void /* unknown type, empty encoding */ serviceHelper;
    void /* unknown type, empty encoding */ instrumentationUtil;
    void /* unknown type, empty encoding */ assistantId;
    void /* unknown type, empty encoding */ sessionId;
}

- (id)init;
- (void).cxx_destruct;
- (void)localSpeechRecognizerClient:(id)a0 didAcceptedEagerResultWithRequestId:(id)a1 rcId:(unsigned long long)a2 mitigationSignal:(BOOL)a3 featuresToLog:(id)a4;
- (void)localSpeechRecognizerClient:(id)a0 receivedFinalResultCandidateWithRequestId:(id)a1 speechPackage:(id)a2;
- (void)localSpeechRecognizerClient:(id)a0 receivedFinalResultWithRequestId:(id)a1 speechPackage:(id)a2;
- (void)localSpeechRecognizerClient:(id)a0 receivedFinalResultWithRequestId:(id)a1 speechPackage:(id)a2 metadata:(id)a3;
- (void)localSpeechRecognizerClient:(id)a0 receivedPartialResultWithRequestId:(id)a1 language:(id)a2 tokens:(id)a3;
- (void)localSpeechRecognizerClient:(id)a0 receivedPartialResultWithRequestId:(id)a1 language:(id)a2 tokens:(id)a3 metadata:(id)a4;
- (void)localSpeechRecognizerClient:(id)a0 receivedVoiceIdScoreCard:(id)a1;

@end
