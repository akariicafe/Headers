@interface UIKeyCommandDiscoverabilityHUDAccessibility : __UIKeyCommandDiscoverabilityHUDAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)_presentHUDWithKeyCommands:(id)a0;
- (BOOL)accessibilityPerformEscape;
- (void)_applicationWillResignActive;
- (void)handlePhysicalKeyboardEvent:(id)a0;
- (void)_dismissHUD;

@end
