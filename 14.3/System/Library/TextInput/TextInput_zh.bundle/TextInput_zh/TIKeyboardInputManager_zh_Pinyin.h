@interface TIKeyboardInputManager_zh_Pinyin : TIKeyboardInputManagerChinesePhonetic

- (id)keyboardBehaviors;
- (BOOL)usesAutoDeleteWord;
- (unsigned long long)initialSelectedIndex;
- (BOOL)usesPunctuationKeysForRowNavigation;
- (id)validCharacterSetForAutocorrection;
- (void)adjustPhraseBoundaryInForwardDirection:(BOOL)a0 granularity:(int)a1;
- (BOOL)shouldSearchCompletionForSubstrings;
- (BOOL)supportsPairedPunctutationInput;
- (BOOL)isSpecialInput:(id)a0;
- (id)remapInput:(id)a0 isFacemarkInput:(BOOL *)a1;
- (BOOL)usesGeometryModelData;
- (BOOL)currentShuangpinTypeUsesSemicolon;
- (BOOL)isShuangpinSemicolon:(id)a0;

@end
