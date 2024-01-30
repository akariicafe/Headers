@interface UIKeyboardEmojiCollectionViewAccessibility : __UIKeyboardEmojiCollectionViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (id)_accessibilityFirstOpaqueElement;
- (BOOL)_accessibilityHitTestShouldFallbackToNearestChild;
- (BOOL)_accessibilityOpaqueElementScrollsContentIntoView;
- (id)_accessibilityScrollStatus;
- (id)_accessibilitySortedElementsWithin;
- (double)_accessibilityMaxFuzzyHitTestDistance;

@end
