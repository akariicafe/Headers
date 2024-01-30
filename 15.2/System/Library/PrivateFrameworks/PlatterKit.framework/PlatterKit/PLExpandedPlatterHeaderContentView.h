@interface PLExpandedPlatterHeaderContentView : PLPlatterHeaderContentView

- (void)setDateAllDay:(BOOL)a0;
- (void)_dynamicUserInterfaceTraitDidChange;
- (double)_iconLeadingPadding;
- (double)_iconTrailingPadding;
- (void)_updateStylingForTitleLabel:(id)a0;
- (void)_layoutDateLabelWithScale:(double)a0;
- (id)_newIconButton;
- (void)_updateUtilityButtonVibrantStyling;
- (double)_largeTextLabelBaselineOffsetFromBottom;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_updateUtilityButtonFont;
- (double)_titleFirstLineCenterY;
- (double)_headerHeightForWidth:(double)a0;
- (void)_configureUtilityButton;
- (void)setDateFormatStyle:(long long)a0;
- (id)_ellipsisHighlightedBackgroundImage;
- (void)_configureDateLabel;
- (double)_largeTextTitleLabelBaselineOffset;
- (void)_layoutTitleLabelWithScale:(double)a0;
- (double)_iconDimension;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_titleLabelBoundsForSize:(struct CGSize { double x0; double x1; })a0;
- (void)_configureIconButton:(id)a0 withIcon:(id)a1;
- (void)setDate:(id)a0;
- (void)_layoutUtilityButtonWithScale:(double)a0;

@end
