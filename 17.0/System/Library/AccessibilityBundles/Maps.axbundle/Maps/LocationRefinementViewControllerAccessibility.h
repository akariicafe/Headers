@interface LocationRefinementViewControllerAccessibility : __LocationRefinementViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)viewDidLoad;
- (void)mapView:(id)a0 regionDidChangeAnimated:(BOOL)a1;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_triggerCrossHairLocationDecode;
- (void)_axAnnotateSnapToUserLocationButton;

@end
