@interface PRInlineComplicationContainerViewControllerAccessibility : __PRInlineComplicationContainerViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)invalidate;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)setComplicationDescriptor:(id)a0;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)accessibilityRemoteSubstituteChildren:(id)a0;
- (void)_accessibilitySetRemoteElement:(id)a0;
- (id)_accessibilityGetRemoteElement;
- (void)_axResetRemoteView;
- (void)_axSetRemoteView;
- (void)_axSetWidgetView;

@end
