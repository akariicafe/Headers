@interface PUTiltWheelControlAccessibility : __PUTiltWheelControlAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (BOOL)isAccessibilityElement;
- (BOOL)accessibilityScroll:(long long)a0;
- (id)accessibilityValue;
- (double)_axDegreesToRadians:(double)a0;
- (double)_axRadiansToDegrees:(double)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_transformForTiltAngle:(double)a0;

@end
