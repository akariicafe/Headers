@interface TIKeyboardInputManager_zh_Base : TIKeyboardInputManagerChinesePhonetic

- (BOOL)acceptInputString:(id)a0;
- (BOOL)supportsNumberKeySelection;
- (void *)initImplementation;
- (id)keyboardBehaviors;
- (id)inputsToReject;
- (id)keyEventMap;
- (int)inputMethodType;
- (BOOL)_shouldCommitInputDirectly:(id)a0;
- (id)phoneticSortingMethod;
- (BOOL)shouldSearchCompletionForSubstrings;

@end
