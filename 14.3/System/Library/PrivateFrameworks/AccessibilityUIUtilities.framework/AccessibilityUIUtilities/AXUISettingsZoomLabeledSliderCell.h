@interface AXUISettingsZoomLabeledSliderCell : AXUISettingsLabeledSliderCell

- (double)maximumValue;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (double)initialValue;
- (double)minimumValue;
- (void)_updateRightLabelWithValue:(double)a0;
- (void)handleSliderBeingDragged:(id)a0;
- (void)handleSliderDidFinishDrag:(id)a0;
- (id)accessibilityLabel;

@end
