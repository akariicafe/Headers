@interface QLMediaItemViewControllerAccessibility : __QLMediaItemViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)_accessibilityLoadAccessibilityInformation;
- (void)setTimeLabelNeedsUpdate;
- (void)setUpTimeLabelIfNeeded;
- (void)_axApplyContentOffset:(id)a0 contentOffset:(struct CGPoint { double x0; double x1; })a1;
- (void)_axSetLabelForTimeLabel;
- (void)_axSetUpScrubberView;
- (void)_axUpdateAccessibleElements;

@end
