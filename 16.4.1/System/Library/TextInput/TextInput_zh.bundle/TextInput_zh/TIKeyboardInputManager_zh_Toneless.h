@class TIMecabraCandidate;

@interface TIKeyboardInputManager_zh_Toneless : TIKeyboardInputManager_zh_Base

@property (copy, nonatomic) TIMecabraCandidate *inlineCandidate;
@property (nonatomic) BOOL dynamic;
@property (nonatomic) BOOL assertDefaultKeyPlane;

- (void)clearInput;
- (id)inputString;
- (id)deleteFromInput:(unsigned long long *)a0;
- (id)handleKeyboardInput:(id)a0;
- (void).cxx_destruct;
- (id)defaultCandidate;
- (void)generateCandidatesWithKeyboardState:(id)a0 candidateRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 completionHandler:(id /* block */)a2;
- (void)commitComposition;
- (id)didAcceptCandidate:(id)a0;
- (id)groupedCandidatesFromCandidates:(id)a0 usingSortingMethod:(id)a1;
- (BOOL)keyboardConfigurationAssertDefaultKeyPlane;
- (id)keyboardConfigurationLayoutTag;
- (void)setPhraseBoundary:(unsigned long long)a0;
- (BOOL)supportsCandidateGeneration;
- (void)updateComposedText;
- (id)validCharacterSetForAutocorrection;
- (id)composedTextForSelectedCandidate:(id)a0 remainingInput:(id)a1;
- (BOOL)shouldSearchCompletionForSubstrings;
- (void)activateRetroCorrection;
- (id)initWithInputMode:(id)a0 keyboardState:(id)a1 dynamic:(BOOL)a2;

@end
