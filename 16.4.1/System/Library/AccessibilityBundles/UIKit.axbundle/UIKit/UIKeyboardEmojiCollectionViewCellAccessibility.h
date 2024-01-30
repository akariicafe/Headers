@interface UIKeyboardEmojiCollectionViewCellAccessibility : __UIKeyboardEmojiCollectionViewCellAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (id)accessibilityLabel;
- (long long)accessibilityContainerType;
- (void)prepareForReuse;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (void)accessibilityElementDidBecomeFocused;
- (id)accessibilityHeaderElements;
- (void)setEmoji:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilityRowRange;
- (BOOL)_accessibilityAllowsAlternativeCharacterActivation;
- (BOOL)_accessibilityHasVariantKeys;
- (BOOL)_accessibilityKeyboardKeyHasSignificantAlternateActions;
- (unsigned int)_accessibilityMediaAnalysisOptions;
- (id)_accessibilityVariantKeys;

@end
