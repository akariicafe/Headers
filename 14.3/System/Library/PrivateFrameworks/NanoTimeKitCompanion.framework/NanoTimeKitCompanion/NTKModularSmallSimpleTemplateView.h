@class NTKColoringLabel, UIView;
@protocol NTKComplicationImageView;

@interface NTKModularSmallSimpleTemplateView : NTKModularTemplateView {
    UIView<NTKComplicationImageView> *_imageView;
    NTKColoringLabel *_label;
    long long _maxDynamicFontSize;
}

+ (BOOL)handlesComplicationTemplate:(id)a0;
+ (BOOL)supportsComplicationFamily:(long long)a0;
+ (id)supportedTemplateClasses;

- (void)_layoutContentView;
- (void).cxx_destruct;
- (void)_update;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_enumerateForegroundColoringViewsWithBlock:(id /* block */)a0;
- (void)_configureWithTextTemplate:(id)a0;
- (void)_configureWithImageTemplate:(id)a0;
- (double)_maxTextWidthForDynamicFontSize:(long long)a0;

@end
