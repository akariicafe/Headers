@class CLKUIColoringLabel, UIView;
@protocol CDComplicationImageView;

@interface NTKModularLargeColumnsOnlyTemplateView : NTKModularLargeColumnTemplateView {
    CLKUIColoringLabel *_row1Column1Label;
    CLKUIColoringLabel *_row1Column2Label;
    CLKUIColoringLabel *_row2Column1Label;
    CLKUIColoringLabel *_row2Column2Label;
    CLKUIColoringLabel *_row3Column1Label;
    CLKUIColoringLabel *_row3Column2Label;
    UIView<CDComplicationImageView> *_row1ImageView;
    UIView<CDComplicationImageView> *_row2ImageView;
    UIView<CDComplicationImageView> *_row3ImageView;
}

+ (BOOL)handlesComplicationTemplate:(id)a0;

- (void)_update;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_layoutContentView;
- (void).cxx_destruct;
- (void)_enumerateColumnRowsWithBlock:(id /* block */)a0;
- (void)_enumerateForegroundColoringViewsWithBlock:(id /* block */)a0;
- (void)_enumerateSecondaryForegroundColoringViewsWithBlock:(id /* block */)a0;

@end
