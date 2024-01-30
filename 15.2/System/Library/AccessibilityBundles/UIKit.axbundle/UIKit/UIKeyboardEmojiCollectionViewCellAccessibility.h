@interface UIKeyboardEmojiCollectionViewCellAccessibility : __UIKeyboardEmojiCollectionViewCellAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)accessibilityElementDidBecomeFocused;
- (unsigned long long)accessibilityTraits;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilityRowRange;
- (void)setEmoji:(id)a0;
- (BOOL)isAccessibilityElement;
- (id)accessibilityHeaderElements;
- (void)prepareForReuse;
- (id)accessibilityLabel;
- (long long)accessibilityContainerType;
- (unsigned int)_accessibilityMediaAnalysisOptions;
- (BOOL)_accessibilityAllowsAlternativeCharacterActivation;
- (id)_accessibilityVariantKeys;
- (BOOL)_accessibilityHasVariantKeys;
- (BOOL)_accessibilityKeyboardKeyHasSignificantAlternateActions;

@end
