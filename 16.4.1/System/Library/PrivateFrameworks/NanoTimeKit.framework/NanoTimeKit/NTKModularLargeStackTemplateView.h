@class CLKUIColoringLabel, UIView;
@protocol CDComplicationImageView;

@interface NTKModularLargeStackTemplateView : NTKModularTemplateView {
    CLKUIColoringLabel *_headerLeadingLabel;
    CLKUIColoringLabel *_headerTrailingLabel;
    BOOL _shouldTruncateHeaderLeadingLabelFirst;
    CLKUIColoringLabel *_body1Label;
    CLKUIColoringLabel *_body2Label;
    UIView<CDComplicationImageView> *_headerGlyph;
    UIView<CDComplicationImageView> *_body1Glyph;
}

+ (BOOL)handlesComplicationTemplate:(id)a0;

- (void)_update;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_layoutContentView;
- (void).cxx_destruct;
- (void)_updateForStandardBodyTemplate:(id)a0;
- (void)_enumerateForegroundColoringViewsWithBlock:(id /* block */)a0;
- (void)_enumerateSecondaryForegroundColoringViewsWithBlock:(id /* block */)a0;
- (id)_newLabelSubview;
- (id)_newLabelSubviewWithFont:(id)a0;
- (void)_updateForTallBodyTemplate:(id)a0;
- (void)_updateLabelsMaxWidths;

@end
