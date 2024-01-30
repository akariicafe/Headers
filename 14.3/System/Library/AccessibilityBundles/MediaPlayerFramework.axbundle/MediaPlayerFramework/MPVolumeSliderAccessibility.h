@interface MPVolumeSliderAccessibility : __MPVolumeSliderAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (id)accessibilityLabel;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)_layoutVolumeWarningView;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;

@end
