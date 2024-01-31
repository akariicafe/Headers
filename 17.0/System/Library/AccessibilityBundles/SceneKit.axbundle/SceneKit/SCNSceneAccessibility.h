@interface SCNSceneAccessibility : __SCNSceneAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;
+ (BOOL)_isSerializableAccessibilityElement;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (void)dealloc;
- (id)accessibilityElements;
- (id)accessibilityContainer;
- (BOOL)accessibilityContainerIsSet;

@end
