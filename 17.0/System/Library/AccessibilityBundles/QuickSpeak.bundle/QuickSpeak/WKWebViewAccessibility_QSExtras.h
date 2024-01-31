@interface WKWebViewAccessibility_QSExtras : __WKWebViewAccessibility_QSExtras_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

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
