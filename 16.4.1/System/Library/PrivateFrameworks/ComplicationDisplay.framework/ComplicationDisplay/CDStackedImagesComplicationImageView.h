@class NSString, UIImage, CLKDevice, CLKImageProvider, UIImageView, _CDComplicationImageViewProviderImageView, CLKUIColoringImageView, UIColor;
@protocol CLKMonochromeFilterProvider;

@interface CDStackedImagesComplicationImageView : UIView <CDComplicationImageView, CLKUILegibilityView, CLKMonochromeComplicationView> {
    CLKDevice *_device;
    CLKUIColoringImageView *_foregroundImageView;
    CLKUIColoringImageView *_backgroundImageView;
    UIImageView *_foregroundAccentImageView;
    CLKUIColoringImageView *_monochromeImageView;
    UIImageView *_monochromeShadowView;
    UIImageView *_multipartShadowView;
    UIImage *_multipartShadowViewSource;
    _CDComplicationImageViewProviderImageView *_layerMaskImageView;
    BOOL _isUsingLegibility;
    BOOL _isShadowImagesStale;
}

@property (nonatomic) double multicolorAlpha;
@property (retain, nonatomic) UIColor *foregroundColor;
@property (retain, nonatomic) CLKImageProvider *imageProvider;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) BOOL usesLegibility;
@property (retain, nonatomic) UIColor *overrideColor;
@property (readonly, nonatomic) UIColor *contentColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL legibilityEnabled;
@property (nonatomic) double shadowBlur;
@property (retain, nonatomic) UIColor *shadowColor;
@property (weak, nonatomic) id<CLKMonochromeFilterProvider> filterProvider;

- (void)_updateColors;
- (void)_updateShadow;
- (void)_updateAlpha;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)_updateImages;
- (void).cxx_destruct;
- (long long)_backgroundFilterStyle;
- (long long)_foregroundFilterStyle;
- (BOOL)_hasMultipartImages;
- (BOOL)hasMonochromeImage;
- (BOOL)legibilityEnabled;
- (void)setLegibilityEnabled:(BOOL)a0;
- (void)setUsesLegibility:(BOOL)a0;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (BOOL)usesLegibility;
- (BOOL)_hasShadowViews;
- (void)_enumerateImageViewsWithBlock:(id /* block */)a0;
- (void)_enumerateMultipartImageViewsWithBlock:(id /* block */)a0;
- (void)_loadImageViewsIfNecessary;
- (BOOL)_shouldIgnoreTwoPieceImage;
- (void)_updateImageSubviewsMaxSize;
- (void)_updateShadowViewImages;

@end
