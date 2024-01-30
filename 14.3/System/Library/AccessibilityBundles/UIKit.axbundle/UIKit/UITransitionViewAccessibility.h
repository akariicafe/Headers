@interface UITransitionViewAccessibility : __UITransitionViewAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)_didCompleteTransition:(BOOL)a0;
- (id)_accessibilityHitTestingObscuredScreenAllowedViews;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)_accessibilityObscuredScreenAllowedViews;
- (BOOL)accessibilityViewIsModal;
- (BOOL)accessibilityPerformEscape;
- (void)_axSetPresentationController:(id)a0;
- (id)_accessibilityRetrieveDelegate;
- (id)_axPresentationController;
- (id)_accessibilityDimmingView;
- (id)_accessibilityPresentationController;
- (id)axAdditionalElements;

@end
