@interface SKUICarouselPageSectionAccessibility : __SKUICarouselPageSectionAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (BOOL)_accessibilityDescendantElementAtIndexPathIsValid:(id)a0;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_fireCycleTimer;
- (void)willAppearInContext:(id)a0;
- (void)willTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)_accessibilityUpdateValidIndices;

@end
