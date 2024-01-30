@interface AXPUAdjustmentSlider : UIAccessibilityElement

- (unsigned long long)accessibilityTraits;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (BOOL)accessibilityActivate;
- (id)accessibilityHint;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (id)accessibilityValue;
- (id)initWithAccessibilityContainer:(id)a0;
- (id)accessibilityLabel;
- (id)_accessibilityUserTestingElementBaseType;
- (BOOL)_accessibilityOverridesInstructionsHint;
- (void)_axAdjustValue:(BOOL)a0;
- (id)_axContainerCollectionView;
- (void)_setAXPreviousSelectedIndexPathSection:(long long)a0;
- (id)_axContainingSelectedIndexPath;
- (id)_axDataSource;
- (id)_axContainerViewController;
- (id)_axAdjustmentInfo;
- (id)_axSelectedAdjustmentCell;
- (long long)_axPreviousSelectedIndexPathSection;

@end
