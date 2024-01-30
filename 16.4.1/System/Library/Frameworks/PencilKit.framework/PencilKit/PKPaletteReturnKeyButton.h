@class PKPaletteReturnKeyButtonContentView, PKTextInputLanguageSelectionToken;

@interface PKPaletteReturnKeyButton : PKPaletteButton {
    double _scalingFactor;
}

@property (retain, nonatomic) PKPaletteReturnKeyButtonContentView *contentView;
@property (retain, nonatomic) PKTextInputLanguageSelectionToken *observerToken;
@property (nonatomic) long long returnKeyType;
@property (nonatomic) long long axis;

- (id)_textColor;
- (void)_updateLabelText;
- (id)_backgroundColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (double)scalingFactor;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setEnabled:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_updateImageView;
- (void)_updateUI;
- (BOOL)_useCompactLayout;
- (void)setScalingFactor:(double)a0;
- (id)_returnKeyImage;
- (struct CGSize { double x0; double x1; })_contentViewSize;
- (id)_regularLayoutBackgroundColor;
- (id)_returnKeyImageSymbolConfiguration;
- (id)_returnKeyLabelText;
- (id)_returnKeyTintColor;
- (BOOL)_shouldUseBlueReturnKeyColor;
- (void)_updateContentViewOrientation;

@end
