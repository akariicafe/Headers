@interface WLLockScreenViewAccessibility : __WLLockScreenViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)willDisappear;
- (void)didAppear;
- (BOOL)accessibilityPerformEscape;
- (BOOL)accessibilityViewIsModal;

@end
