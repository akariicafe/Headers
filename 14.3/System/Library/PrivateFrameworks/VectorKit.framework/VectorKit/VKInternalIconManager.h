@class VKResourceManager;

@interface VKInternalIconManager : NSObject {
    struct shared_ptr<grl::IconManager> { struct IconManager *__ptr_; struct __shared_weak_count *__cntrl_; } _iconManager;
    struct shared_ptr<md::StylesheetVendor> { struct StylesheetVendor *__ptr_; struct __shared_weak_count *__cntrl_; } _stylesheetVendor;
    struct read_write_lock { struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _lock; } _nameToStyleManagerLock;
    struct map<geo::_retain_ptr<NSString *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::shared_ptr<gss::StylesheetManager<gss::PropertyID> >, NSStringMapComparison, geo::StdAllocator<std::__1::pair<const geo::_retain_ptr<NSString *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::shared_ptr<gss::StylesheetManager<gss::PropertyID> > >, mdm::Allocator> > { struct __tree<std::__1::__value_type<geo::_retain_ptr<NSString *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::shared_ptr<gss::StylesheetManager<gss::PropertyID> > >, std::__1::__map_value_compare<geo::_retain_ptr<NSString *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__value_type<geo::_retain_ptr<NSString *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::shared_ptr<gss::StylesheetManager<gss::PropertyID> > >, NSStringMapComparison, true>, geo::StdAllocator<std::__1::__value_type<geo::_retain_ptr<NSString *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::shared_ptr<gss::StylesheetManager<gss::PropertyID> > >, mdm::Allocator> > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *__begin_node_; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, geo::StdAllocator<std::__1::__tree_node<std::__1::__value_type<geo::_retain_ptr<NSString *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::shared_ptr<gss::StylesheetManager<gss::PropertyID> > >, void *>, mdm::Allocator> > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *__left_; } __value_; struct StdAllocator<std::__1::__tree_node<std::__1::__value_type<geo::_retain_ptr<NSString *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::shared_ptr<gss::StylesheetManager<gss::PropertyID> > >, void *>, mdm::Allocator> { struct Allocator *_allocator; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<geo::_retain_ptr<NSString *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__value_type<geo::_retain_ptr<NSString *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::shared_ptr<gss::StylesheetManager<gss::PropertyID> > >, NSStringMapComparison, true> > { unsigned long long __value_; } __pair3_; } __tree_; } _nameToStyleManager;
    struct _retain_ptr<VKResourceManager *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { void /* function */ **_vptr$_retain_ptr; VKResourceManager *_obj; struct _retain_objc { } _retain; struct _release_objc { } _release; } _resourceManager;
    struct shared_ptr<md::GeoResourceProvider> { struct GeoResourceProvider *__ptr_; struct __shared_weak_count *__cntrl_; } _resourceProvider;
    struct shared_ptr<grl::FontManager> { struct FontManager *__ptr_; struct __shared_weak_count *__cntrl_; } _fontManager;
}

+ (unsigned char)convertSizeGroup:(long long)a0;
+ (unsigned int)convertCalloutShape:(unsigned char)a0;
+ (long long)convertGrlSizeGroup:(unsigned char)a0;

- (void)purge;
- (BOOL)isCachingAtlases;
- (id)init;
- (void).cxx_destruct;
- (id)imageForName:(id)a0 contentScale:(float)a1 sizeGroup:(long long)a2 modifiers:(id)a3;
- (void)dealloc;
- (void)setIsCachingAtlases:(BOOL)a0;
- (id)imageForKey:(unsigned int)a0 value:(unsigned int)a1 contentScale:(float)a2 sizeGroup:(long long)a3 modifiers:(id)a4;
- (unsigned int)darkVariant;
- (id)init:(struct shared_ptr<grl::IconManager> { struct IconManager *x0; struct __shared_weak_count *x1; })a0 stylesheetVendor:(struct shared_ptr<md::StylesheetVendor> { struct StylesheetVendor *x0; struct __shared_weak_count *x1; })a1;
- (id)imageForStyleAttributes:(id)a0 withStylesheetName:(id)a1 contentScale:(float)a2 sizeGroup:(long long)a3 modifiers:(id)a4;
- (id)imageForIconID:(unsigned int)a0 contentScale:(float)a1 sizeGroup:(long long)a2 modifiers:(id)a3;
- (unsigned int)trafficIncidentTypeKey;
- (id).cxx_construct;
- (id)imageForDataID:(unsigned int)a0 text:(id)a1 contentScale:(float)a2 sizeGroup:(long long)a3 modifiers:(id)a4;
- (id)imageForImageSourceKey:(id)a0;
- (unsigned int)styleAttributeTransitTypeKey;
- (unsigned int)styleAttributeTransitSystemTypeKey;
- (id)imageForStyleAttributes:(id)a0 styleManager:(struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { struct StylesheetManager<gss::PropertyID> *x0; struct __shared_weak_count *x1; })a1 contentScale:(float)a2 sizeGroup:(long long)a3 modifiers:(id)a4;

@end
