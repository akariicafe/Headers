@interface SUUIIndexBarControlAccessibility : __SUUIIndexBarControlAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (unsigned long long)accessibilityTraits;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (BOOL)isAccessibilityElement;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)accessibilityFlowToElements;
- (void)_sendSelectionForTouch:(id)a0 withEvent:(id)a1;
- (void)_accessibilityBumpValue:(BOOL)a0;
- (BOOL)_accessibilityMoveToIndexPath:(id)a0;
- (long long)_accessibilityTableIndexAdjustment;

@end
