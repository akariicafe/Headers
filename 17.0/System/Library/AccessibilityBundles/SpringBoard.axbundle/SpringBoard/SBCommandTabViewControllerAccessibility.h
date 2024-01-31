@interface SBCommandTabViewControllerAccessibility : __SBCommandTabViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)viewDidLoad;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_moveSelectionSquareToIconAtIndex:(unsigned long long)a0;
- (void)accessibilityAnnounceSelectedIcon;

@end
