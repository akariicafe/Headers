@interface WKContentView_QSExtras : __WKContentView_QSExtras_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)_selectionChanged;
- (void)_accessibilityDidGetSelectionRects:(id)a0 withGranularity:(long long)a1 atOffset:(long long)a2;
- (void)accessibilitySpeakSelectionSetContent:(id)a0;
- (id)_accessibilityQuickSpeakContent;
- (id)_accessibilityRetrieveRectsForGuanularity:(long long)a0 atSelectionOffset:(long long)a1 wordText:(id)a2;
- (BOOL)_accessibilityShouldShowSpeakBubble;
- (BOOL)_accessibilityShouldShowSpeakLanguageBubble;
- (BOOL)_accessibilityShouldShowSpeakSpellOut;
- (BOOL)_accessibilityShouldUpdateQuickSpeakContent;
- (id)_accessibilitySpeakSelectionTextInputResponder;
- (BOOL)_accessibilitySystemShouldShowSpeakBubble;
- (unsigned long long)_axSelectedTextLength;
- (void)_axWaitForSpeakSelectionContentResults;
- (void)_axWaitForSpeakSelectionRectResultsForGuanularity:(long long)a0 atSelectionOffset:(long long)a1 wordText:(id)a2;
- (id)_webTextRectsFromWKTextRects:(id)a0;
- (id)accessibilityQSSentenceRects;
- (id)accessibilityQSWordRects;
- (void)accessibilitySetQSSentenceRects:(id)a0;
- (void)accessibilitySetQSWordRects:(id)a0;

@end
