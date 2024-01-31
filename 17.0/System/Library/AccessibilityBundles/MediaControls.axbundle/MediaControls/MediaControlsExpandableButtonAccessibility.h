@interface MediaControlsExpandableButtonAccessibility : __MediaControlsExpandableButtonAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (void)setExpanded:(BOOL)a0;
- (BOOL)isAccessibilityElement;
- (void)setSelectedOptionIndex:(long long)a0;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (BOOL)accessibilityRespondsToUserInteraction;
- (id)accessibilityValue;

@end
