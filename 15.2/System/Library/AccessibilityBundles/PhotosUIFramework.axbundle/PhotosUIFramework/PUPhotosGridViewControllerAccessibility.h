@interface PUPhotosGridViewControllerAccessibility : __PUPhotosGridViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void)updateNavigationBarAnimated:(BOOL)a0;
- (void)_configureAddPlaceholderCell:(id)a0 animated:(BOOL)a1;
- (BOOL)_axShouldMoveFocusToNavigationButton;
- (void)_axSetShouldMoveFocusToNavigationButton:(BOOL)a0;

@end
