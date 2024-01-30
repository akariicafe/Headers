@class NTKColoringLabel;

@interface NTKModularSmallDateTemplateView : NTKModularTemplateView {
    NTKColoringLabel *_weekdayLabel;
    NTKColoringLabel *_dayLabel;
}

+ (BOOL)handlesComplicationTemplate:(id)a0;
+ (BOOL)supportsComplicationFamily:(long long)a0;

- (void)_layoutContentView;
- (void).cxx_destruct;
- (void)_update;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setIsXL:(BOOL)a0;
- (void)_enumerateForegroundColoringViewsWithBlock:(id /* block */)a0;
- (void)_enumerateSecondaryForegroundColoringViewsWithBlock:(id /* block */)a0;
- (void)_configureContentSubviews;
- (id)_newLabelSubviewWithFont:(id)a0;

@end
