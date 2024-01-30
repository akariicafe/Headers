@interface AXUISettingsZoomLabeledSliderCell : AXUISettingsLabeledSliderCell

- (id)accessibilityLabel;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (double)maximumValue;
- (double)minimumValue;
- (double)initialValue;
- (void)_updateRightLabelWithValue:(double)a0;
- (void)handleSliderBeingDragged:(id)a0;
- (void)handleSliderDidFinishDrag:(id)a0;

@end
