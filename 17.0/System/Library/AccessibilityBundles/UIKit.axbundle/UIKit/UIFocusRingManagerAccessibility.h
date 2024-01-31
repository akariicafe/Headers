@interface UIFocusRingManagerAccessibility : __UIFocusRingManagerAccessibility_super

+ (void)removeRingFromFocusItem:(id)a0 forClient:(id)a1;
+ (Class)safeCategoryBaseClass;
+ (Class)shapeLayerClassForItem:(id)a0 client:(id)a1;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;
+ (void)moveRingToFocusItem:(id)a0 forClient:(id)a1;

- (BOOL)_focusItemWantsFocusRing:(id)a0 forClient:(id)a1;
- (id)_focusRingPathForItem:(id)a0 inView:(id)a1;

@end
