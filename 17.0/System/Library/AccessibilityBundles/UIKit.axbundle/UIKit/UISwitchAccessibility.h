@interface UISwitchAccessibility : __UISwitchAccessibility_super

@property (nonatomic, setter=_accessibilitySetIsAccessibleViaTableViewCell:) BOOL _accessibilityIsAccessibleViaTableViewCell;

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (void)setEnabled:(BOOL)a0;
- (id)_viewToAddFocusLayer;
- (BOOL)isAccessibilityElement;
- (void)_keyboardActivate;
- (BOOL)accessibilityActivate;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)accessibilityPath;
- (id)accessibilityValue;
- (BOOL)_accessibilitySupportsActivateAction;
- (unsigned long long)_accessibilityAutomationType;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)_accessibilityIsMacVisualAppearance;
- (id)_accessibilityKeyCommands;
- (BOOL)_accessibilityUseAccessibilityFrameForHittest;
- (void)_fkaSwitchOff;
- (void)_fkaSwitchOn;

@end
