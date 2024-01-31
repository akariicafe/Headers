@interface CKTranscriptBalloonCellAccessibility : __CKTranscriptBalloonCellAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (id)_accessibilityUserTestingChildren;
- (BOOL)isAccessibilityElement;
- (BOOL)accessibilityActivate;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)accessibilityCustomRotors;
- (BOOL)_accessibilitySupportsActivateAction;
- (void)updateCheckmarkImage;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)_accessibilityTextViewTextOperationResponder;

@end
