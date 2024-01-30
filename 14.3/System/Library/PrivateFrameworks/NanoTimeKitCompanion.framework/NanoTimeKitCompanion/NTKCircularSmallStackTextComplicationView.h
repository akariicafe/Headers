@class NTKColoringLabel;

@interface NTKCircularSmallStackTextComplicationView : NTKCircularComplicationView {
    NTKColoringLabel *_firstLineLabel;
    NTKColoringLabel *_secondLineLabel;
}

+ (BOOL)handlesComplicationTemplate:(id)a0;
+ (BOOL)supportsComplicationFamily:(long long)a0;

- (void)setForegroundColor:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_updateLabelColors;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_enumerateForegroundColoringViewsWithBlock:(id /* block */)a0;
- (void)_updateLabelsForFontChange;
- (void)_updateForTemplateChange;
- (void)setUsesMultiColor:(BOOL)a0;

@end
