@interface TIKeyboardHandwritingSpecialization : TIKeyboardFeatureSpecialization

- (id)keyboardBehaviors;
- (BOOL)canHandleKeyHitTest;
- (BOOL)shouldExtendPriorWord;
- (id)wordSeparator;
- (id)nonstopPunctuationCharacters;
- (id)replacementForDoubleSpace;
- (BOOL)supportsLearning;

@end
