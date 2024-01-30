@interface TIKeyboardHandwritingSpecialization : TIKeyboardFeatureSpecialization

- (id)keyboardBehaviors;
- (BOOL)canHandleKeyHitTest;
- (id)wordSeparator;
- (id)replacementForDoubleSpace;
- (id)nonstopPunctuationCharacters;
- (BOOL)shouldExtendPriorWord;
- (BOOL)supportsLearning;

@end
