@interface TIKeyboardInputManager_zh_Base : TIKeyboardInputManagerChinesePhonetic

- (BOOL)acceptInputString:(id)a0;
- (BOOL)supportsNumberKeySelection;
- (id)keyboardBehaviors;
- (id)inputsToReject;
- (id)keyEventMap;
- (void *)initImplementation;
- (int)inputMethodType;
- (BOOL)shouldSearchCompletionForSubstrings;
- (BOOL)_shouldCommitInputDirectly:(id)a0;
- (id)phoneticSortingMethod;

@end
