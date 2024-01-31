@interface SKSceneAccessibility : __SKSceneAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (void)didMoveToView:(id)a0;
- (id)accessibilityContainer;
- (void)didChangeSize:(struct CGSize { double x0; double x1; })a0;
- (void)willMoveFromView:(id)a0;

@end
