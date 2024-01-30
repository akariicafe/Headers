@interface UICalloutBar_QSExtras : __UICalloutBar_QSExtras_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)fade;
- (void)updateAvailableButtons;
- (void)hide;
- (void)buttonPressed:(id)a0;
- (void)_accessibilityAddSpeakItemToExtras:(id)a0 selector:(SEL)a1;
- (BOOL)_axSystemButtonsContainsLanguageChoices:(id)a0;
- (void)_axHideSpeakButtonFromSystemButtons:(id)a0;

@end
