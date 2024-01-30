@interface UIKeyboardEmojiCollectionViewAccessibility : __UIKeyboardEmojiCollectionViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (BOOL)_accessibilityHitTestShouldFallbackToNearestChild;
- (id)_accessibilityScrollStatus;
- (id)_accessibilityFirstOpaqueElement;
- (id)_accessibilitySortedElementsWithin;
- (BOOL)_accessibilityOpaqueElementScrollsContentIntoView;
- (double)_accessibilityMaxFuzzyHitTestDistance;

@end
