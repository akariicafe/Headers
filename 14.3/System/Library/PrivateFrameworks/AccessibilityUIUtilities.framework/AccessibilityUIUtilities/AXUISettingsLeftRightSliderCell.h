@class UILabel;

@interface AXUISettingsLeftRightSliderCell : PSSliderTableCell {
    UILabel *_leftLabel;
    UILabel *_rightLabel;
}

- (id)newControl;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void).cxx_destruct;
- (id)labelColor;
- (void)setAccessibilityLabel:(id)a0;
- (BOOL)_accessibilityIgnoreInternalLabels;

@end
