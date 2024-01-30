@interface TIKeyboardInputManager_zh_hans_Pinyin : TIKeyboardInputManager_zh_Pinyin

- (BOOL)usesContinuousPath;
- (id)locale;
- (id)keyEventMap;
- (BOOL)usesComposingInput;
- (void *)initImplementation;
- (int)inputMethodType;
- (id)phoneticSortingMethod;

@end
