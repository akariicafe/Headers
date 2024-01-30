@interface UITransitionViewAccessibility : __UITransitionViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)_didCompleteTransition:(BOOL)a0;
- (BOOL)accessibilityPerformEscape;
- (BOOL)accessibilityViewIsModal;
- (id)_accessibilityHitTestingObscuredScreenAllowedViews;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)_accessibilityObscuredScreenAllowedViews;
- (id)axAdditionalElements;

@end
