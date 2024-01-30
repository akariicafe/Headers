@interface UIKeyboardEmojiCollectionViewCellAccessibility : __UIKeyboardEmojiCollectionViewCellAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (BOOL)isAccessibilityElement;
- (long long)accessibilityContainerType;
- (void)accessibilityElementDidBecomeFocused;
- (void)prepareForReuse;
- (unsigned long long)accessibilityTraits;
- (void)setEmoji:(id)a0;
- (id)accessibilityLabel;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilityRowRange;
- (id)accessibilityHeaderElements;
- (BOOL)_accessibilityAllowsAlternativeCharacterActivation;
- (id)_accessibilityVariantKeys;
- (BOOL)_accessibilityHasVariantKeys;
- (BOOL)_accessibilityKeyboardKeyHasSignificantAlternateActions;
- (id)_axEmoji;
- (void)_accessibilitySetCachedVariantKeys:(id)a0;
- (id)_accessibilityCachedVariantKeys;

@end
