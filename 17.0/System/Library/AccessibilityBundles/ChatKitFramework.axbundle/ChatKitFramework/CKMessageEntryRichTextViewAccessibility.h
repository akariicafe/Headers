@interface CKMessageEntryRichTextViewAccessibility : __CKMessageEntryRichTextViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (void)setAttributedText:(id)a0;
- (id)accessibilityIdentifier;
- (BOOL)isAccessibilityElement;
- (void)paste:(id)a0;
- (BOOL)accessibilityActivate;
- (id)accessibilityCustomRotors;
- (id)accessibilityPath;
- (BOOL)_accessibilitySupportsActivateAction;
- (void)_axSetConfirmedMentionElements:(id)a0;
- (id)_axMentionRotor;
- (void)_accessibilityUpdateMentionsIfNeeded;
- (id)_axConfirmedMentionElements;
- (id)_axMentionElements;
- (id)_axPossibleMentionElements;
- (void)_axSetPossibleMentionElements:(id)a0;
- (void)_setAXMentionRotor:(id)a0;

@end
