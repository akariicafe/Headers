@class UISlider, UILabel, UIView;

@interface AXUISettingsLabeledSliderCell : PSTableCell

@property (retain, nonatomic) UIView *leftView;
@property (retain, nonatomic) UISlider *sliderView;
@property (retain, nonatomic) UIView *rightView;
@property (retain, nonatomic) UILabel *rightLabel;
@property (nonatomic) BOOL segmented;

- (id)labelTextColor;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)slider;
- (void)setLabelText:(id)a0;
- (unsigned long long)accessibilityTraits;
- (void).cxx_destruct;
- (BOOL)isAccessibilityElement;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (void)traitCollectionDidChange:(id)a0;
- (id)accessibilityValue;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (double)initialValue;
- (double)minimumValue;
- (id)accessibilityLabel;
- (double)maximumValue;
- (void)handleSliderBeingDragged:(id)a0;
- (void)handleSliderDidFinishDrag:(id)a0;
- (void)_updateRightLabelFont;

@end
