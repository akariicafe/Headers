@interface TIKeyboardInputManager_zh_hant_Pinyin : TIKeyboardInputManagerPinyin

- (BOOL)usesContinuousPath;
- (void *)initImplementation;
- (id)keyEventMap;
- (id)locale;
- (int)inputMethodType;
- (BOOL)usesComposingInput;
- (id)phoneticSortingMethod;

@end
