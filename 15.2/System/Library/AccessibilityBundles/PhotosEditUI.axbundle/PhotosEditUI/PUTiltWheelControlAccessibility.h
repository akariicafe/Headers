@interface PUTiltWheelControlAccessibility : __PUTiltWheelControlAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (unsigned long long)accessibilityTraits;
- (BOOL)accessibilityScroll:(long long)a0;
- (BOOL)isAccessibilityElement;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (double)_axRadiansToDegrees:(double)a0;
- (double)_axDegreesToRadians:(double)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_transformForTiltAngle:(double)a0;

@end
