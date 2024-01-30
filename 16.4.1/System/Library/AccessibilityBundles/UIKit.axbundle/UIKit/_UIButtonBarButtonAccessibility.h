@interface _UIButtonBarButtonAccessibility : ___UIButtonBarButtonAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (id)accessibilityLabel;
- (id)accessibilityIdentifier;
- (BOOL)accessibilityElementsHidden;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (id)accessibilityPath;
- (BOOL)accessibilityRespondsToUserInteraction;
- (unsigned long long)_accessibilityAutomationType;
- (BOOL)_accessibilityElementHasImage;
- (id)_accessibilityNativeFocusPreferredElement;

@end
