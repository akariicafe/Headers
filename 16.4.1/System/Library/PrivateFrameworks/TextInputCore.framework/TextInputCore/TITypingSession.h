@class NSMutableDictionary, NSDate, TIKeyboardState, NSLocale, TITypingSessionParams, TIKeyboardTouchEvent, NSMutableArray, TIWordEntry, NSString, TIDeleteWordEvent, TIKeyboardInput, TIFeatureUsageMetricsCache, NSArray, NSUUID;

@interface TITypingSession : NSObject <NSSecureCoding, TIKeyboardInteractionProtocol> {
    NSMutableArray *_cachedKeyboardStates;
    NSMutableArray *_cachedCandidatesOffered;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableArray *userActionHistory;
@property (retain, nonatomic) NSArray *originalWords;
@property (retain, nonatomic) TIWordEntry *currentWord;
@property (retain, nonatomic) TIKeyboardInput *lastInput;
@property (retain, nonatomic) NSMutableArray *layouts;
@property (retain, nonatomic) TIKeyboardState *savedDeleteInputKeyboardState;
@property (nonatomic) unsigned long long currentLayoutID;
@property (retain, nonatomic) NSLocale *locale;
@property (retain, nonatomic) TIWordEntry *lastWord;
@property (retain, nonatomic) TIDeleteWordEvent *lastDeletion;
@property (nonatomic) BOOL includeInputToLastWord;
@property (nonatomic) BOOL includeInputToLastDeletion;
@property (retain, nonatomic) NSString *candidateAcceptedTrigger;
@property (retain, nonatomic) NSString *contextChangeTrigger;
@property (retain) TIKeyboardTouchEvent *timeCalibrationTouch;
@property double calibratedTimeBase;
@property (nonatomic) BOOL didReceiveSecureFieldEvent;
@property (retain, nonatomic) NSMutableDictionary *touchesHistory;
@property (nonatomic) long long lastActivePathIndex;
@property (nonatomic) BOOL fromLegacyRecording;
@property (copy, nonatomic) NSString *layoutName;
@property (copy, nonatomic) NSString *startContext;
@property (retain, nonatomic) NSDate *startTime;
@property (retain, nonatomic) NSDate *endTime;
@property (retain, nonatomic) NSUUID *sessionId;
@property (copy, nonatomic) NSString *applicationID;
@property (retain, nonatomic) TITypingSessionParams *sessionParams;
@property (retain, nonatomic) TIFeatureUsageMetricsCache *featureUsageMetricsCache;
@property (nonatomic) int candidatesAccepted;
@property (nonatomic) int candidatesAcceptedWithText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)changingContextWithTrigger:(id)a0;
- (id)currentInputsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)removeInputsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)encodeWithCoder:(id)a0;
- (void)removeTouchesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)handleUncommittedWord;
- (void)addTouchEvent:(id)a0;
- (void)addDrawInputWithSyllableCount:(unsigned long long)a0 keyboardState:(id)a1;
- (void)setClientID:(id)a0 keyboardState:(id)a1;
- (BOOL)testForRapidDeleteContextChange:(id)a0;
- (void)candidatesOffered:(id)a0 keyboardState:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)removeLayoutsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (double)calibratedCurrentTimestamp;
- (id)initWithLocale:(id)a0 keyboardLayout:(id)a1;
- (id)currentLayoutsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)endSessionWithTimestamp:(id)a0;
- (void)initContextChangeEvent:(id)a0 withDocumentState:(id)a1 keyboardState:(id)a2 extendsPriorWord:(BOOL)a3 inWord:(id)a4 inWordRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a5 selectionLocation:(unsigned long long)a6;
- (id)committedWordDeletionWithDocumentState:(id)a0 keyboardState:(id)a1;
- (void)updateCachedStateAfterLastInputWithKeyboardState:(id)a0;
- (id)uncommittedWordEntryFromInputsWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 documentState:(id)a1 cancelled:(BOOL)a2;
- (void)addKeyInput:(id)a0 keyboardState:(id)a1;
- (void)resetCurrentWord;
- (id)uncommittedWordDeletionFromInputsWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)candidateAccepted:(id)a0 withInput:(id)a1 documentState:(id)a2 inputContext:(id)a3 inputStem:(id)a4 predictionBarHit:(BOOL)a5 useCandidateSelection:(BOOL)a6 candidateIndex:(long long)a7 keyboardState:(id)a8;
- (void)removeInputsAndTouchesWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)resolveInputs:(id)a0 cancelledTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1 leadingBackspaceRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2 trailingTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a3;
- (id)createContextChangeEventWithClass:(Class)a0 documentState:(id)a1 keyboardState:(id)a2 extendsPriorWord:(BOOL)a3 inWord:(id)a4 inWordRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a5 selectionLocation:(unsigned long long)a6;
- (void)acceptingCandidateWithTrigger:(id)a0;
- (id)currentTouchesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)init;
- (void)contextDidChange:(id)a0 wordDelete:(BOOL)a1 cursorMoved:(BOOL)a2 extendsPriorWord:(BOOL)a3 inWord:(id)a4 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a5 selectionLocation:(unsigned long long)a6 keyboardState:(id)a7;
- (void)insertUncommittedUserAction:(id)a0;
- (BOOL)isCurrentWordEmpty;
- (void)updateCachedStateBeforeFirstInputWithKeyboardState:(id)a0;
- (void).cxx_destruct;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })safeRangeFromRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 fromArray:(id)a1;
- (void)layoutDidChange:(id)a0 keyboardState:(id)a1;

@end
