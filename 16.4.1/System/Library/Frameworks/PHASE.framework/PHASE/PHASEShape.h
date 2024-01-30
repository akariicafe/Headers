@class NSArray, PHASEEngine;

@interface PHASEShape : NSObject <NSCopying> {
    PHASEEngine *_engine;
    struct MdlMeshAsset { unsigned int mType; struct unique_ptr<Phase::details::MdlMeshAssetImplementation, std::default_delete<Phase::details::MdlMeshAssetImplementation>> { struct __compressed_pair<Phase::details::MdlMeshAssetImplementation *, std::default_delete<Phase::details::MdlMeshAssetImplementation>> { struct MdlMeshAssetImplementation *__value_; } __ptr_; } mpImplementation; } _meshAsset;
    int _voxelDensity;
    unsigned long long _flags;
    BOOL _isReal;
    struct vector<Phase::LocalizedGeometryPermutation, std::allocator<Phase::LocalizedGeometryPermutation>> { struct LocalizedGeometryPermutation *__begin_; struct LocalizedGeometryPermutation *__end_; struct __compressed_pair<Phase::LocalizedGeometryPermutation *, std::allocator<Phase::LocalizedGeometryPermutation>> { struct LocalizedGeometryPermutation *__value_; } __end_cap_; } _localizedGeometryPermutations;
}

@property (readonly, copy, nonatomic) NSArray *elements;

+ (id)new;

- (id).cxx_construct;
- (id)initWithShape:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dumpState;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)applyOptions:(id)a0;
- (void)buildLocalizedGeometryPermutations;
- (id)geoShapeHandlesForEntityType:(unsigned int)a0;
- (id)initWithEngine:(id)a0 mesh:(id)a1;
- (id)initWithEngine:(id)a0 mesh:(id)a1 materials:(id)a2;
- (id)initWithEngine:(id)a0 mesh:(id)a1 materials:(id)a2 options:(id)a3;
- (id)initWithEngine:(id)a0 mesh:(id)a1 options:(id)a2;
- (void)updateMaterialForElement:(id)a0;
- (void)updateMaterialForShape:(struct Handle64 { unsigned long long x0; })a0 fromElementIndex:(unsigned long long)a1;

@end
