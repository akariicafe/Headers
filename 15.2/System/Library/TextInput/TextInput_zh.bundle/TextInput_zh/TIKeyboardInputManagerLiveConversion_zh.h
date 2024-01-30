@class NSArray, TIKeyboardCandidate, NSString, TIZhuyinInputManager;

@interface TIKeyboardInputManagerLiveConversion_zh : TIKeyboardInputManagerChinesePhonetic

@property (copy, nonatomic) TIKeyboardCandidate *topCandidate;
@property (copy, nonatomic) TIKeyboardCandidate *currentCandidate;
@property (copy, nonatomic) NSArray *segments;
@property (copy, nonatomic) NSString *remainingInput;
@property (copy, nonatomic) TIZhuyinInputManager *zhuyinInputManager;
@property (copy, nonatomic) NSString *cachedInputString;
@property (nonatomic) BOOL revertTonlessZhuyin;

- (BOOL)supportsNumberKeySelection;
- (BOOL)delayedCandidateList;
- (id)keyboardBehaviors;
- (id)markedText;
- (BOOL)commitsAcceptedCandidate;
- (void)clearInput;
- (id)keyEventMap;
- (id)wordCharacters;
- (void).cxx_destruct;
- (BOOL)usesLiveConversion;
- (unsigned int)inputIndex;
- (id)keyBehaviorsForState:(id)a0;
- (unsigned long long)initialSelectedIndex;
- (unsigned int)inputCount;
- (id)inputString;
- (id)validCharacterSetForAutocorrection;
- (id)initWithConfig:(id)a0 keyboardState:(id)a1;
- (BOOL)shouldClearInputOnMarkedTextOutOfSync;
- (void)saveGeometryForInput:(id)a0 atIndex:(unsigned long long)a1;
- (void)restoreGeometryForInput:(id)a0 atIndex:(unsigned long long)a1;
- (id)handleAcceptedCandidate:(id)a0 keyboardState:(id)a1;
- (void)syncToKeyboardState:(id)a0 from:(id)a1 afterContextChange:(BOOL)a2;
- (id)handleKeyboardInput:(id)a0;
- (BOOL)_adjustPhraseBoundaryInForwardDirection:(BOOL)a0 granularity:(int)a1;
- (void)commitComposition;
- (BOOL)closeCandidateGenerationContextWithResults:(id)a0;
- (id)rawInputString;
- (id)didAcceptCandidate:(id)a0;
- (void *)initImplementation;
- (id)deleteFromInput:(unsigned long long *)a0;
- (int)inputMethodType;
- (BOOL)shouldSearchCompletionForSubstrings;
- (id)internalInputString;
- (BOOL)skipSetMarkedTextDuringInput;
- (BOOL)_shouldCommitInputDirectly:(id)a0;
- (void)addInputToInternal:(id)a0;
- (BOOL)shouldReplaceCharacterOfInputStringBeforeCursorForInput:(id)a0;
- (id)phoneticSortingMethod;
- (BOOL)updateCandidatesByWaitingForResults:(BOOL)a0;
- (id)composedTextForSelectedCandidate:(id)a0 remainingInput:(id)a1;
- (void)_notifyUpdateCandidates:(id)a0 forOperation:(id)a1;
- (void)presetSegmentPickerForLastSegment;
- (void)presentSegmentAdjuster;
- (void)_addInputToInternal:(id)a0;

@end
