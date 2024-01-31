@interface SFDialogControllerAccessibility : __SFDialogControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (long long)_presentDialog:(id)a0 forWebProcessID:(int)a1 withAdditionalAnimations:(id /* block */)a2;
- (void)_dismissDialogWithAdditionalAnimations:(id /* block */)a0;

@end
