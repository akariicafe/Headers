@class UIColor, CCUIRoundButton, NSString, UIImage, UILabel, MTVisualStylingProvider, CCUICAPackageDescription;

@interface CCUILabeledRoundButton : UIView {
    MTVisualStylingProvider *_visualStylingProvider;
}

@property (retain, nonatomic) UIColor *highlightColor;
@property (retain, nonatomic) CCUIRoundButton *buttonView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIImage *glyphImage;
@property (retain, nonatomic) CCUICAPackageDescription *glyphPackageDescription;
@property (copy, nonatomic) NSString *glyphState;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (nonatomic) BOOL labelsVisible;
@property (nonatomic) BOOL useAlternateBackground;
@property (nonatomic) NSString *contentSizeCategoryThreshold;

- (void)_updateFonts;
- (id)initWithGlyphPackageDescription:(id)a0 highlightColor:(id)a1;
- (void)_contentSizeCategoryDidChange;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithGlyphPackageDescription:(id)a0 highlightColor:(id)a1 useLightStyle:(BOOL)a2;
- (id)initWithGlyphImage:(id)a0 highlightColor:(id)a1;
- (void).cxx_destruct;
- (id)initWithGlyphImage:(id)a0 highlightColor:(id)a1 useLightStyle:(BOOL)a2;
- (void)_setupLabelsBounds;
- (void)buttonTapped:(id)a0;
- (void)didMoveToWindow;
- (BOOL)_shouldUseLargeTextLayout;
- (void)layoutSubviews;
- (void)_updateVisualStylingOfLabel:(id)a0;
- (void)_layoutLabels;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithHighlightColor:(id)a0 useLightStyle:(BOOL)a1;

@end
