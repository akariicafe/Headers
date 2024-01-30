@class TIKeyboardCandidate;

@interface TIKeyboardInputManagerWubi : TIKeyboardInputManagerShapeBased <TIKeyboardInputManagerChineseCompletion>

@property (retain, nonatomic) TIKeyboardCandidate *autoConfirmationCandidate;

+ (Class)wordSearchClass;

- (BOOL)acceptInputString:(id)a0;
- (void)setInSplitKeyboardMode:(BOOL)a0;
- (BOOL)shouldAddModifierSymbolsToWordCharacters;
- (id)inputsToReject;
- (void).cxx_destruct;
- (void)openCandidateGenerationContextWithCompletionHandler:(id /* block */)a0;
- (BOOL)closeCandidateGenerationContextWithResults:(id)a0;
- (void)addInput:(id)a0 withContext:(id)a1;
- (id)deleteFromInput:(unsigned long long *)a0;
- (void)checkAutocorrectionDictionaries;
- (int)inputMethodType;
- (BOOL)supportsPairedPunctutationInput;
- (id)formattedSearchString;
- (void)notifyUpdateCandidates:(id)a0 forOperation:(id)a1;
- (BOOL)updateCandidatesWithTIWordSearch:(id)a0 predictionEnabled:(BOOL)a1;
- (BOOL)isWubi:(id)a0;

@end
