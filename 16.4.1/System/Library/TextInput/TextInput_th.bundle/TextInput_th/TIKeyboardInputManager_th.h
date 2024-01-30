@interface TIKeyboardInputManager_th : TIKeyboardInputManager

- (void *)initImplementation;
- (void)loadDictionaries;
- (id)keyboardBehaviors;
- (id)wordSeparator;
- (BOOL)shouldExtendPriorWord;
- (void)candidateRejected:(id)a0;
- (BOOL)deletesComposedTextByComposedCharacterSequence;
- (BOOL)supportsLearning;
- (void)textAccepted:(id)a0 fromPredictiveInputBar:(BOOL)a1 withInput:(id)a2;
- (id)trimmedInputStem;
- (void)setWordBoundary;

@end
