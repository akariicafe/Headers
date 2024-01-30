@interface SKUIIndexBarControlAccessibility : __SKUIIndexBarControlAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (id)accessibilityLabel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)accessibilityFlowToElements;
- (void)_sendSelectionForTouch:(id)a0 withEvent:(id)a1;
- (void)_accessibilityBumpValue:(BOOL)a0;
- (BOOL)_accessibilityMoveToIndexPath:(id)a0;
- (long long)_accessibilityTableIndexAdjustment;

@end
