@interface CompassPageViewControllerAccessibility : __CompassPageViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)init;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_axAnnounceDegreesIfNeeded:(double)a0;
- (void)_updateDegreesLabel:(BOOL)a0;
- (void)setCrosshairLevelForData:(struct { double x0; double x1; double x2; })a0;

@end
