@interface WKContentView_QSExtras : __WKContentView_QSExtras_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)_selectionChanged;
- (void)accessibilitySpeakSelectionSetContent:(id)a0;
- (void)_accessibilityDidGetSelectionRects:(id)a0 withGranularity:(long long)a1 atOffset:(long long)a2;
- (id)_accessibilityQuickSpeakContent;
- (id)_accessibilitySpeakSelectionTextInputResponder;
- (id)_accessibilityRetrieveRectsForGuanularity:(long long)a0 atSelectionOffset:(long long)a1 wordText:(id)a2;
- (BOOL)_accessibilityShouldUpdateQuickSpeakContent;
- (BOOL)_accessibilitySystemShouldShowSpeakBubble;
- (BOOL)_accessibilityShouldShowSpeakBubble;
- (BOOL)_accessibilityShouldShowSpeakSpellOut;
- (BOOL)_accessibilityShouldShowSpeakLanguageBubble;
- (void)_axWaitForSpeakSelectionContentResults;
- (unsigned long long)_axSelectedTextLength;
- (void)_axWaitForSpeakSelectionRectResultsForGuanularity:(long long)a0 atSelectionOffset:(long long)a1 wordText:(id)a2;
- (id)accessibilityQSSentenceRects;
- (id)accessibilityQSWordRects;
- (void)accessibilitySetQSWordRects:(id)a0;
- (id)_webTextRectsFromWKTextRects:(id)a0;
- (void)accessibilitySetQSSentenceRects:(id)a0;

@end
