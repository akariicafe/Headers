@interface _SFSpeechRecognitionBlockTask : SFSpeechRecognitionTask {
    id /* block */ _resultHandler;
    BOOL _hasFiredFinalResult;
}

- (void).cxx_destruct;
- (void)dictationConnection:(id)a0 didRecognizePackage:(id)a1;
- (void)dictationConnectionSpeechRecognitionDidSucceed:(id)a0;
- (void)dictationConnectionSpeechRecordingDidCancel:(id)a0;
- (void)dictationConnection:(id)a0 speechRecordingDidFail:(id)a1;
- (void)dictationConnection:(id)a0 didRecognizeTokens:(id)a1 languageModel:(id)a2;
- (void)dictationConnection:(id)a0 speechRecognitionDidFail:(id)a1;
- (void)_fireResultHandlerWithResult:(id)a0 error:(id)a1;
- (void)_finalizeResultHandler;
- (id)_initWithRequest:(id)a0 queue:(id)a1 languageCode:(id)a2 taskHint:(long long)a3 resultHandler:(id /* block */)a4;

@end
