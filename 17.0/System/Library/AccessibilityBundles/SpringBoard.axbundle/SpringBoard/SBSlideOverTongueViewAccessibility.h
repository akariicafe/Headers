@interface SBSlideOverTongueViewAccessibility : __SBSlideOverTongueViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityCustomActions;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (id)accessibilityIdentification;
- (BOOL)accessibilityScroll:(long long)a0;
- (unsigned long long)_accessibilityState;
- (id)_accessibilityActionsForSlideOverApp;
- (id)_accessibilitySlideOverApplication;
- (BOOL)_axPerformGestureForAction:(id)a0;

@end
