@class UITraitCollection, NSString, NSBundle, CUINamedLayerStack, _UIAssetManager;

@interface UIImageAsset : NSObject <NSSecureCoding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSBundle *_containingBundle;
    struct { unsigned char hasRegisteredImages : 1; unsigned char supportsBlockGeneration : 1; } _assetFlags;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) id /* block */ creationBlock;
@property (weak, nonatomic, setter=_setUnpinObserver:) id _unpinObserver;
@property (copy, nonatomic) NSString *assetName;
@property (weak) _UIAssetManager *_assetManager;
@property (readonly, nonatomic) UITraitCollection *_defaultTraitCollection;
@property (copy, nonatomic, setter=_setRebuildStackImage:) id /* block */ _rebuildStackImage;
@property (retain, nonatomic, setter=_setLayerStack:) CUINamedLayerStack *_layerStack;

+ (id)_dynamicAssetNamed:(id)a0 generator:(id /* block */)a1;

- (void)_unsafe_registerImage:(id)a0 withConfiguration:(id)a1;
- (void)registerImage:(id)a0 withTraitCollection:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)_withLock_registeredAppearanceNames;
- (void)_registerImage:(id)a0 withConfiguration:(id)a1;
- (void)_withLock_registerImage:(id)a0 withConfiguration:(id)a1;
- (id)imageWithTraitCollection:(id)a0;
- (id)_renditionCache:(BOOL)a0;
- (id)_initWithAssetName:(id)a0 forManager:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)_cacheRendition:(id)a0 forSize:(struct CGSize { double x0; double x1; })a1 tintColor:(id)a2 traitCollection:(id)a3 bold:(BOOL)a4 letterpress:(BOOL)a5 drawMode:(unsigned int)a6;
- (void)_unregisterImageWithDescription:(id)a0;
- (void)unregisterImageWithTraitCollection:(id)a0;
- (void)_disconnectFromAssetManager;
- (id)_withLock_imageWithConfiguration:(id)a0;
- (id)_nameForStoringRuntimeRegisteredImagesInMutableCatalog;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)_withLock_lookUpRegisteredObjectForTraitCollection:(id)a0 withAccessorWithAppearanceName:(id /* block */)a1;
- (unsigned long long)hash;
- (id)_withLock_mutableCatalog;
- (id)_withLock_updateAssetFromBlockGenerationWithConfiguration:(id)a0 resolvedCatalogImage:(id)a1;
- (void)_clearResolvedImageResources;
- (id)init;
- (BOOL)_containsImagesInPath:(id)a0;
- (id)_symbolConfiguration;
- (void)registerImage:(id)a0 withConfiguration:(id)a1;
- (void)unregisterImageWithConfiguration:(id)a0;
- (id)_initWithAssetName:(id)a0 forFilesInBundle:(id)a1;
- (id)_unsafe_mutableCatalog;
- (void).cxx_destruct;
- (id)imageWithConfiguration:(id)a0;
- (void)_withLock_unregisterImageWithDescription:(id)a0;
- (id)_cachedRenditionWithSize:(struct CGSize { double x0; double x1; })a0 tintColor:(id)a1 traitCollection:(id)a2 bold:(BOOL)a3 letterpress:(BOOL)a4 drawMode:(unsigned int)a5;

@end
