@interface SBFLockScreenDateViewAccessibility : __SBFLockScreenDateViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)_updateLabels;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)accessibilityElements;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_accessibilityUserTestingChildren;
- (void)layoutSubviews;
- (BOOL)_accessibilityAllowOutOfBoundsHitTestAtPoint:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)_accessibilityLoadAccessibilityInformation;
- (BOOL)_accessibilityOverridesInvisibility;
- (BOOL)_accessibilityServesAsFirstElement;
- (long long)_accessibilitySortPriority;
- (BOOL)_accessibilityViewIsVisible;
- (BOOL)_accessibilityUseAccessibilityFrameForHittest;
- (id)_axElements:(BOOL)a0;
- (id)_axComplicationContainerViewController;
- (id)_axCustomSubtitleView;
- (id)_axInlineComplicationViewController;
- (BOOL)_axIsComplicationViewVisible;
- (BOOL)_axIsCustomSubtitleViewVisible;
- (BOOL)_axIsDateViewVisible;
- (BOOL)_axIsInlineWidgetVisible;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_axTimeLabelFrame;
- (id)_axWidgetFromController:(id)a0;

@end
