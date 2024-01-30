@interface UISheetPresentationControllerAccessibility : __UISheetPresentationControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)_containerViewLayoutSubviews;
- (void)_accessibilityLoadAccessibilityInformation;
- (BOOL)_accessibilityCanCollapseSheet;
- (BOOL)_accessibilityCanExpandSheet;
- (void)_accessibilityChangeSize:(BOOL)a0;
- (BOOL)_accessibilityCollapseSheet;
- (BOOL)_accessibilityExpandSheet;
- (BOOL)_accessibilityIsInverted;
- (BOOL)_accessibilityPresentationControllerModalizes;
- (long long)_axCurrentGrabberAction;
- (void)_axMarkupGrabber:(id)a0;
- (void)_axMarkupGrabbers;

@end
