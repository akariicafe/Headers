@interface MTAWorldClockMapViewAccessibility : __MTAWorldClockMapViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (id)accessibilityElements;
- (void)addCity:(id)a0;
- (long long)accessibilityContainerType;
- (void)removeCity:(id)a0;
- (BOOL)isAccessibilityElement;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)_accessibilityAnnounceSolarRegionChange:(struct CGPoint { double x0; double x1; })a0;
- (void)_accessibilityRemoveSolarTerminatorPath;

@end
