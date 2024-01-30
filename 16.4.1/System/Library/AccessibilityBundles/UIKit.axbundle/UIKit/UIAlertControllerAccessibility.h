@interface UIAlertControllerAccessibility : __UIAlertControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)viewDidAppear:(BOOL)a0;
- (BOOL)_accessibilityShouldPostScreenChangedOnPresentation;

@end
