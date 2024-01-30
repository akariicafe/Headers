@interface QLMediaItemViewControllerAccessibility : __QLMediaItemViewControllerAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)_accessibilityLoadAccessibilityInformation;
- (void)setTimeLabelNeedsUpdate;
- (void)setUpTimeLabelIfNeeded;
- (void)_axSetUpScrubberView;
- (void)_axApplyContentOffset:(id)a0 contentOffset:(struct CGPoint { double x0; double x1; })a1;
- (void)_axUpdateAccessibleElements;
- (void)_axSetLabelForTimeLabel;

@end
