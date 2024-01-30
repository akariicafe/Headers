@interface UISwitchAccessibility : __UISwitchAccessibility_super

@property (nonatomic, setter=_accessibilitySetIsAccessibleViaTableViewCell:) BOOL _accessibilityIsAccessibleViaTableViewCell;

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)setEnabled:(BOOL)a0;
- (id)_viewToAddFocusLayer;
- (unsigned long long)accessibilityTraits;
- (unsigned long long)_accessibilityAutomationType;
- (BOOL)accessibilityActivate;
- (id)accessibilityPath;
- (void)_keyboardActivate;
- (BOOL)isAccessibilityElement;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)_accessibilitySupportsActivateAction;
- (id)_accessibilityKeyCommands;
- (void)_fkaSwitchOn;
- (void)_fkaSwitchOff;

@end
