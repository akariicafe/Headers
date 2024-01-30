@class BCULayerRenderer, NSString, _BCUCoverEffectsShadow, _BCUCoverEffectsAssets;

@interface _BCUCoverEffectsBase : NSObject <BCUBookCoverEffectsFilter, BCUImageFilter> {
    _BCUCoverEffectsAssets *_assets;
    _BCUCoverEffectsShadow *_shadow;
    _BCUCoverEffectsShadow *_seriesShadow;
    BOOL _shadowOnly;
    BOOL _restricted;
}

@property (retain, nonatomic) BCULayerRenderer *renderer;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL supportsOptions;

- (double)cornerRadius;
- (void).cxx_destruct;
- (double)_assetsScale;
- (id)_coverLayerWithImage:(struct CGImage { } *)a0 size:(struct CGSize { double x0; double x1; })a1 scale:(double)a2;
- (id)_layerWithImage:(struct CGImage { } *)a0 size:(struct CGSize { double x0; double x1; })a1 scale:(double)a2 shadow:(id)a3;
- (id)_shadowLayerWithImage:(struct CGImage { } *)a0 size:(struct CGSize { double x0; double x1; })a1 tint:(BOOL)a2 shadow:(id)a3;
- (id)coverLayerWithImage:(struct CGImage { } *)a0 size:(struct CGSize { double x0; double x1; })a1 contentsScale:(double)a2;
- (BOOL)includeBinding;
- (id)initWithIdentifier:(id)a0 renderer:(id)a1 assets:(id)a2 shadow:(id)a3 seriesShadow:(id)a4 shadowOnly:(BOOL)a5;
- (id)initWithIdentifier:(id)a0 renderer:(id)a1 assets:(id)a2 shadow:(id)a3 seriesShadow:(id)a4 shadowOnly:(BOOL)a5 restricted:(BOOL)a6;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insetsForSize:(struct CGSize { double x0; double x1; })a0 contentsScale:(double)a1 options:(id)a2;
- (id)newOperationWithImage:(struct CGImage { } *)a0 size:(struct CGSize { double x0; double x1; })a1 contentsScale:(double)a2 priority:(float)a3 options:(id)a4 waitForCPUSynchronization:(BOOL)a5 logKey:(id)a6 completion:(id /* block */)a7;
- (id)shadowLayerWithImage:(struct CGImage { } *)a0 size:(struct CGSize { double x0; double x1; })a1 contentsScale:(double)a2 kind:(unsigned long long)a3;
- (double)tintBlurRadius;

@end
