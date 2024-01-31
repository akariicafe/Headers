@interface CKTranscriptCollectionViewAccessibility : __CKTranscriptCollectionViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (BOOL)accessibilityElementsHidden;
- (BOOL)accessibilityScroll:(long long)a0;
- (id)_accessibilityElementToFocusForAppearanceScreenChange;
- (BOOL)_accessibilityOpaqueElementScrollsContentIntoView;
- (void)_accessibilityScrollOpaqueElementIntoView:(long long)a0 previousScroller:(id)a1;
- (BOOL)isAccessibilityOpaqueElementProvider;
- (void)_accessibilityEnsureViewsAroundAreLoaded;

@end
