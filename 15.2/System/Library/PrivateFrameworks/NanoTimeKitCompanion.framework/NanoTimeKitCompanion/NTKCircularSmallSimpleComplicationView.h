@class UIView, NTKColoringLabel;
@protocol NTKComplicationImageView;

@interface NTKCircularSmallSimpleComplicationView : NTKCircularComplicationView

@property (retain, nonatomic) NTKColoringLabel *label;
@property (retain, nonatomic) UIView<NTKComplicationImageView> *imageView;
@property (nonatomic) double maxDynamicFontSize;

+ (BOOL)handlesComplicationTemplate:(id)a0;
+ (BOOL)supportsComplicationFamily:(long long)a0;
+ (double)_imageScaleForTemplate:(id)a0 forDevice:(id)a1;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_enumerateForegroundColoringViewsWithBlock:(id /* block */)a0;
- (void)_updateLabelsForFontChange;
- (void)_updateForTemplateChange;
- (double)_baselineOffsetForDynamicSize:(long long)a0;
- (void)_updateLabelWithTextProvider:(id)a0;
- (void)_updateImageViewWithImageProvider:(id)a0;
- (void)updateLabelWithString:(id)a0;
- (void)updateImageViewWithImage:(id)a0;

@end
