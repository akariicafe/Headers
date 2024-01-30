@class NSString, NSMutableDictionary, MTCoreMaterialVisualStylingProvider;

@interface _MTStaticVibrantColorMaterialView : MTMaterialView <MTCoreMaterialVisualStylingProviderObserving> {
    NSMutableDictionary *_visualStyleCategoriesToCoreMaterialProviders;
    MTCoreMaterialVisualStylingProvider *_contentVisualStylingProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)layerClass;

- (void)setBlurEnabled:(BOOL)a0;
- (void)setZoomEnabled:(BOOL)a0;
- (void)setUseBuiltInAlphaTransformerAndBackdropScaleAdjustmentIfNecessary:(BOOL)a0;
- (BOOL)useBuiltInAlphaTransformerAndBackdropScaleAdjustmentIfNecessary;
- (BOOL)shouldCrossfade;
- (void).cxx_destruct;
- (void)_updateCoreMaterialVisualStylingProviders;
- (id)_materialLayer;
- (void)setIgnoresScreenClip:(BOOL)a0;
- (void)_dynamicUserInterfaceTraitDidChange;
- (BOOL)isBlurEnabled;
- (id)_coreMaterialVisualStylingProviderForCategory:(id)a0;
- (void)setCaptureOnly:(BOOL)a0;
- (BOOL)isContentReplacedWithSnapshot;
- (void)_updateContentVisualStylingIfNecessary;
- (void)setRecipe:(long long)a0;
- (void)setShouldCrossfade:(BOOL)a0;
- (void)layoutSubviews;
- (void)setBackdropScaleAdjustment:(id /* block */)a0;
- (void)setContentReplacedWithSnapshot:(BOOL)a0;
- (void)providedStylesDidChangeForProvider:(id)a0;
- (BOOL)isCaptureOnly;
- (id /* block */)backdropScaleAdjustment;
- (void)setUseBuiltInAlphaTransformerAndBackdropScaleAdjustment:(BOOL)a0;
- (BOOL)ignoresScreenClip;
- (BOOL)useBuiltInAlphaTransformerAndBackdropScaleAdjustment;
- (void)_updateContentVisualStylingWithProvider:(id)a0;
- (BOOL)isZoomEnabled;

@end
