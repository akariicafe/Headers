@interface SBUICallToActionLabelAccessibility : __SBUICallToActionLabelAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (unsigned long long)accessibilityTraits;
- (id)accessibilityAttributedLabel;
- (BOOL)isAccessibilityElement;
- (BOOL)accessibilityActivate;
- (BOOL)_accessibilitySupportsActivateAction;
- (BOOL)_accessibilityScannerShouldUseActivateInPointMode;
- (void)_accessibilityHandlePreboardUnlock;
- (void)_accessibilityTryUnlockForControllerClassName:(id)a0;

@end
