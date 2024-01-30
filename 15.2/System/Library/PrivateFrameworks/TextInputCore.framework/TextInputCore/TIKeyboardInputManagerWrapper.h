@class TIKeyboardInputManagerBase;
@protocol TIKeyboardInputManagerLogging, TIClientProxy;

@interface TIKeyboardInputManagerWrapper : TIKeyboardInputManagerStub

@property (retain, nonatomic) TIKeyboardInputManagerBase *inputManager;
@property (retain, nonatomic) id<TIKeyboardInputManagerLogging> logger;
@property (retain, nonatomic) id<TIClientProxy> clientProxy;

- (void)smartSelectionForTextInDocument:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 language:(id)a2 tokenizedRanges:(id)a3 options:(unsigned long long)a4 completion:(id /* block */)a5;
- (void)adjustPhraseBoundaryInForwardDirection:(BOOL)a0 granularity:(int)a1 keyboardState:(id)a2 completionHandler:(id /* block */)a3;
- (void)generateCandidatesWithKeyboardState:(id)a0 candidateRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 completionHandler:(id /* block */)a2;
- (void)textAccepted:(id)a0;
- (void)generateAutocorrectionsWithKeyboardState:(id)a0 completionHandler:(id /* block */)a1;
- (void)syncToKeyboardState:(id)a0 completionHandler:(id /* block */)a1;
- (void)performHitTestForTouchEvent:(id)a0 keyboardState:(id)a1 continuation:(id /* block */)a2;
- (void)generateAutocorrectionsWithKeyboardState:(id)a0 candidateRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 completionHandler:(id /* block */)a2;
- (void)generateRefinementsForCandidate:(id)a0 keyboardState:(id)a1 completionHandler:(id /* block */)a2;
- (void)performHitTestForTouchEvents:(id)a0 keyboardState:(id)a1 continuation:(id /* block */)a2;
- (void)adjustPhraseBoundaryInForwardDirection:(BOOL)a0 keyboardState:(id)a1 completionHandler:(id /* block */)a2;
- (void)addSupplementalLexicon:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeSupplementalLexiconWithIdentifier:(unsigned long long)a0;
- (void)generateAutocorrectionsWithKeyboardState:(id)a0 candidateRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 requestToken:(id)a2 completionHandler:(id /* block */)a3;
- (void).cxx_destruct;
- (id)init;
- (void)handleKeyboardInput:(id)a0 keyboardState:(id)a1 completionHandler:(id /* block */)a2;
- (void)handleAcceptedCandidate:(id)a0 keyboardState:(id)a1 completionHandler:(id /* block */)a2;
- (void)generateReplacementsForString:(id)a0 keyLayout:(id)a1 continuation:(id /* block */)a2;
- (void)skipHitTestForTouchEvents:(id)a0 keyboardState:(id)a1;
- (void)setOriginalInput:(id)a0;
- (void)candidateRejected:(id)a0;
- (void)lastAcceptedCandidateCorrected;
- (void)textAccepted:(id)a0 completionHandler:(id /* block */)a1;
- (void)logDiscoverabilityEvent:(int)a0 userInfo:(id)a1;
- (void)skipHitTestForTouchEvent:(id)a0 keyboardState:(id)a1;
- (void)handleKeyboardState:(id)a0;
- (void)writeTypologyLogWithCompletionHandler:(id /* block */)a0;
- (void)acceptSecureCandidate:(id)a0 keyboardState:(id)a1 completion:(id /* block */)a2;
- (void)updateAnalyticsForRejectedSuggestion:(id)a0 keyboardState:(id)a1;
- (void)_updateKeyboardOutput:(id)a0 withSecureCandidatePayload:(id)a1 keyboardState:(id)a2;
- (void)handleKeyboardInput:(id)a0 acceptedSecureCandidate:(id)a1 keyboardState:(id)a2 completionHandler:(id /* block */)a3;
- (void)handleAcceptedCandidate:(id)a0 acceptedSecureCandidate:(id)a1 keyboardState:(id)a2 completionHandler:(id /* block */)a3;

@end
