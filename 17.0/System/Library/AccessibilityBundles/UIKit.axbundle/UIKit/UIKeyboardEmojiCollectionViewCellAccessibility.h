@interface UIKeyboardEmojiCollectionViewCellAccessibility : __UIKeyboardEmojiCollectionViewCellAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (void)prepareForReuse;
- (long long)accessibilityContainerType;
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
