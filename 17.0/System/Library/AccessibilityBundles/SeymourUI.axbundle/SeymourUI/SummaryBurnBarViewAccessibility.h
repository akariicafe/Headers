@interface SummaryBurnBarViewAccessibility : __SummaryBurnBarViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (BOOL)isAccessibilityElement;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)updateBurnBarAccessibility:(id)a0 personalScore:(float)a1 low:(float)a2 lowMiddle:(float)a3 highMiddle:(float)a4 high:(float)a5;
- (long long)_positionForPersonalScore:(float)a0 low:(float)a1 lowMiddle:(float)a2 highMiddle:(float)a3 high:(float)a4;

@end
