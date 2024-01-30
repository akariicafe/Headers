@interface RequestDispatcherBridges.DictationSpeechRecognizerResponseHandler : RequestDispatcherBridges.SpeechRecognizerResponseHandler {
    void /* unknown type, empty encoding */ dictationOptions;
}

- (void).cxx_destruct;
- (void)localSpeechRecognizerClient:(id)a0 didCompletionRecognitionWithStatistics:(id)a1 requestId:(id)a2 endpointMode:(long long)a3 error:(id)a4;
- (void)localSpeechRecognizerClient:(id)a0 receivedEagerRecognitionCandidateWithRequestId:(id)a1 rcId:(unsigned long long)a2 speechPackage:(id)a3 duration:(double)a4;
- (void)localSpeechRecognizerClient:(id)a0 receivedEagerRecognitionCandidateWithRequestId:(id)a1 rcId:(unsigned long long)a2 speechPackage:(id)a3 duration:(double)a4 metadata:(id)a5;
- (void)localSpeechRecognizerClient:(id)a0 receivedFinalResultCandidateWithRequestId:(id)a1 speechPackage:(id)a2;
- (void)localSpeechRecognizerClient:(id)a0 receivedFinalResultWithRequestId:(id)a1 speechPackage:(id)a2;
- (void)localSpeechRecognizerClient:(id)a0 receivedFinalResultWithRequestId:(id)a1 speechPackage:(id)a2 metadata:(id)a3;
- (void)localSpeechRecognizerClient:(id)a0 receivedPartialResultWithRequestId:(id)a1 language:(id)a2 tokens:(id)a3;
- (void)localSpeechRecognizerClient:(id)a0 receivedPartialResultWithRequestId:(id)a1 language:(id)a2 tokens:(id)a3 metadata:(id)a4;

@end
