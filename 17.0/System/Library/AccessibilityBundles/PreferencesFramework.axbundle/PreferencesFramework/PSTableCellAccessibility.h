@interface PSTableCellAccessibility : __PSTableCellAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;
+ (void)_setAccessibilityData:(id)a0 onCell:(id)a1;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void)prepareForReuse;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void)accessibilityIncrement;
- (id)_accessibilityUserTestingChildren;
- (void)accessibilityDecrement;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (BOOL)accessibilityRespondsToUserInteraction;
- (id)accessibilityValue;
- (BOOL)_accessibilityElementServesAsHeadingLandmark;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)_accessibilityIsSpeakThisElement;
- (BOOL)_accessibilityLanguageOverriddesUser;
- (void)_accessibilityLoadAccessibilityInformation;
- (struct CGPoint { double x0; double x1; })_accessibilityMaxScrubberPosition;
- (struct CGPoint { double x0; double x1; })_accessibilityMinScrubberPosition;
- (void)_accessibilityLoadAccessibilityInformationWithSpecifier:(id)a0;

@end
