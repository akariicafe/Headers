@interface _UISizeTrackingViewAccessibility : ___UISizeTrackingViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (BOOL)canBecomeFocused;
- (id)_viewToAddFocusLayer;
- (BOOL)_accessibilityHandlesRemoteFocusMovement;
- (int)_accessibilityRemotePid;
- (void)_accessibilitySetFocusOnElement:(BOOL)a0;
- (BOOL)_accessibilityInTopLevelTabLoop;

@end
