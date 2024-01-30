@interface NSObject_QSExtras : __NSObject_QSExtras_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;

- (void)_accessibilitySpeak:(id)a0;
- (void)_accessibilityPauseSpeaking:(id)a0;
- (void)_accessibilitySpeakLanguageSelection:(id)a0;
- (void)_accessibilitySpeakWithLanguage:(id)a0;
- (void)_accessibilitySpeakSentence:(id)a0;
- (void)_accessibilitySpeakSpellOut:(id)a0;
- (id)_accessibilitySpeakSelectionTextInputResponder;
- (void)_accessibilityQuickSpeakTextRectsWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 string:(id)a1 highlightRects:(id)a2 sentenceRects:(id)a3 singleTextRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a4;
- (void)_accessibilityHandleFinishSpeaking;
- (void)_accessibilityCacheContentIfNecessary;
- (BOOL)_accessibilityShouldUpdateQuickSpeakContent;
- (BOOL)_accessibilitySystemShouldShowSpeakSpellOut;
- (BOOL)_accessibilitySystemShouldShowSpeakBubbleCommon;
- (BOOL)_accessibilitySystemShouldShowSpeakBubble;
- (BOOL)_accessibilityShouldShowSpeakBubble;
- (BOOL)_accessibilitySystemShouldShowSpeakSentence;
- (BOOL)_accessibilityShouldShowSpeakSpellOut;
- (BOOL)_accessibilityShouldShowSpeakLanguageBubble;
- (BOOL)_accessibilitySystemShouldShowSpeakLanguageBubble;
- (BOOL)_accessibilitySystemShouldShowPauseBubble;
- (BOOL)_accessibilityShouldShowPauseBubble;
- (BOOL)_accessibilityQScanPerformAction:(SEL)a0 withSender:(id)a1;
- (BOOL)_accessibilityQuickSpeakContentIsSpeakable;

@end
