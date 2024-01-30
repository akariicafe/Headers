@class UILabel;

@interface DBSColorTemperatureSliderTableCell : PSSliderTableCell {
    UILabel *_coolerLabel;
    UILabel *_warmerLabel;
    double _horizontalMargin;
    double _verticalMargin;
}

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
