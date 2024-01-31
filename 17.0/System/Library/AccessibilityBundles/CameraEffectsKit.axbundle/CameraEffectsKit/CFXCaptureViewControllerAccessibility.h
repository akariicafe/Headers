@interface CFXCaptureViewControllerAccessibility : __CFXCaptureViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)viewDidLoad;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)CFX_addEffect:(id)a0 allowImmediateTextEditing:(BOOL)a1;
- (void)effectEditorView:(id)a0 didRemoveEffect:(id)a1;
- (void)fullScreenTextEditViewController:(id)a0 didFinishEditingByRemovingEffect:(id)a1;
- (id)_axEffectToElement;
- (BOOL)_axFaceTimeLocalViewExpanded;
- (BOOL)_axIsFaceTime;
- (void)_axRemoveEffectFromView:(id)a0;
- (void)_axSetEffectToElement:(id)a0;

@end
