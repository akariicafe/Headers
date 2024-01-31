@interface AKOverlayViewAccessibility : __AKOverlayViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityElements;
- (id)_accessibilityCreateOverlayViewElement;
- (id)_axOverlayViewElement;
- (id)_axOverlayViewLayers;
- (void)_axSetOverlayViewElement:(id)a0;
- (void)_axSetOverlayViewLayers:(id)a0;
- (BOOL)_axShouldExposeDrawingElement;

@end
