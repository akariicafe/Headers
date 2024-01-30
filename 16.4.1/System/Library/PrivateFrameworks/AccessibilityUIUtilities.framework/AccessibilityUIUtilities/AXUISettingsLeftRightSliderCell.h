@class UILabel;

@interface AXUISettingsLeftRightSliderCell : PSSliderTableCell {
    UILabel *_leftLabel;
    UILabel *_rightLabel;
    UILabel *_valueLabel;
}

@property (nonatomic) double displayValue;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void)setAccessibilityLabel:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)labelColor;
- (id)newControl;
- (void)updateValue;
- (BOOL)_accessibilityIgnoreInternalLabels;

@end
