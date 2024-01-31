@interface NSObject_QSExtras : __NSObject_QSExtras_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;

- (void)_accessibilityPauseSpeaking:(id)a0;
- (void)_accessibilitySpeak:(id)a0;
- (void)_accessibilitySpeakLanguageSelection:(id)a0;
- (BOOL)_accessibilityIsTextInteraction;
- (BOOL)_accessibilityIsTextInput;
- (void)_accessibilityCacheContentIfNecessary;
- (void)_accessibilityHandleFinishSpeaking;
- (BOOL)_accessibilityQScanPerformAction:(SEL)a0 withSender:(id)a1;
- (BOOL)_accessibilityQuickSpeakContentIsSpeakable;
- (void)_accessibilityQuickSpeakTextRectsWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 string:(id)a1 highlightRects:(id)a2 sentenceRects:(id)a3 singleTextRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a4;
- (BOOL)_accessibilityShouldShowPauseBubble;
- (BOOL)_accessibilityShouldShowSpeakBubble;
- (BOOL)_accessibilityShouldShowSpeakLanguageBubble;
- (BOOL)_accessibilityShouldShowSpeakSpellOut;
- (BOOL)_accessibilityShouldUpdateQuickSpeakContent;
- (id)_accessibilitySpeakSelectionTextInputResponder;
- (void)_accessibilitySpeakSentence:(id)a0;
- (void)_accessibilitySpeakSpellOut:(id)a0;
- (BOOL)_accessibilitySystemShouldShowPauseBubble;
- (BOOL)_accessibilitySystemShouldShowSpeakBubble;
- (BOOL)_accessibilitySystemShouldShowSpeakBubbleCommon;
- (BOOL)_accessibilitySystemShouldShowSpeakLanguageBubble;
- (BOOL)_accessibilitySystemShouldShowSpeakSentence;
- (BOOL)_accessibilitySystemShouldShowSpeakSpellOut;

@end
