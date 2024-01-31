@interface PBEffectsViewAccessibility : __PBEffectsViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (void)dealloc;
- (id)accessibilityElements;
- (BOOL)isAccessibilityElement;
- (void)_accessibilityLoadAccessibilityInformation;
- (BOOL)_accessibilityShouldHitTestLayers;
- (void)_setUpEffectLayers;
- (void)toggleEffectsMode:(id)a0;

@end
