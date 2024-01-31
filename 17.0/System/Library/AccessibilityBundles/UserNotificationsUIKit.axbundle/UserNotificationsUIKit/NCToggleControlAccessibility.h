@interface NCToggleControlAccessibility : __NCToggleControlAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (void)clickInteractionPresenterDidPresent:(id)a0;
- (void)clickInteractionPresenterDidDismiss:(id)a0;
- (id)accessibilityCustomActions;
- (BOOL)accessibilityActivate;
- (id)accessibilityValue;
- (BOOL)_axPerformPreviewInteractionAction;
- (void)_axSetPreviewInteractionAncestorsModal:(BOOL)a0;

@end
