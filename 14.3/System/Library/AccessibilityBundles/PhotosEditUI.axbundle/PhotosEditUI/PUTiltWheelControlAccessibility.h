@interface PUTiltWheelControlAccessibility : __PUTiltWheelControlAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (BOOL)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (BOOL)accessibilityScroll:(long long)a0;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (id)accessibilityValue;
- (double)_axRadiansToDegrees:(double)a0;
- (double)_axDegreesToRadians:(double)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_transformForTiltAngle:(double)a0;

@end
