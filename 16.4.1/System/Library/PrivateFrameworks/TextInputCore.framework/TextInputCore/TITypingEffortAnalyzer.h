@class NSString, TITypingSession, TITypingSessionAligned;

@interface TITypingEffortAnalyzer : NSObject <TITypingSessionAnalyzing> {
    TITypingSession *_session;
    TITypingSessionAligned *_alignedSession;
    BOOL _emojiPlaneActive;
    BOOL _emojiSearchActive;
}

@property (readonly, nonatomic) BOOL hasEmojiInput;
@property (readonly, nonatomic) BOOL hasCursorMovement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addCountsForWord:(id)a0 toOutputSummary:(id)a1;
- (void)addActionsForCut:(id)a0 toActionSummary:(id)a1 emojiSearchMode:(BOOL)a2;
- (BOOL)isEmojiSearchCandidateSelection:(id)a0;
- (void)registerEventSpec;
- (id)keyStringWithCode:(long long)a0 fromLayout:(id)a1;
- (void)addActionsForWordEntry:(id)a0 toActionSummary:(id)a1 emojiSearchMode:(BOOL)a2;
- (unsigned long long)evaluateConfidenceInSession:(id)a0 alignedSession:(id)a1;
- (void)addActionsForCursorEvent:(id)a0 lastAction:(id)a1 nextAction:(id)a2 toActionSummary:(id)a3 emojiSearchMode:(BOOL)a4;
- (BOOL)isFlickInput:(id)a0;
- (BOOL)analyzeSession:(id)a0 alignedSession:(id)a1 withConfidence:(unsigned long long)a2;
- (void)addActionsForDeleteWord:(id)a0 toActionSummary:(id)a1 emojiSearchMode:(BOOL)a2;
- (BOOL)isTenKeyInputMode:(id)a0;
- (BOOL)hasEmojiInKeyboardInputs:(id)a0;
- (void)addTouchRelatedActionsForTouches:(id)a0 layouts:(id)a1 acceptedCandidate:(id)a2 toActionSummary:(id)a3 keyboardInputTouches:(id)a4 pathTouches:(id)a5 emojiSearchMode:(BOOL)a6;
- (void)dispatchEventWithActionSummary:(id)a0 outputSummary:(id)a1;
- (void)addCountsForAlignedEntry:(id)a0 toOutputSummary:(id)a1;
- (id)countOutput;
- (void)addActionsForArrowKey:(id)a0 toActionSummary:(id)a1 emojiSearchMode:(BOOL)a2;
- (id)init;
- (void)addActionsForDocumentStateChange:(id)a0 toActionSummary:(id)a1 emojiSearchMode:(BOOL)a2;
- (void)addPathAndCandidateBarActionsForWordEntry:(id)a0 toActionSummary:(id)a1 andPathTouches:(id)a2 emojiSearchMode:(BOOL)a3;
- (void)addSpecialKeyActionsForFirstTouch:(id)a0 andLastTouch:(id)a1 fromLayout:(id)a2 toActionSummary:(id)a3 emojiSearchMode:(BOOL)a4;
- (void)addCountsForEmojiInputs:(id)a0 toOutputSummary:(id)a1;
- (void)addActionsForPaste:(id)a0 toActionSummary:(id)a1 emojiSearchMode:(BOOL)a2;
- (void)addPathWeightActionsForTouches:(id)a0 withLayout:(id)a1 forWord:(id)a2 toActionSummary:(id)a3 emojiSearchMode:(BOOL)a4;
- (void)addCountsForPropertyWithName:(id)a0 andEmojiSearchPropertyName:(id)a1 contributesToTotal:(BOOL)a2 toActionSummary:(id)a3 emojiSearchMode:(BOOL)a4;
- (void)addKeyboardInputActionsForKeyboardInputs:(id)a0 inputMode:(id)a1 toActionSummary:(id)a2 andKeyboardInputTouches:(id)a3 emojiSearchMode:(BOOL)a4;
- (id)countActions;
- (int)countComposedCharactersInText:(id)a0;
- (void).cxx_destruct;
- (BOOL)isPopupVariantInput:(id)a0 inputMode:(id)a1;

@end
