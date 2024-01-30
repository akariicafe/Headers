@interface PUPhotosGridViewControllerAccessibility : __PUPhotosGridViewControllerAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void)_configureAddPlaceholderCell:(id)a0 animated:(BOOL)a1;
- (void)updateNavigationBarAnimated:(BOOL)a0;
- (BOOL)_axShouldMoveFocusToNavigationButton;
- (void)_axSetShouldMoveFocusToNavigationButton:(BOOL)a0;

@end
