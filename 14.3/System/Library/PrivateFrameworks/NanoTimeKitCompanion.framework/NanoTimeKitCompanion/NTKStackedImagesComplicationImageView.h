@class UIColor, NSString, CLKImageProvider, NTKColoringImageView, UIImageView, CLKDevice, UIImage;
@protocol CLKMonochromeFilterProvider;

@interface NTKStackedImagesComplicationImageView : UIView <NTKComplicationImageView, NTKLegibilityView, CLKMonochromeComplicationView> {
    CLKDevice *_device;
    NTKColoringImageView *_foregroundImageView;
    NTKColoringImageView *_backgroundImageView;
    UIImageView *_foregroundAccentImageView;
    NTKColoringImageView *_monochromeImageView;
    UIImageView *_monochromeShadowView;
    UIImageView *_multipartShadowView;
    UIImage *_multipartShadowViewSource;
    BOOL _isUsingLegibility;
    BOOL _isShadowImagesStale;
    double _imageScaleFactor;
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

- (void)_updateShadow;
- (void)_updateAlpha;
- (void).cxx_destruct;
- (void)_updateImages;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateColors;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (void)setUsesLegibility:(BOOL)a0;
- (BOOL)_hasMultipartImages;
- (BOOL)legibilityEnabled;
- (void)setLegibilityEnabled:(BOOL)a0;
- (BOOL)usesLegibility;
- (void)_enumerateMultipartImageViewsWithBlock:(id /* block */)a0;
- (void)_enumerateImageViewsWithBlock:(id /* block */)a0;
- (BOOL)_hasShadowViews;
- (BOOL)_shouldIgnoreTwoPieceImage;
- (void)_updateShadowViewImages;
- (void)_loadImageViewsIfNecessary;
- (void)_updateImageSubviewsMaxSize;
- (BOOL)hasMonochromeImage;

@end
