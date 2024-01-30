@interface SKUIIndexBarControlAccessibility : __SKUIIndexBarControlAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (BOOL)isAccessibilityElement;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)accessibilityFlowToElements;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (void)_sendSelectionForTouch:(id)a0 withEvent:(id)a1;
- (void)_accessibilityBumpValue:(BOOL)a0;
- (BOOL)_accessibilityMoveToIndexPath:(id)a0;
- (long long)_accessibilityTableIndexAdjustment;

@end
