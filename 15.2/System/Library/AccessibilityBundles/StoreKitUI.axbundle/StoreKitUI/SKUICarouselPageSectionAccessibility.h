@interface SKUICarouselPageSectionAccessibility : __SKUICarouselPageSectionAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (BOOL)_accessibilityDescendantElementAtIndexPathIsValid:(id)a0;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)willAppearInContext:(id)a0;
- (void)willTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)_fireCycleTimer;
- (void)_accessibilityUpdateValidIndices;

@end
