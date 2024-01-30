@interface QLMediaItemViewControllerAccessibility : __QLMediaItemViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)_accessibilityLoadAccessibilityInformation;
- (void)setTimeLabelNeedsUpdate;
- (void)setUpTimeLabelIfNeeded;
- (void)_axApplyContentOffset:(id)a0 contentOffset:(struct CGPoint { double x0; double x1; })a1;
- (void)_axSetLabelForTimeLabel;
- (void)_axSetUpScrubberView;
- (void)_axUpdateAccessibleElements;

@end
