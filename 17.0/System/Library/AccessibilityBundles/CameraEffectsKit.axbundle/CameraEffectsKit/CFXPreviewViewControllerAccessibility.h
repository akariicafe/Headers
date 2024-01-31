@interface CFXPreviewViewControllerAccessibility : __CFXPreviewViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)viewDidLayoutSubviews;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)CFX_addEffect:(id)a0;
- (void)effectEditorView:(id)a0 didRemoveEffect:(id)a1;
- (void)fullScreenTextEditViewController:(id)a0 didFinishEditingByRemovingEffect:(id)a1;
- (id)_axEffectToElement;
- (void)_axRemoveEffectFromView:(id)a0;
- (void)_axSetEffectToElement:(id)a0;

@end
