@class NTKColoringLabel, CLKComplicationTemplateModularSmallColumnsText;

@interface NTKModularSmallColumnTemplateView : NTKModularTemplateView {
    NTKColoringLabel *_row1Column1Label;
    NTKColoringLabel *_row1Column2Label;
    NTKColoringLabel *_row2Column1Label;
    NTKColoringLabel *_row2Column2Label;
    BOOL _calculatedFontSize;
}

@property (readonly, nonatomic) CLKComplicationTemplateModularSmallColumnsText *complicationTemplate;

+ (BOOL)handlesComplicationTemplate:(id)a0;
+ (BOOL)supportsComplicationFamily:(long long)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_layoutContentView;
- (void).cxx_destruct;
- (void)_update;
- (void)_enumerateForegroundColoringViewsWithBlock:(id /* block */)a0;
- (void)_enumerateSecondaryForegroundColoringViewsWithBlock:(id /* block */)a0;
- (id)_newLabelSubview;
- (id)_headerFontOfSize:(double)a0;
- (id)_bodyFontOfSize:(double)a0;

@end
