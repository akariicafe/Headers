@interface UISwitchAccessibility : __UISwitchAccessibility_super

@property (nonatomic, setter=_accessibilitySetIsAccessibleViaTableViewCell:) BOOL _accessibilityIsAccessibleViaTableViewCell;

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (BOOL)isAccessibilityElement;
- (unsigned long long)_accessibilityAutomationType;
- (id)_accessibilityKeyCommands;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityPath;
- (id)accessibilityLabel;
- (id)_viewToAddFocusLayer;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (BOOL)_accessibilitySupportsActivateAction;
- (BOOL)accessibilityActivate;
- (void)_keyboardActivate;
- (id)accessibilityValue;
- (void)setEnabled:(BOOL)a0;
- (void)_fkaSwitchOn;
- (void)_fkaSwitchOff;

@end
