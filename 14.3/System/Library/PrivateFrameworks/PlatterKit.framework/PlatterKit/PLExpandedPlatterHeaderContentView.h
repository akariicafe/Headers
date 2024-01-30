@interface PLExpandedPlatterHeaderContentView : PLPlatterHeaderContentView

- (void)_dynamicUserInterfaceTraitDidChange;
- (void)setDateFormatStyle:(long long)a0;
- (void)_layoutUtilityButtonWithScale:(double)a0;
- (void)setDate:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (double)_largeTextLabelBaselineOffsetFromBottom;
- (void)setDateAllDay:(BOOL)a0;
- (double)_iconDimension;
- (double)_iconLeadingPadding;
- (double)_headerHeightForWidth:(double)a0;
- (id)_newIconButton;
- (void)_configureIconButton:(id)a0 withIcon:(id)a1;
- (double)_iconTrailingPadding;
- (void)_configureDateLabel;
- (void)_layoutDateLabelWithScale:(double)a0;
- (void)_layoutTitleLabelWithScale:(double)a0;
- (void)_updateStylingForTitleLabel:(id)a0;
- (void)_updateUtilityButtonFont;
- (void)_configureUtilityButton;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_titleLabelBoundsForSize:(struct CGSize { double x0; double x1; })a0;
- (id)_ellipsisHighlightedBackgroundImage;
- (void)_updateUtilityButtonVibrantStyling;
- (double)_largeTextTitleLabelBaselineOffset;
- (double)_titleFirstLineCenterY;

@end
