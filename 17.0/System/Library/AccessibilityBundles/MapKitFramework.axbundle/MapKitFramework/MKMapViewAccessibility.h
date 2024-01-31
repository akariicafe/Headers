@interface MKMapViewAccessibility : __MKMapViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityElements;
- (BOOL)canBecomeFocused;
- (BOOL)accessibilityScroll:(long long)a0;
- (void)_didEndZoom;
- (void)_setCompassVisible:(BOOL)a0 animationAllowed:(BOOL)a1 force:(BOOL)a2;
- (long long)_accessibilitySortPriority;
- (id)_axMapsDelegate;

@end
