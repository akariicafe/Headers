@class NSString, TIInputMode;

@interface TIKeyboardInputManagerBase : NSObject

@property (readonly, nonatomic) TIInputMode *inputMode;
@property (readonly, nonatomic) NSString *currentInputModeIdentifier;
@property (readonly, nonatomic) BOOL hasHandledInput;

- (void)skipHitTestForTouchEvent:(id)a0 keyboardState:(id)a1;
- (void)generateCandidatesWithKeyboardState:(id)a0 candidateRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 completionHandler:(id /* block */)a2;
- (id)init;
- (void).cxx_destruct;
- (void)setOriginalInput:(id)a0;
- (void)candidateRejected:(id)a0;
- (void)lastAcceptedCandidateCorrected;
- (void)logDiscoverabilityEvent:(int)a0 userInfo:(id)a1;
- (id)keyboardConfiguration;
- (void)resume;
- (BOOL)syncToKeyboardState:(id)a0 completionHandler:(id /* block */)a1;
- (void)suspend;
- (id)resourceInputModes;
- (id)handleAcceptedCandidate:(id)a0 keyboardState:(id)a1;
- (void)storeLanguageModelDynamicDataIncludingCache;
- (id)handleKeyboardInput:(id)a0;
- (void)generateAutocorrectionsWithKeyboardState:(id)a0 candidateRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 candidateHandler:(id)a2;
- (id)generateReplacementsForString:(id)a0 keyLayout:(id)a1;
- (id)generateRefinementsForCandidate:(id)a0;
- (long long)performHitTestForTouchEvent:(id)a0 keyboardState:(id)a1;
- (void)adjustPhraseBoundaryInForwardDirection:(BOOL)a0;
- (void)adjustPhraseBoundaryInForwardDirection:(BOOL)a0 granularity:(int)a1;
- (void)textAccepted:(id)a0 fromPredictiveInputBar:(BOOL)a1 withInput:(id)a2;
- (id)initWithInputMode:(id)a0 keyboardState:(id)a1;
- (void)runMaintenanceTask;
- (void)syncToKeyboardState:(id)a0;
- (void)candidatesOfferedFeedback:(id)a0 keyboardState:(id)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })smartSelectionRangeForTextInDocument:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 language:(id)a2 tokenizedRanges:(id)a3 options:(unsigned long long)a4;
- (BOOL)isHardwareKeyboardAutocorrectionEnabled;
- (void)addSynthesizedTouchToInput:(id)a0;
- (id)humanReadableTrace;
- (void)clearHumanReadableTrace;
- (id)configurationPropertyList;
- (long long)deletionCountForString:(id)a0;

@end
