@interface UISheetPresentationControllerAccessibility : __UISheetPresentationControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)_containerViewLayoutSubviews;
- (void)_accessibilityLoadAccessibilityInformation;
- (BOOL)_accessibilityExpandSheet;
- (BOOL)_accessibilityIsInverted;
- (BOOL)_accessibilityCanExpandSheet;
- (BOOL)_accessibilityCanCollapseSheet;
- (BOOL)_accessibilityCollapseSheet;
- (BOOL)_accessibilityPresentationControllerModalizes;
- (void)_axMarkupGrabbers;
- (void)_axMarkupGrabber:(id)a0;
- (long long)_axCurrentGrabberAction;
- (void)_accessibilityChangeSize:(BOOL)a0;

@end
