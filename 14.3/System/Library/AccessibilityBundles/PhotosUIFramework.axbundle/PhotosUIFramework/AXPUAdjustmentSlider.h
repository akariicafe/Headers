@interface AXPUAdjustmentSlider : UIAccessibilityElement

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (id)initWithAccessibilityContainer:(id)a0;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (id)_accessibilityUserTestingElementBaseType;
- (BOOL)accessibilityActivate;
- (id)accessibilityHint;
- (id)accessibilityValue;
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
