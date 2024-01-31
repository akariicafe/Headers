@interface CAMFlashButtonAccessibility : __CAMFlashButtonAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityIdentifier;
- (id)accessibilityHint;
- (BOOL)accessibilityActivate;
- (id)accessibilityValue;
- (BOOL)_accessibilitySupportsActivateAction;
- (void)startExpansionWithProposedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
