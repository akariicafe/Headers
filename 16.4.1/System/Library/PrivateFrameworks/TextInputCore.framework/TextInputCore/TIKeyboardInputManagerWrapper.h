@class NSString, TIKeyboardInputManagerBase;
@protocol TIKeyboardInputManagerLogging, TIClientProxy;

@interface TIKeyboardInputManagerWrapper : TIKeyboardInputManagerStub

@property (retain, nonatomic) TIKeyboardInputManagerBase *inputManager;
@property (retain, nonatomic) id<TIKeyboardInputManagerLogging> logger;
@property (retain, nonatomic) id<TIClientProxy> clientProxy;
@property (retain, nonatomic) NSString *cachedContextChangeTrigger;

- (void)textAccepted:(id)a0;
- (void)changingContextWithTrigger:(id)a0;
- (void)handleKeyboardInput:(id)a0 keyboardState:(id)a1 completionHandler:(id /* block */)a2;
- (void)handleKeyboardState:(id)a0;
- (void)skipHitTestForTouchEvent:(id)a0 keyboardState:(id)a1;
- (void)syncToKeyboardState:(id)a0 completionHandler:(id /* block */)a1;
- (void)generateAutocorrectionsWithKeyboardState:(id)a0 completionHandler:(id /* block */)a1;
- (void)acceptingCandidateWithTrigger:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)generateAutocorrectionsWithKeyboardState:(id)a0 candidateRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 requestToken:(id)a2 completionHandler:(id /* block */)a3;
- (void)textAccepted:(id)a0 completionHandler:(id /* block */)a1;
- (void)adjustPhraseBoundaryInForwardDirection:(BOOL)a0 granularity:(int)a1 keyboardState:(id)a2 completionHandler:(id /* block */)a3;
- (void)candidateRejected:(id)a0;
- (void)generateCandidatesWithKeyboardState:(id)a0 candidateRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 completionHandler:(id /* block */)a2;
- (void)generateReplacementsForString:(id)a0 keyLayout:(id)a1 continuation:(id /* block */)a2;
- (void)handleAcceptedCandidate:(id)a0 keyboardState:(id)a1 completionHandler:(id /* block */)a2;
- (void)lastAcceptedCandidateCorrected;
- (void)logDiscoverabilityEvent:(int)a0 userInfo:(id)a1;
- (void)setOriginalInput:(id)a0;
- (void)skipHitTestForTouchEvents:(id)a0 keyboardState:(id)a1;
- (void)smartSelectionForTextInDocument:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 language:(id)a2 tokenizedRanges:(id)a3 options:(unsigned long long)a4 completion:(id /* block */)a5;
- (void)writeTypologyLogWithCompletionHandler:(id /* block */)a0;
- (void)addSupplementalLexicon:(id)a0 completionHandler:(id /* block */)a1;
- (void)adjustPhraseBoundaryInForwardDirection:(BOOL)a0 keyboardState:(id)a1 completionHandler:(id /* block */)a2;
- (void)generateAutocorrectionsWithKeyboardState:(id)a0 candidateRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 completionHandler:(id /* block */)a2;
- (void)generateRefinementsForCandidate:(id)a0 keyboardState:(id)a1 completionHandler:(id /* block */)a2;
- (void)performHitTestForTouchEvent:(id)a0 keyboardState:(id)a1 continuation:(id /* block */)a2;
- (void)performHitTestForTouchEvents:(id)a0 keyboardState:(id)a1 continuation:(id /* block */)a2;
- (void)removeSupplementalLexiconWithIdentifier:(unsigned long long)a0;
- (void)_updateKeyboardOutput:(id)a0 withSecureCandidatePayload:(id)a1 keyboardState:(id)a2;
- (void)acceptSecureCandidate:(id)a0 keyboardState:(id)a1 completion:(id /* block */)a2;
- (void)handleAcceptedCandidate:(id)a0 acceptedSecureCandidate:(id)a1 keyboardState:(id)a2 completionHandler:(id /* block */)a3;
- (void)handleKeyboardInput:(id)a0 acceptedSecureCandidate:(id)a1 keyboardState:(id)a2 completionHandler:(id /* block */)a3;
- (void)updateAnalyticsForRejectedSuggestion:(id)a0 keyboardState:(id)a1;

@end
