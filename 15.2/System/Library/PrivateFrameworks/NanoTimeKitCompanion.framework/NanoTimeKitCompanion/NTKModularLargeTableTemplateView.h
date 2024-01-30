@class CLKComplicationTemplateModularLargeTable, NTKColoringLabel, UIView;
@protocol NTKComplicationImageView;

@interface NTKModularLargeTableTemplateView : NTKModularLargeColumnTemplateView {
    UIView<NTKComplicationImageView> *_headerImageView;
    NTKColoringLabel *_headerLabel;
    NTKColoringLabel *_row1Column1Label;
    NTKColoringLabel *_row1Column2Label;
    NTKColoringLabel *_row2Column1Label;
    NTKColoringLabel *_row2Column2Label;
}

@property (retain, nonatomic) CLKComplicationTemplateModularLargeTable *complicationTemplate;

+ (BOOL)handlesComplicationTemplate:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_layoutContentView;
- (void).cxx_destruct;
- (void)_update;
- (void)_enumerateForegroundColoringViewsWithBlock:(id /* block */)a0;
- (void)_enumerateSecondaryForegroundColoringViewsWithBlock:(id /* block */)a0;
- (void)_enumerateColumnRowsWithBlock:(id /* block */)a0;

@end
