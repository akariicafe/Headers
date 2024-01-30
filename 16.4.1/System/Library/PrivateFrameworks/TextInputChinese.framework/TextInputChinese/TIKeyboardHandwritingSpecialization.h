@interface TIKeyboardHandwritingSpecialization : TIKeyboardFeatureSpecialization

- (BOOL)canHandleKeyHitTest;
- (id)replacementForDoubleSpace;
- (id)keyboardBehaviors;
- (id)wordSeparator;
- (BOOL)shouldExtendPriorWord;
- (id)nonstopPunctuationCharacters;
- (BOOL)supportsLearning;

@end
