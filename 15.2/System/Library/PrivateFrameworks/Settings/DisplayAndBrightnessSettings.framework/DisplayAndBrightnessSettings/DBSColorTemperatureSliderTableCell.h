@class UILabel;

@interface DBSColorTemperatureSliderTableCell : PSSliderTableCell {
    UILabel *_coolerLabel;
    UILabel *_warmerLabel;
    double _horizontalMargin;
    double _verticalMargin;
}

- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;

@end
