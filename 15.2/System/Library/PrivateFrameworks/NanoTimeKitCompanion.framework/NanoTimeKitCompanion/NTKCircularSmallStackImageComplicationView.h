@class UIView, NTKColoringLabel;
@protocol NTKComplicationImageView;

@interface NTKCircularSmallStackImageComplicationView : NTKCircularComplicationView {
    NTKColoringLabel *_label;
    UIView<NTKComplicationImageView> *_imageView;
}

+ (BOOL)handlesComplicationTemplate:(id)a0;
+ (BOOL)supportsComplicationFamily:(long long)a0;
+ (double)_imageScaleForTemplate:(id)a0;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_enumerateForegroundColoringViewsWithBlock:(id /* block */)a0;
- (void)_updateLabelsForFontChange;
- (void)_updateForTemplateChange;

@end
