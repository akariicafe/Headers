@interface FUPlaneTrackerAnnotationViewAccessibility : __FUPlaneTrackerAnnotationViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (void)setCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (id)accessibilityValue;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)_accessibilityGetGeocodingGroup;
- (id)_accessibilityNearbyLocationDescription;
- (id)_accessibilityGeocodingGroup;
- (void)_accessibilitySetGeocodingGroup:(id)a0;
- (void)_accessibilitySetNearbyLocationDescription:(id)a0;

@end
