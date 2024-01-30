@class UIView, NTKColoringLabel;
@protocol NTKComplicationImageView;

@interface NTKModularLargeStackTemplateView : NTKModularTemplateView {
    NTKColoringLabel *_headerLeadingLabel;
    NTKColoringLabel *_headerTrailingLabel;
    BOOL _shouldTruncateHeaderLeadingLabelFirst;
    NTKColoringLabel *_body1Label;
    NTKColoringLabel *_body2Label;
    UIView<NTKComplicationImageView> *_headerGlyph;
    UIView<NTKComplicationImageView> *_body1Glyph;
}

+ (BOOL)handlesComplicationTemplate:(id)a0;

- (void)_layoutContentView;
- (void).cxx_destruct;
- (void)_update;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_enumerateForegroundColoringViewsWithBlock:(id /* block */)a0;
- (void)_enumerateSecondaryForegroundColoringViewsWithBlock:(id /* block */)a0;
- (id)_newLabelSubviewWithFont:(id)a0;
- (void)_updateLabelsMaxWidths;
- (id)_newLabelSubview;
- (void)_updateForStandardBodyTemplate:(id)a0;
- (void)_updateForTallBodyTemplate:(id)a0;

@end
