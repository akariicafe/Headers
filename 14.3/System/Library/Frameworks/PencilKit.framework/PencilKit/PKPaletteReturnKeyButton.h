@class PKPaletteReturnKeyButtonContentView;

@interface PKPaletteReturnKeyButton : PKPaletteButton {
    double _scalingFactor;
}

@property (retain, nonatomic) PKPaletteReturnKeyButtonContentView *contentView;
@property (nonatomic) long long returnKeyType;
@property (nonatomic) long long axis;

- (id)_textColor;
- (double)scalingFactor;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (BOOL)_useCompactLayout;
- (void)_updateUI;
- (void)setScalingFactor:(double)a0;
- (void)layoutSubviews;
- (void)_updateImageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setEnabled:(BOOL)a0;
- (struct CGSize { double x0; double x1; })_contentViewSize;
- (void)traitCollectionDidChange:(id)a0;
- (void)_updateLabelText;
- (void)setHighlighted:(BOOL)a0;
- (id)_backgroundColor;
- (void)_updateContentViewOrientation;
- (id)_returnKeyImage;
- (id)_returnKeyTintColor;
- (id)_regularLayoutBackgroundColor;
- (BOOL)_shouldUseBlueReturnKeyColor;
- (id)_returnKeyLabelText;
- (id)_returnKeyImageSymbolConfiguration;

@end
