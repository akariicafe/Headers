@interface WebSpeechRecognizerTaskMock : WebSpeechRecognizerTask {
    struct ObjectIdentifier<WebCore::SpeechRecognitionConnectionClientIdentifierType> { unsigned long long m_identifier; } _identifier;
    struct BlockPtr<void (const WebCore::SpeechRecognitionUpdate &)> { id /* block */ m_block; } _delegateCallback;
    BOOL _doMultipleRecognitions;
    BOOL _hasSentSpeechStart;
    BOOL _hasSentSpeechEnd;
    BOOL _completed;
}

- (void)abort;
- (void)audioSamplesAvailable:(struct opaqueCMSampleBuffer { } *)a0;
- (id)initWithIdentifier:(struct ObjectIdentifier<WebCore::SpeechRecognitionConnectionClientIdentifierType> { unsigned long long x0; })a0 locale:(id)a1 doMultipleRecognitions:(BOOL)a2 reportInterimResults:(BOOL)a3 maxAlternatives:(unsigned long long)a4 delegateCallback:(id /* block */)a5;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)stop;

@end
