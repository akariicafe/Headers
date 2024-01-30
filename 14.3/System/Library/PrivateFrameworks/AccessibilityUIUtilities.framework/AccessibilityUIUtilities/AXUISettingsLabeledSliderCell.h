@class UISlider, UILabel, UIView;

@interface AXUISettingsLabeledSliderCell : PSTableCell

@property (retain, nonatomic) UIView *leftView;
@property (retain, nonatomic) UISlider *sliderView;
@property (retain, nonatomic) UIView *rightView;
@property (retain, nonatomic) UILabel *rightLabel;
@property (nonatomic) BOOL segmented;

- (id)slider;
- (double)maximumValue;
- (BOOL)isAccessibilityElement;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (double)initialValue;
- (double)minimumValue;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (void)handleSliderBeingDragged:(id)a0;
- (void)handleSliderDidFinishDrag:(id)a0;
- (id)accessibilityLabel;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)labelTextColor;
- (void)setLabelText:(id)a0;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (void)_updateRightLabelFont;
- (id)accessibilityValue;
- (void)traitCollectionDidChange:(id)a0;

@end
