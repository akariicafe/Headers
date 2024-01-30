@interface _UIButtonBarButtonAccessibility : ___UIButtonBarButtonAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (id)accessibilityIdentifier;
- (BOOL)accessibilityRespondsToUserInteraction;
- (unsigned long long)accessibilityTraits;
- (unsigned long long)_accessibilityAutomationType;
- (id)accessibilityPath;
- (BOOL)isAccessibilityElement;
- (BOOL)accessibilityElementsHidden;
- (id)accessibilityLabel;
- (BOOL)_accessibilityElementHasImage;
- (id)_accessibilityNativeFocusPreferredElement;

@end
