@interface UICalloutBar_QSExtras : __UICalloutBar_QSExtras_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)fade;
- (void)buttonPressed:(id)a0;
- (void)updateAvailableButtons;
- (void)hide;
- (void)_accessibilityAddSpeakItemToExtras:(id)a0 selector:(SEL)a1;
- (BOOL)_axSystemButtonsContainsLanguageChoices:(id)a0;
- (void)_axHideSpeakButtonFromSystemButtons:(id)a0;

@end
