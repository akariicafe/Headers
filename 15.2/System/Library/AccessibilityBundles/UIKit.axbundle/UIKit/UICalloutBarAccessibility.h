@interface UICalloutBarAccessibility : __UICalloutBarAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)fade;
- (void)appear;
- (BOOL)shouldGroupAccessibilityChildren;
- (BOOL)_updateVisibleItemsAnimated:(BOOL)a0;
- (void)updateAvailableButtons;
- (void)hide;
- (void)show;
- (void)buttonPressed:(id)a0;
- (void)_axCalloutBarDidAppearWithAnimation:(BOOL)a0;

@end
