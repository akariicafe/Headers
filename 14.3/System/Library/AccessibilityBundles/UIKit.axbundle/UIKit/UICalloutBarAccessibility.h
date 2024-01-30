@interface UICalloutBarAccessibility : __UICalloutBarAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)fade;
- (void)appear;
- (void)show;
- (BOOL)shouldGroupAccessibilityChildren;
- (void)buttonPressed:(id)a0;
- (BOOL)_updateVisibleItemsAnimated:(BOOL)a0;
- (void)updateAvailableButtons;
- (void)hide;
- (void)_axMoveToElement:(id)a0;
- (void)_axMoveToLastAccessibleSubviewAfterAnimation:(BOOL)a0;
- (void)_axCalloutBarDidAppearWithAnimation:(BOOL)a0;

@end
