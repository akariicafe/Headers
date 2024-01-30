@class TIKeyboardCandidate;

@interface TIKeyboardInputManagerWubixing : TIKeyboardInputManagerShapeBased <TIKeyboardInputManagerChineseCompletion>

@property (retain, nonatomic) TIKeyboardCandidate *autoConfirmationCandidate;

+ (Class)wordSearchClass;

- (unsigned int)inputIndex;
- (BOOL)supportsNumberKeySelection;
- (BOOL)usesPunctuationKeysForRowNavigation;
- (id)keyboardBehaviors;
- (BOOL)acceptAutocorrectionCommitsInline;
- (void).cxx_destruct;
- (unsigned long long)initialSelectedIndex;
- (int)inputMethodType;
- (void)addInput:(id)a0 withContext:(id)a1;
- (id)sortingMethods;
- (BOOL)isValidWubiInput:(id)a0;
- (void)notifyUpdateCandidates:(id)a0 forOperation:(id)a1;
- (void)updateMarkedText;

@end
