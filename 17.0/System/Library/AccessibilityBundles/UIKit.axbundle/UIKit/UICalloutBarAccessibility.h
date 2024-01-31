@interface UICalloutBarAccessibility : __UICalloutBarAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)show;
- (void)hide;
- (BOOL)_updateVisibleItemsAnimated:(BOOL)a0;
- (void)appear;
- (void)buttonPressed:(id)a0;
- (void)fade;
- (BOOL)shouldGroupAccessibilityChildren;
- (void)updateAvailableButtons;
- (void)_axCalloutBarDidAppearWithAnimation:(BOOL)a0;

@end
