@interface WKWebViewAccessibility_QSExtras : __WKWebViewAccessibility_QSExtras_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (id)_accessibilityQuickSpeakContent;
- (id)_axContentView;
- (BOOL)_accessibilityQScanPerformAction:(SEL)a0 withSender:(id)a1;
- (BOOL)_accessibilityShouldShowSpeakBubble;
- (BOOL)_accessibilityShouldShowSpeakLanguageBubble;
- (BOOL)_accessibilityShouldShowSpeakSpellOut;
- (BOOL)_accessibilityShouldUpdateQuickSpeakContent;
- (id)_accessibilitySpeakSelectionTextInputResponder;
- (BOOL)_accessibilitySystemShouldShowSpeakBubble;

@end
