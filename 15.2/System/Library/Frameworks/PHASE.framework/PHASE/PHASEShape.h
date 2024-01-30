@class NSArray, PHASEEngine;

@interface PHASEShape : NSObject <NSCopying> {
    PHASEEngine *_engine;
    struct MdlMeshAsset { unsigned int mType; struct unique_ptr<Phase::details::MdlMeshAssetImplementation, std::default_delete<Phase::details::MdlMeshAssetImplementation>> { struct __compressed_pair<Phase::details::MdlMeshAssetImplementation *, std::default_delete<Phase::details::MdlMeshAssetImplementation>> { struct MdlMeshAssetImplementation *__value_; } __ptr_; } mpImplementation; } _meshAsset;
    struct map<Class, Phase::Handle64, std::less<Class>, std::allocator<std::pair<const Class, Phase::Handle64>>> { struct __tree<std::__value_type<Class, Phase::Handle64>, std::__map_value_compare<Class, std::__value_type<Class, Phase::Handle64>, std::less<Class>, true>, std::allocator<std::__value_type<Class, Phase::Handle64>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<Class, Phase::Handle64>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<Class, std::__value_type<Class, Phase::Handle64>, std::less<Class>, true>> { unsigned long long __value_; } __pair3_; } __tree_; } _optimizedGeoShapeHandles;
    unsigned long long _flags;
    BOOL _isReal;
    int _voxelDensity;
}

@property (readonly, copy, nonatomic) NSArray *elements;

+ (id)new;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithShape:(id)a0;
- (void)dealloc;
- (id).cxx_construct;
- (void)updateMaterialForElement:(id)a0;
- (id)initWithEngine:(id)a0 mesh:(id)a1;
- (void)applyOptions:(id)a0;
- (id)initWithEngine:(id)a0 mesh:(id)a1 materials:(id)a2;
- (void)createOptimizedGeoShapeForObjectClass:(Class)a0;
- (void)updateMaterialForShape:(struct Handle64 { unsigned long long x0; })a0 fromElementIndex:(unsigned long long)a1;
- (id)initWithEngine:(id)a0 mesh:(id)a1 options:(id)a2;
- (id)initWithEngine:(id)a0 mesh:(id)a1 materials:(id)a2 options:(id)a3;
- (struct Handle64 { unsigned long long x0; })geoShapeForObjectClass:(Class)a0;

@end
