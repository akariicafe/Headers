@interface UIKeyCommandDiscoverabilityHUDAccessibility : __UIKeyCommandDiscoverabilityHUDAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)handlePhysicalKeyboardEvent:(id)a0;
- (void)_applicationWillResignActive;
- (void)_presentHUDWithKeyCommands:(id)a0;
- (void)_dismissHUD;
- (BOOL)accessibilityPerformEscape;
- (void)_axSelectFirstHUDElement;

@end
