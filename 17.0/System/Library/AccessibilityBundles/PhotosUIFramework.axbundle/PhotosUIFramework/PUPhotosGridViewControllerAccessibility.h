@interface PUPhotosGridViewControllerAccessibility : __PUPhotosGridViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void)updateNavigationBarAnimated:(BOOL)a0;
- (void)_configureAddPlaceholderCell:(id)a0 animated:(BOOL)a1;
- (void)_axSetShouldMoveFocusToNavigationButton:(BOOL)a0;
- (BOOL)_axShouldMoveFocusToNavigationButton;

@end
