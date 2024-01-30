@class NSString, TITypingSession;

@interface TICandidateBarUsageAnalyzer : NSObject <TITypingSessionAnalyzing> {
    TITypingSession *_currentSession;
    BOOL _predictionEnabled;
    BOOL _continuousPathEnabled;
    BOOL _autocorrectionEnabled;
    BOOL _hwAutocorrectionEnabled;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerEventSpec;
- (unsigned long long)evaluateConfidenceInSession:(id)a0 alignedSession:(id)a1;
- (BOOL)analyzeSession:(id)a0 alignedSession:(id)a1 withConfidence:(unsigned long long)a2;
- (id)stringFromInputMethod:(unsigned long long)a0;
- (id)stringFromSelectionType:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dispatchEventWithInputMethod:(unsigned long long)a0 typingEngineType:(unsigned int)a1 selectionType:(unsigned long long)a2 keyboardState:(id)a3;
- (void)analyzeWordEntry:(id)a0;

@end
