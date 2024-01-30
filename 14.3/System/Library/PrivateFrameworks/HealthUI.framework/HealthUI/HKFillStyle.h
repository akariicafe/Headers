@class UIImage;

@interface HKFillStyle : NSObject <NSCopying> {
    UIImage *_cachedImage;
}

- (void)clearCache;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)fillImageWithHeight:(double)a0 usingTraitCollection:(id)a1;
- (id)fillImageWithWidth:(double)a0 usingTraitCollection:(id)a1;
- (void)_renderCacheIfNecessaryForHeight:(double)a0 usingTraitCollection:(id)a1;
- (void)_renderCacheIfNecessaryForWidth:(double)a0 usingTraitCollection:(id)a1;
- (void)_renderCacheIfNecessaryForSize:(struct CGSize { double x0; double x1; })a0 usingTraitCollection:(id)a1;
- (BOOL)_needsRenderForSize:(struct CGSize { double x0; double x1; })a0;
- (void)_renderInContext:(struct CGContext { } *)a0 size:(struct CGSize { double x0; double x1; })a1;

@end
