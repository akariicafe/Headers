@interface UIFocusRingManagerAccessibility : __UIFocusRingManagerAccessibility_super

+ (void)moveRingToFocusItem:(id)a0 forClient:(id)a1;
+ (void)removeRingFromFocusItem:(id)a0 forClient:(id)a1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (Class)shapeLayerClassForItem:(id)a0 client:(id)a1;

- (BOOL)_focusItemWantsFocusRing:(id)a0 forClient:(id)a1;
- (id)_focusRingPathForItem:(id)a0 inView:(id)a1;

@end
