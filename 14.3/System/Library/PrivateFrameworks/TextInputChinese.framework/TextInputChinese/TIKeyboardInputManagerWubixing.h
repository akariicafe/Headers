@class TIKeyboardCandidate;

@interface TIKeyboardInputManagerWubixing : TIKeyboardInputManagerShapeBased <TIKeyboardInputManagerChineseCompletion>

@property (retain, nonatomic) TIKeyboardCandidate *autoConfirmationCandidate;

+ (Class)wordSearchClass;

- (id)keyboardBehaviors;
- (BOOL)supportsNumberKeySelection;
- (void).cxx_destruct;
- (BOOL)usesPunctuationKeysForRowNavigation;
- (unsigned int)inputIndex;
- (void)addInput:(id)a0 withContext:(id)a1;
- (id)sortingMethods;
- (int)inputMethodType;
- (void)notifyUpdateCandidates:(id)a0 forOperation:(id)a1;
- (void)updateMarkedText;
- (BOOL)isValidWubiInput:(id)a0;

@end
