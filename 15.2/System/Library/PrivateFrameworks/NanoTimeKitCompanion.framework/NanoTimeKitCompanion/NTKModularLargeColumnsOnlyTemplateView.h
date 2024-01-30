@class UIView, NTKColoringLabel;
@protocol NTKComplicationImageView;

@interface NTKModularLargeColumnsOnlyTemplateView : NTKModularLargeColumnTemplateView {
    NTKColoringLabel *_row1Column1Label;
    NTKColoringLabel *_row1Column2Label;
    NTKColoringLabel *_row2Column1Label;
    NTKColoringLabel *_row2Column2Label;
    NTKColoringLabel *_row3Column1Label;
    NTKColoringLabel *_row3Column2Label;
    UIView<NTKComplicationImageView> *_row1ImageView;
    UIView<NTKComplicationImageView> *_row2ImageView;
    UIView<NTKComplicationImageView> *_row3ImageView;
}

+ (BOOL)handlesComplicationTemplate:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_layoutContentView;
- (void).cxx_destruct;
- (void)_update;
- (void)_enumerateForegroundColoringViewsWithBlock:(id /* block */)a0;
- (void)_enumerateSecondaryForegroundColoringViewsWithBlock:(id /* block */)a0;
- (void)_enumerateColumnRowsWithBlock:(id /* block */)a0;

@end
