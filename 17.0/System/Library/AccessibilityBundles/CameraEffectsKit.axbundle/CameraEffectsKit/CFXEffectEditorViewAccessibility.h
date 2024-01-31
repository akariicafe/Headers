@interface CFXEffectEditorViewAccessibility : __CFXEffectEditorViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)viewDidLoad;
- (BOOL)accessibilityPerformEscape;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)CFX_beginTextEditing;
- (void)CFX_endTextEditing:(BOOL)a0;
- (void)CFX_removeEffect;
- (id)_axParentElements;
- (id)_axParentView;
- (void)_axSetParentElements:(id)a0;
- (void)_axSetParentView:(id)a0;

@end
