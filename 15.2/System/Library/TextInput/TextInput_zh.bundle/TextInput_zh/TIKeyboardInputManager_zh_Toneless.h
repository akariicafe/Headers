@class TIMecabraCandidate;

@interface TIKeyboardInputManager_zh_Toneless : TIKeyboardInputManager_zh_Base

@property (copy, nonatomic) TIMecabraCandidate *inlineCandidate;
@property (nonatomic) BOOL dynamic;
@property (nonatomic) BOOL assertDefaultKeyPlane;

- (void)generateCandidatesWithKeyboardState:(id)a0 candidateRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 completionHandler:(id /* block */)a2;
- (void)clearInput;
- (void).cxx_destruct;
- (id)defaultCandidate;
- (id)inputString;
- (id)validCharacterSetForAutocorrection;
- (void)updateComposedText;
- (id)handleKeyboardInput:(id)a0;
- (BOOL)supportsCandidateGeneration;
- (void)commitComposition;
- (id)keyboardConfigurationLayoutTag;
- (BOOL)keyboardConfigurationAssertDefaultKeyPlane;
- (id)didAcceptCandidate:(id)a0;
- (id)deleteFromInput:(unsigned long long *)a0;
- (void)setPhraseBoundary:(unsigned long long)a0;
- (id)groupedCandidatesFromCandidates:(id)a0 usingSortingMethod:(id)a1;
- (BOOL)shouldSearchCompletionForSubstrings;
- (id)composedTextForSelectedCandidate:(id)a0 remainingInput:(id)a1;
- (void)activateRetroCorrection;
- (id)initWithInputMode:(id)a0 keyboardState:(id)a1 dynamic:(BOOL)a2;

@end
