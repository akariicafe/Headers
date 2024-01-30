@interface MPVolumeSliderAccessibility : __MPVolumeSliderAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (id)accessibilityLabel;
- (void)_layoutVolumeWarningView;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
