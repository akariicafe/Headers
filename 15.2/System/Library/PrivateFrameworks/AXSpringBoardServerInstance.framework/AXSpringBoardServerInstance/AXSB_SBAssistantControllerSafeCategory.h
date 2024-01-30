@interface AXSB_SBAssistantControllerSafeCategory : __AXSB_SBAssistantControllerSafeCategory_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)dismissAssistantViewIfNecessaryWithDismissalOptions:(id)a0;
- (void)_axCancelDismissSiriForAssistiveTouch;
- (void)_axDismissSiriForAssistiveTouch;
- (void)_axSetSiriDismissalIsForAssistiveTouch:(BOOL)a0;
- (id)_axSiriDismissalOptions;
- (BOOL)_axSiriDismissalIsForAssistiveTouch;
- (void)_axSetSiriDismissalOptions:(id)a0;
- (void)_axScheduleDismissSiriForAssistiveTouch;

@end
