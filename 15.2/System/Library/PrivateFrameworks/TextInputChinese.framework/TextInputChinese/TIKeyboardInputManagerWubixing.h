@class TIKeyboardCandidate;

@interface TIKeyboardInputManagerWubixing : TIKeyboardInputManagerShapeBased <TIKeyboardInputManagerChineseCompletion>

@property (retain, nonatomic) TIKeyboardCandidate *autoConfirmationCandidate;

+ (Class)wordSearchClass;

- (BOOL)supportsNumberKeySelection;
- (id)keyboardBehaviors;
- (BOOL)acceptAutocorrectionCommitsInline;
- (BOOL)usesPunctuationKeysForRowNavigation;
- (void).cxx_destruct;
- (unsigned int)inputIndex;
- (unsigned long long)initialSelectedIndex;
- (void)addInput:(id)a0 withContext:(id)a1;
- (id)sortingMethods;
- (int)inputMethodType;
- (void)notifyUpdateCandidates:(id)a0 forOperation:(id)a1;
- (void)updateMarkedText;
- (BOOL)isValidWubiInput:(id)a0;

@end
