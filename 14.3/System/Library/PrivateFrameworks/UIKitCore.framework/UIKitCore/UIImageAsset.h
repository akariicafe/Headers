@class UITraitCollection, NSString, NSBundle, CUINamedLayerStack, _UIAssetManager;

@interface UIImageAsset : NSObject <NSSecureCoding> {
    NSBundle *_containingBundle;
    BOOL _cacheContents;
    UITraitCollection *_defaultTraitCollection;
    struct { unsigned char hasRegisteredImages : 1; unsigned char supportsBlockGeneration : 1; unsigned char disconnectedFromAssetManager : 1; } _assetFlags;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) id /* block */ creationBlock;
@property (weak, nonatomic, setter=_setUnpinObserver:) id _unpinObserver;
@property (copy, nonatomic) NSString *assetName;
@property (readonly, weak, nonatomic) _UIAssetManager *_assetManager;
@property (readonly, nonatomic) UITraitCollection *_defaultTraitCollection;
@property (copy, nonatomic, setter=_setRebuildStackImage:) id /* block */ _rebuildStackImage;
@property (retain, nonatomic, setter=_setLayerStack:) CUINamedLayerStack *_layerStack;

+ (id)_dynamicAssetNamed:(id)a0 generator:(id /* block */)a1;

- (void)unregisterImageWithConfiguration:(id)a0;
- (id)init;
- (id)_lookUpRegisteredObjectForTraitCollection:(id)a0 withAccessorWithAppearanceName:(id /* block */)a1;
- (void)_clearResolvedImageResources;
- (void).cxx_destruct;
- (id)_symbolConfiguration;
- (void)dealloc;
- (void)unregisterImageWithTraitCollection:(id)a0;
- (id)_cachedRenditionWithSize:(struct CGSize { double x0; double x1; })a0 tintColor:(id)a1 traitCollection:(id)a2 bold:(BOOL)a3 letterpress:(BOOL)a4 drawMode:(unsigned int)a5;
- (id)imageWithTraitCollection:(id)a0;
- (BOOL)_containsImagesInPath:(id)a0;
- (void)_registerImage:(id)a0 withConfiguration:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)_registeredAppearanceNames;
- (void)registerImage:(id)a0 withTraitCollection:(id)a1;
- (void)_cacheRendition:(id)a0 forSize:(struct CGSize { double x0; double x1; })a1 tintColor:(id)a2 traitCollection:(id)a3 bold:(BOOL)a4 letterpress:(BOOL)a5 drawMode:(unsigned int)a6;
- (BOOL)isEqual:(id)a0;
- (id)_nameForStoringRuntimeRegisteredImagesInMutableCatalog;
- (void)_registerImage:(id)a0 withTraitCollection:(id)a1;
- (id)imageWithConfiguration:(id)a0;
- (id)_updateAssetFromBlockGenerationWithConfiguration:(id)a0 resolvedCatalogImage:(id)a1;
- (id)_mutableCatalog;
- (void)_disconnectFromAssetManager;
- (id)_initWithAssetName:(id)a0 forFilesInBundle:(id)a1;
- (void)registerImage:(id)a0 withConfiguration:(id)a1;
- (id)_initWithAssetName:(id)a0 forManager:(id)a1;
- (id)_renditionCache:(BOOL)a0;
- (void)encodeWithCoder:(id)a0;

@end
