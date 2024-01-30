@class TIZhuyinInputManager, TIKeyboardCandidate;

@interface TIKeyboardInputManager_zh_RetroCorrection : TIKeyboardInputManager_zh_Base

@property (copy, nonatomic) TIZhuyinInputManager *zhuyinInputManager;
@property (copy, nonatomic) TIKeyboardCandidate *defaultCandidate;

- (void)clearInput;
- (BOOL)supportsSetPhraseBoundary;
- (void).cxx_destruct;
- (unsigned int)inputIndex;
- (unsigned int)inputCount;
- (id)inputString;
- (id)validCharacterSetForAutocorrection;
- (void)saveGeometryForInput:(id)a0 atIndex:(unsigned long long)a1;
- (void)restoreGeometryForInput:(id)a0 atIndex:(unsigned long long)a1;
- (id)handleKeyboardInput:(id)a0;
- (BOOL)supportsCandidateGeneration;
- (id)keyboardConfigurationLayoutTag;
- (id)rawInputString;
- (id)didAcceptCandidate:(id)a0;
- (id)deleteFromInput:(unsigned long long *)a0;
- (void)setPhraseBoundary:(unsigned long long)a0;
- (id)groupedCandidatesFromCandidates:(id)a0 usingSortingMethod:(id)a1;
- (id)internalInputString;
- (void)addInputToInternal:(id)a0;
- (id)composedTextForSelectedCandidate:(id)a0 remainingInput:(id)a1;
- (id)initWithInputMode:(id)a0 keyboardState:(id)a1 inputString:(id)a2;
- (void)_addInputToInternal:(id)a0;
- (void)updateInlineCandidate;

@end
