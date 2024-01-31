@interface InCallControlsParticipantCellAccessibility : __InCallControlsParticipantCellAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)accessibilityCustomActions;
- (BOOL)isAccessibilityElement;
- (void)_accessibilityLoadAccessibilityInformation;
- (BOOL)_accessibilityActivateKickMemberButton;
- (BOOL)_accessibilityActivateLmiRejectButton;
- (BOOL)_accessibilityActivateActionButton;
- (BOOL)_accessibilityActivateLmiApproveButton;

@end
