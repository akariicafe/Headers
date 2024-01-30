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

- (BOOL)isZoomEnabled;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)setCaptureOnly:(BOOL)a0;
- (BOOL)isBlurEnabled;
- (BOOL)isCaptureOnly;
- (void)setBackdropScaleAdjustment:(id /* block */)a0;
- (void)setBlurEnabled:(BOOL)a0;
- (void)setZoomEnabled:(BOOL)a0;
- (void)setRecipe:(long long)a0;
- (void)_updateContentVisualStylingIfNecessary;
- (id /* block */)backdropScaleAdjustment;
- (void)setRecipeName:(id)a0;
- (id)_initWithCoreMaterialRecipe:(id)a0 fromBundle:(id)a1 options:(unsigned long long)a2 initialWeighting:(double)a3 scaleAdjustment:(id /* block */)a4;
- (void)_setCoreMaterialVisualStylingProvider:(id)a0 ForCategory:(id)a1;
- (id)_materialLayer;
- (BOOL)isContentReplacedWithSnapshot;
- (BOOL)useBuiltInAlphaTransformerAndBackdropScaleAdjustment;
- (void)_updateCoreMaterialVisualStylingProviders;
- (void)providedStylesDidChangeForProvider:(id)a0;
- (void)setContentReplacedWithSnapshot:(BOOL)a0;
- (void)setUseBuiltInAlphaTransformerAndBackdropScaleAdjustmentIfNecessary:(BOOL)a0;
- (void)setUseBuiltInAlphaTransformerAndBackdropScaleAdjustment:(BOOL)a0;
- (BOOL)ignoresScreenClip;
- (id)recipeName;
- (void)setIgnoresScreenClip:(BOOL)a0;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (void)setVisualStylingProvider:(id)a0 forCategory:(long long)a1;
- (BOOL)useBuiltInAlphaTransformerAndBackdropScaleAdjustmentIfNecessary;
- (void)setShouldCrossfade:(BOOL)a0;
- (void)_invalidateContentVisualStyling;
- (BOOL)shouldCrossfade;
- (id)_coreMaterialVisualStylingProviderForCategory:(id)a0;
- (void)_updateContentVisualStylingWithProvider:(id)a0;
- (void).cxx_destruct;

@end
