@class NSCache;

@interface NTKUltraCubeSwatchRenderer : NSObject {
    NSCache *_swatchCache;
}

+ (id)_sharedRenderer;
+ (id)cachedSwatchForKey:(id)a0;
+ (BOOL)containsSwatchForKey:(id)a0;
+ (id)renderSwatchForContentView:(id)a0 device:(id)a1 key:(id)a2;
+ (void)renderSwatchForContentView:(id)a0 device:(id)a1 key:(id)a2 completion:(id /* block */)a3;

- (id)_init;
- (void).cxx_destruct;
- (id)_ca_renderSwatchWithCARenderServer:(id)a0 forDevice:(id)a1;
- (id)_cachedSwatchImageForKey:(id)a0;
- (BOOL)_isCATransactionCommitting;
- (id)_renderSwatchForContentView:(id)a0 device:(id)a1 key:(id)a2;
- (void)_renderSwatchForContentView:(id)a0 device:(id)a1 key:(id)a2 completion:(id /* block */)a3;
- (void)_setSwatchImage:(id)a0 forKey:(id)a1;
- (id)_ui_renderSwatchWithCARenderServer:(id)a0 forDevice:(id)a1;

@end
