@interface TIKeyboardInputManager_th : TIKeyboardInputManager

- (id)keyboardBehaviors;
- (BOOL)shouldExtendPriorWord;
- (void)loadDictionaries;
- (void)candidateRejected:(id)a0;
- (id)wordSeparator;
- (void)textAccepted:(id)a0 fromPredictiveInputBar:(BOOL)a1 withInput:(id)a2;
- (BOOL)supportsLearning;
- (BOOL)deletesComposedTextByComposedCharacterSequence;
- (void *)initImplementation;
- (id)trimmedInputStem;
- (void)setWordBoundary;

@end
