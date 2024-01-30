@interface TIKeyboardInputManager_zh_hans_Pinyin : TIKeyboardInputManagerPinyin

- (BOOL)usesContinuousPath;
- (void *)initImplementation;
- (id)keyEventMap;
- (id)locale;
- (int)inputMethodType;
- (BOOL)usesComposingInput;
- (id)phoneticSortingMethod;

@end
