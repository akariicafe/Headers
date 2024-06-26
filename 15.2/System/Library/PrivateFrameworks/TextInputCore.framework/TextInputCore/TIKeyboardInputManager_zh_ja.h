@class NSString, NSArray, TIKeyboardTouchEvent, TIWordSearchCandidateResultSet, NSMutableDictionary, NSMutableArray, TIWordSearch, MCDrawInput, NSCharacterSet, MCKeyboardInput;

@interface TIKeyboardInputManager_zh_ja : TIKeyboardInputManager

@property (retain, nonatomic) NSArray *clearedGeometryDataArray;
@property (retain, nonatomic) NSArray *clearedTouchDataArray;
@property (copy, nonatomic) NSString *currentClientIdentifier;
@property (copy, nonatomic) NSString *currentRecipientIdentifier;
@property (nonatomic) BOOL hasCommittedPartialCandidate;
@property (nonatomic) BOOL hasBackspacedIntoInputString;
@property (nonatomic) int lastCommittedCandidateType;
@property (nonatomic) BOOL preservesComposingInput;
@property (retain, nonatomic) TIKeyboardTouchEvent *previousTouchEvent;
@property (retain, nonatomic) MCDrawInput *cancelledDrawInput;
@property (readonly, nonatomic) struct RefPtr<TI::Favonius::KeyboardLayout> { struct KeyboardLayout *m_ptr; } baseLayout;
@property (nonatomic) struct RefPtr<TI::Favonius::KeyboardLayout> { struct KeyboardLayout *m_ptr; } favoniusLayoutForCharacterKeysFrame;
@property (copy, nonatomic) id /* block */ compositionCompletionHandler;
@property (readonly, nonatomic) TIWordSearch *wordSearch;
@property (readonly, nonatomic) struct __Mecabra { } *mecabra;
@property (retain, nonatomic) TIWordSearchCandidateResultSet *wordSearchCandidateResultSet;
@property (readonly, nonatomic) BOOL supportsPerRecipientLearning;
@property (readonly, nonatomic) MCKeyboardInput *composingInput;
@property (readonly, nonatomic) BOOL usesComposingInput;
@property (retain, nonatomic) MCKeyboardInput *previouslyDeletedTypeInput;
@property (retain, nonatomic) MCKeyboardInput *previouslyProcessedDeleteInput;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } currentLayoutCharacterKeysFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } baseLayoutCharacterKeysFrame;
@property (readonly, nonatomic) NSMutableArray *geometryDataArray;
@property (readonly, nonatomic) NSCharacterSet *validCharacterSetForAutocorrection;
@property (readonly, nonatomic) NSMutableDictionary *touchDownEvents;
@property (readonly, nonatomic) NSMutableDictionary *touchUpEvents;
@property (readonly, nonatomic) NSMutableArray *touchDataArray;
@property (readonly, nonatomic) TIKeyboardInputManager_zh_ja *chainedKeyboardInputManager;
@property (retain, nonatomic) TIKeyboardInputManager_zh_ja *composingKeyboardInputManager;

+ (id)initializedClients;
+ (id)dummyTouchData;
+ (id)dummyGeometryData;
+ (void)removeDynamicDictionaryForInputMode:(id)a0;
+ (id)offlineLearningHandleForInputMode:(id)a0;
+ (Class)wordSearchClass;
+ (id)inputMethodWithChainedKeyboardInputManager:(id)a0;

- (void)tearDown;
- (void)generateCandidatesWithKeyboardState:(id)a0 candidateRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 completionHandler:(id /* block */)a2;
- (id)keyboardConfiguration;
- (id)inputsToReject;
- (unsigned long long)autoquoteType;
- (void)clearInput;
- (BOOL)syncToKeyboardState:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)suspend;
- (BOOL)updateLanguageModelForKeyboardState;
- (void)setOriginalInput:(id)a0;
- (void)candidateRejected:(id)a0;
- (void)lastAcceptedCandidateCorrected;
- (void)resume;
- (id)wordSeparator;
- (void)dealloc;
- (void)skipHitTestForTouchEvent:(id)a0 keyboardState:(id)a1;
- (id).cxx_construct;
- (id)initWithConfig:(id)a0 keyboardState:(id)a1;
- (BOOL)isProgressivelyPathing;
- (BOOL)shouldDelayUpdateComposedText;
- (BOOL)shouldClearInputOnMarkedTextOutOfSync;
- (id)geometryModelData;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })analysisStringRange;
- (void)saveGeometryForInput:(id)a0 atIndex:(unsigned long long)a1;
- (void)restoreGeometryForInput:(id)a0 atIndex:(unsigned long long)a1;
- (void)padGeometryForInput:(id)a0 atIndex:(unsigned long long)a1;
- (void)savePartialGeometryData;
- (void)updateComposedText;
- (id)convertInputsToSyntheticInputUptoCount:(int)a0;
- (id)handleAcceptedCandidate:(id)a0 keyboardState:(id)a1;
- (BOOL)needsTouchEvents;
- (long long)addTouch:(id)a0 shouldHitTest:(BOOL)a1;
- (id)touchDataForPathIndex:(long long)a0;
- (void)saveTouchDataForEvent:(id)a0 atIndex:(unsigned long long)a1;
- (void)logInputString;
- (void)logDocumentContext;
- (void)logAllCandidates;
- (void)logCommittedCandidate:(id)a0 partial:(BOOL)a1;
- (void)storeLanguageModelDynamicDataIncludingCache;
- (void)insertDummyGeometryDataAtIndex:(unsigned long long)a0;
- (void)insertDummyTouchDataAtIndex:(unsigned long long)a0;
- (void)handlePerformBackgroundMaintenanceNotification;
- (id)adaptationContextReadingForReanalysisString:(id)a0 fromRecentlyCommittedCandidates:(id)a1;
- (BOOL)shouldUpdateLanguageModel;
- (void)setLanguageModelAdaptationContext;
- (int)mecabraTextContentTypeFromTITextContentType:(id)a0;
- (void)syncToKeyboardState:(id)a0 from:(id)a1 afterContextChange:(BOOL)a2;
- (void)updateUsageStatisticsForCandidate:(id)a0 isPartial:(BOOL)a1;
- (void)incrementUsageTrackingKeysForDeleteFromInput;
- (id)handleKeyboardInput:(id)a0;
- (void)updateDocumentContext;
- (void)deleteFromInputWithContext:(id)a0;
- (id)candidateResultSetFromWordSearchCandidateResultSet:(id)a0;
- (void *)mecabraCandidateRefFromCandidate:(id)a0;
- (id)segmentsFromCandidate:(id)a0 phraseBoundary:(BOOL)a1;
- (struct pair<NSString *, NSArray<NSNumber *> *> { id x0; id x1; })_supplementalItemIdentifiersInCurrentSelection;
- (void)addSupplementalCandidatesToResultSet:(id)a0;
- (void)addProactiveTriggers:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)updateProactiveCandidatesForCandidateResultSet:(id)a0 withInput:(id)a1;
- (void)generateAutocorrectionsWithKeyboardState:(id)a0 candidateRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 candidateHandler:(id)a2;
- (BOOL)supportsCandidateGeneration;
- (BOOL)alreadyGeneratedCandidates;
- (id)generateReplacementsForString:(id)a0 keyLayout:(id)a1;
- (id)generateRefinementsForCandidate:(id)a0;
- (long long)performHitTestForTouchEvent:(id)a0 keyboardState:(id)a1;
- (void)adjustPhraseBoundaryInForwardDirection:(BOOL)a0;
- (void)adjustPhraseBoundaryInForwardDirection:(BOOL)a0 granularity:(int)a1;
- (BOOL)_adjustPhraseBoundaryInForwardDirection:(BOOL)a0 granularity:(int)a1;
- (void)textAccepted:(id)a0 fromPredictiveInputBar:(BOOL)a1 withInput:(id)a2;
- (id)initWithKeyboardInputManagerToChain:(id)a0;
- (void)commitComposition;
- (void)abortComposition;
- (void)composeText:(id /* block */)a0;
- (void)_completeComposition:(BOOL)a0;
- (void)composeTextWith:(id)a0;
- (void)completeComposition;
- (void)cancelComposition;

@end
