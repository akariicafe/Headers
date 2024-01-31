@interface SessionHeartRateViewAccessibility : __SessionHeartRateViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)accessibilityDidUpdateHeartRate:(BOOL)a0 lastKnownHR:(id)a1;

@end
