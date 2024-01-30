@class VKInternalIconManager, VKResourceManager, NSString;

@interface VKSharedResources : NSObject <GEOResourceManifestTileGroupObserver> {
    struct _retain_ptr<VKInternalIconManager *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> { void /* function */ **_vptr$_retain_ptr; VKInternalIconManager *_obj; struct _retain_objc_arc { } _retain; struct _release_objc_arc { } _release; } _iconManager;
    struct shared_ptr<md::TextureManager> { struct TextureManager *__ptr_; struct __shared_weak_count *__cntrl_; } _textureManager;
    struct shared_ptr<md::MaterialTextureManager> { struct MaterialTextureManager *__ptr_; struct __shared_weak_count *__cntrl_; } _materialTextureManager;
    struct _retain_ptr<VKResourceManager *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> { void /* function */ **_vptr$_retain_ptr; VKResourceManager *_obj; struct _retain_objc_arc { } _retain; struct _release_objc_arc { } _release; } _resourceManager;
    struct shared_ptr<md::DataOverrideManager> { struct DataOverrideManager *__ptr_; struct __shared_weak_count *__cntrl_; } _dataOverrideManager;
    struct shared_ptr<md::StandardCommandBufferSelector> { struct StandardCommandBufferSelector *__ptr_; struct __shared_weak_count *__cntrl_; } _standardCommandBufferSelector;
    struct shared_ptr<md::RealisticCommandBufferSelector> { struct RealisticCommandBufferSelector *__ptr_; struct __shared_weak_count *__cntrl_; } _realisticCommandBufferSelector;
    struct unique_ptr<md::Device, std::default_delete<md::Device>> { struct __compressed_pair<md::Device *, std::default_delete<md::Device>> { struct Device *__value_; } __ptr_; } _device;
    struct unique_ptr<ggl::AlphaAtlas, std::default_delete<ggl::AlphaAtlas>> { struct __compressed_pair<ggl::AlphaAtlas *, std::default_delete<ggl::AlphaAtlas>> { struct AlphaAtlas *__value_; } __ptr_; } _alphaAtlas;
    struct unique_ptr<ggl::IsoAlphaAtlas, std::default_delete<ggl::IsoAlphaAtlas>> { struct __compressed_pair<ggl::IsoAlphaAtlas *, std::default_delete<ggl::IsoAlphaAtlas>> { struct IsoAlphaAtlas *__value_; } __ptr_; } _highInflationAlphaAtlas;
    struct unique_ptr<ggl::IsoAlphaAtlas, std::default_delete<ggl::IsoAlphaAtlas>> { struct __compressed_pair<ggl::IsoAlphaAtlas *, std::default_delete<ggl::IsoAlphaAtlas>> { struct IsoAlphaAtlas *__value_; } __ptr_; } _isoAlphaAtlas;
    struct unique_ptr<ggl::DistanceAtlas, std::default_delete<ggl::DistanceAtlas>> { struct __compressed_pair<ggl::DistanceAtlas *, std::default_delete<ggl::DistanceAtlas>> { struct DistanceAtlas *__value_; } __ptr_; } _distanceAtlas;
    struct shared_ptr<ggl::StandardLibrary> { struct StandardLibrary *__ptr_; struct __shared_weak_count *__cntrl_; } _shaderLibrary;
    struct CMPhotoDecompressionSession { } *_defaultDecompressionSession;
    struct read_write_lock { struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _lock; } _figCreationLock;
    struct shared_ptr<md::GeoResourceProvider> { struct GeoResourceProvider *__ptr_; struct __shared_weak_count *__cntrl_; } _resourceProvider;
    struct shared_ptr<grl::IconManager> { struct IconManager *__ptr_; struct __shared_weak_count *__cntrl_; } _grlIconManager;
    struct shared_ptr<grl::FontManager> { struct FontManager *__ptr_; struct __shared_weak_count *__cntrl_; } _grlFontManager;
    unsigned int _referenceCount;
}

@property (readonly, nonatomic) VKInternalIconManager *iconManager;
@property (readonly, nonatomic) struct shared_ptr<md::TextureManager> { struct TextureManager *x0; struct __shared_weak_count *x1; } textureManager;
@property (readonly, nonatomic) struct shared_ptr<md::MaterialTextureManager> { struct MaterialTextureManager *x0; struct __shared_weak_count *x1; } materialTextureManager;
@property (readonly, nonatomic) VKResourceManager *resourceManager;
@property (readonly, nonatomic) struct shared_ptr<md::StylesheetVendor> { struct StylesheetVendor *__ptr_; struct __shared_weak_count *__cntrl_; } stylesheetVendor;
@property (readonly, nonatomic) void *device;
@property (readonly, nonatomic) void *gglDevice;
@property (readonly, nonatomic) struct shared_ptr<md::StandardCommandBufferSelector> { struct StandardCommandBufferSelector *x0; struct __shared_weak_count *x1; } standardCommandBufferSelector;
@property (readonly, nonatomic) struct shared_ptr<md::RealisticCommandBufferSelector> { struct RealisticCommandBufferSelector *x0; struct __shared_weak_count *x1; } realisticCommandBufferSelector;
@property (readonly, nonatomic) void *alphaAtlas;
@property (readonly, nonatomic) void *highInflationAlphaAtlas;
@property (readonly, nonatomic) void *isoAlphaAtlas;
@property (readonly, nonatomic) void *distanceAtlas;
@property (readonly, nonatomic) const void *shaderLibrary;
@property (readonly, nonatomic) void *grlIconManager;
@property (readonly, nonatomic) struct shared_ptr<grl::FontManager> { struct FontManager *x0; struct __shared_weak_count *x1; } grlFontManager;
@property (readonly, nonatomic) struct CMPhotoDecompressionSession { } *defaultDecompressionSession;
@property (nonatomic) BOOL snapshotterIsInService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)a0;
- (void)purge;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)a0;
- (id).cxx_construct;
- (void)purgeDecompressSessionCachedBuffers;
- (void)startDecompressionSession;
- (BOOL)_hasResourceUsers;
- (void)_addResourceUser;
- (void)dealloc;
- (void)_removeResourceUser;
- (id)_initWithDevice:(void *)a0 standardLibrary:(const void *)a1;
- (void).cxx_destruct;
- (const void *)dataOverrideManager;

@end
