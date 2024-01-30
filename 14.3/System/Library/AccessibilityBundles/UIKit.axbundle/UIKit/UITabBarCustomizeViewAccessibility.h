@interface UITabBarCustomizeViewAccessibility : __UITabBarCustomizeViewAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (BOOL)isAccessibilityElement;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)_accessibilityObscuredScreenAllowedViews;
- (BOOL)accessibilityViewIsModal;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)tabBarTouchesEnded:(id)a0 withEvent:(id)a1;
- (void)tabBarTouchesBegan:(id)a0 withEvent:(id)a1;
- (void)tabBarTouchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
