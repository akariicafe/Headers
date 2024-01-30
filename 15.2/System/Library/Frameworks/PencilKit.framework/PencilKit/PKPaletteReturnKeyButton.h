@class PKPaletteReturnKeyButtonContentView, PKTextInputLanguageSelectionToken;

@interface PKPaletteReturnKeyButton : PKPaletteButton {
    double _scalingFactor;
}

@property (retain, nonatomic) PKPaletteReturnKeyButtonContentView *contentView;
@property (retain, nonatomic) PKTextInputLanguageSelectionToken *observerToken;
@property (nonatomic) long long returnKeyType;
@property (nonatomic) long long axis;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)_textColor;
- (void)setEnabled:(BOOL)a0;
- (void)setHighlighted:(BOOL)a0;
- (void)_updateUI;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)scalingFactor;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)_updateLabelText;
- (void)dealloc;
- (id)_backgroundColor;
- (void)_updateImageView;
- (void)setScalingFactor:(double)a0;
- (BOOL)_useCompactLayout;
- (struct CGSize { double x0; double x1; })_contentViewSize;
- (void)_updateContentViewOrientation;
- (id)_returnKeyImage;
- (id)_returnKeyTintColor;
- (id)_regularLayoutBackgroundColor;
- (BOOL)_shouldUseBlueReturnKeyColor;
- (id)_returnKeyLabelText;
- (id)_returnKeyImageSymbolConfiguration;

@end
