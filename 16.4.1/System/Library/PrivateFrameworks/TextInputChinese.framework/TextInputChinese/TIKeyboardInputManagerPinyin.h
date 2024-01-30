@interface TIKeyboardInputManagerPinyin : TIKeyboardInputManagerChinesePhonetic

- (BOOL)usesAutoDeleteWord;
- (BOOL)usesPunctuationKeysForRowNavigation;
- (id)keyboardBehaviors;
- (BOOL)acceptAutocorrectionCommitsInline;
- (unsigned long long)initialSelectedIndex;
- (void)adjustPhraseBoundaryInForwardDirection:(BOOL)a0 granularity:(int)a1;
- (id)validCharacterSetForAutocorrection;
- (BOOL)supportsPairedPunctutationInput;
- (BOOL)isSpecialInput:(id)a0;
- (BOOL)currentShuangpinTypeUsesSemicolon;
- (BOOL)isShuangpinSemicolon:(id)a0;
- (id)remapInput:(id)a0 isFacemarkInput:(BOOL *)a1;
- (BOOL)shouldSearchCompletionForSubstrings;
- (BOOL)usesGeometryModelData;

@end
