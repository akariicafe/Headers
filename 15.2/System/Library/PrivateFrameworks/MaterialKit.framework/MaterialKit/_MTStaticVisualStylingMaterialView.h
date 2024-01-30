@class NSString, NSArray, NSMutableDictionary, MTCoreMaterialVisualStylingProvider;

@interface _MTStaticVisualStylingMaterialView : MTMaterialView <MTCoreMaterialVisualStylingProviderObserving, MTVisualStylingRequiring> {
    NSString *_recipeName;
    NSMutableDictionary *_visualStyleCategoriesToCoreMaterialProviders;
    MTCoreMaterialVisualStylingProvider *_contentVisualStylingProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;

+ (Class)layerClass;

- (BOOL)isBlurEnabled;
- (BOOL)useBuiltInAlphaTransformerAndBackdropScaleAdjustment;
- (void)setContentReplacedWithSnapshot:(BOOL)a0;
- (void)layoutSubviews;
- (id)_coreMaterialVisualStylingProviderForCategory:(id)a0;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)setBlurEnabled:(BOOL)a0;
- (id)_initWithCoreMaterialRecipe:(id)a0 fromBundle:(id)a1 options:(unsigned long long)a2 initialWeighting:(double)a3 scaleAdjustment:(id /* block */)a4;
- (BOOL)ignoresScreenClip;
- (void)setShouldCrossfade:(BOOL)a0;
- (void)setIgnoresScreenClip:(BOOL)a0;
- (void)setBackdropScaleAdjustment:(id /* block */)a0;
- (BOOL)shouldCrossfade;
- (id)_materialLayer;
- (void)setUseBuiltInAlphaTransformerAndBackdropScaleAdjustmentIfNecessary:(BOOL)a0;
- (void)didMoveToSuperview;
- (void)setCaptureOnly:(BOOL)a0;
- (BOOL)isContentReplacedWithSnapshot;
- (void)setRecipe:(long long)a0;
- (id)recipeName;
- (void)setRecipeName:(id)a0;
- (BOOL)useBuiltInAlphaTransformerAndBackdropScaleAdjustmentIfNecessary;
- (BOOL)isCaptureOnly;
- (void)setUseBuiltInAlphaTransformerAndBackdropScaleAdjustment:(BOOL)a0;
- (BOOL)isZoomEnabled;
- (void)providedStylesDidChangeForProvider:(id)a0;
- (id /* block */)backdropScaleAdjustment;
- (void)setZoomEnabled:(BOOL)a0;
- (void)setVisualStylingProvider:(id)a0 forCategory:(long long)a1;
- (void)_updateCoreMaterialVisualStylingProviders;
- (void).cxx_destruct;
- (void)_invalidateContentVisualStyling;
- (void)_setCoreMaterialVisualStylingProvider:(id)a0 ForCategory:(id)a1;
- (void)_updateContentVisualStylingIfNecessary;
- (void)_updateContentVisualStylingWithProvider:(id)a0;

@end
