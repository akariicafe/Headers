@interface UITabBarCustomizeViewAccessibility : __UITabBarCustomizeViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (BOOL)accessibilityViewIsModal;
- (BOOL)isAccessibilityElement;
- (void)tabBarTouchesEnded:(id)a0 withEvent:(id)a1;
- (void)tabBarTouchesBegan:(id)a0 withEvent:(id)a1;
- (void)tabBarTouchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)_accessibilityObscuredScreenAllowedViews;

@end
