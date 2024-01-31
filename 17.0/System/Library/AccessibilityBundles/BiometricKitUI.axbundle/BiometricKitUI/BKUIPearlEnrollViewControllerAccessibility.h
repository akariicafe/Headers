@interface BKUIPearlEnrollViewControllerAccessibility : __BKUIPearlEnrollViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)viewDidLoad;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_setState:(int)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)_setSubstate:(int)a0 animated:(BOOL)a1;
- (void)finalizeInstructionAnimation;
- (id)_accessibilityDetailLabel;
- (id)_accessibilityInstructionView;
- (id)_accessibilityInstructionLabel;
- (void)_axProvidePositioningInstruction;

@end
