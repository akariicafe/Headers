@interface UISheetPresentationControllerAccessibility : __UISheetPresentationControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)_containerViewLayoutSubviews;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_accessibilityChangeSize:(BOOL)a0;
- (BOOL)_accessibilityCollapseSheet;
- (BOOL)_accessibilityCanCollapseSheet;
- (BOOL)_accessibilityCanExpandSheet;
- (BOOL)_accessibilityExpandSheet;
- (BOOL)_accessibilityIsInverted;
- (BOOL)_accessibilityPresentationControllerModalizes;
- (long long)_axCurrentGrabberAction;
- (void)_axMarkupGrabber:(id)a0;
- (void)_axMarkupGrabbers;

@end
