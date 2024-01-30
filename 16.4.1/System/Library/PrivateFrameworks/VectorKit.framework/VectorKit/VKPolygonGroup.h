@interface VKPolygonGroup : VKPolygonalItemGroup {
    struct optional<md::MeshSet<ggl::PolygonCommonStroke::MeshMesh, ggl::PolygonCommonStroke::DefaultVbo>> { BOOL _hasValue; union ValueUnion { unsigned char data[184]; struct MeshSet<ggl::PolygonCommonStroke::MeshMesh, ggl::PolygonCommonStroke::DefaultVbo> { struct vector<std::pair<unsigned short, unsigned int>, std::allocator<std::pair<unsigned short, unsigned int>>> { void *__begin_; void *__end_; struct __compressed_pair<std::pair<unsigned short, unsigned int> *, std::allocator<std::pair<unsigned short, unsigned int>>> { void *__value_; } __end_cap_; } _vertexAndIndexCounts; struct vector<std::shared_ptr<ggl::PolygonCommonStroke::MeshMesh>, std::allocator<std::shared_ptr<ggl::PolygonCommonStroke::MeshMesh>>> { void *__begin_; void *__end_; struct __compressed_pair<std::shared_ptr<ggl::PolygonCommonStroke::MeshMesh> *, std::allocator<std::shared_ptr<ggl::PolygonCommonStroke::MeshMesh>>> { void *__value_; } __end_cap_; } _meshes; struct DataWrite<ggl::PolygonCommonStroke::DefaultVbo> { struct BufferMemory { struct ResourceAccessor *_accessor; struct BufferData *_user; struct Range<unsigned long> { unsigned long long _min; unsigned long long _max; } _range; int _access; int _sync; char *_data; } _memory; } _vertexDataWrite; struct DataWrite<unsigned short> { struct BufferMemory { struct ResourceAccessor *_accessor; struct BufferData *_user; struct Range<unsigned long> { unsigned long long _min; unsigned long long _max; } _range; int _access; int _sync; char *_data; } _memory; } _indexDataWrite; unsigned char _meshIndex; unsigned short _meshVertexOffset; unsigned int _meshIndexOffset; struct MeshSetStorage *_storage; struct unique_ptr<md::MeshSetStorage, std::default_delete<md::MeshSetStorage>> { struct __compressed_pair<md::MeshSetStorage *, std::default_delete<md::MeshSetStorage>> { struct MeshSetStorage *__value_; } __ptr_; } _internalStorage; struct shared_ptr<md::MeshSetStorageClient> { struct MeshSetStorageClient *__ptr_; struct __shared_weak_count *__cntrl_; } _storageClient; } type; } _value; } _strokeMeshInfo;
    struct vector<std::shared_ptr<ggl::PolygonCommonStroke::MeshMesh>, std::allocator<std::shared_ptr<ggl::PolygonCommonStroke::MeshMesh>>> { void *__begin_; void *__end_; struct __compressed_pair<std::shared_ptr<ggl::PolygonCommonStroke::MeshMesh> *, std::allocator<std::shared_ptr<ggl::PolygonCommonStroke::MeshMesh>>> { void *__value_; } __end_cap_; } _strokeMeshes;
    struct shared_ptr<ggl::Texture2D> { struct Texture2D *__ptr_; struct __shared_weak_count *__cntrl_; } _sourceTexture;
    struct shared_ptr<ggl::Texture2D> { struct Texture2D *__ptr_; struct __shared_weak_count *__cntrl_; } _targetTexture;
    struct shared_ptr<ggl::Texture2D> { struct Texture2D *__ptr_; struct __shared_weak_count *__cntrl_; } _sourceRoofTexture;
    struct shared_ptr<ggl::Texture2D> { struct Texture2D *__ptr_; struct __shared_weak_count *__cntrl_; } _targetRoofTexture;
    unsigned char _lastResolvedZoom;
}

@property (readonly, nonatomic) struct FeatureAttributeSet { struct vector<gss::FeatureAttributePair, geo::StdAllocator<gss::FeatureAttributePair, gss::Allocator>> { struct FeatureAttributePair *x0; struct FeatureAttributePair *x1; struct __compressed_pair<gss::FeatureAttributePair *, geo::StdAllocator<gss::FeatureAttributePair, gss::Allocator>> { struct FeatureAttributePair *x0; struct StdAllocator<gss::FeatureAttributePair, gss::Allocator> { struct Allocator *x0; } x1; } x2; } x0; } styleAttributes;
@property (readonly, nonatomic) void *strokeMeshes;
@property (readonly, nonatomic) void *sourceTexture;
@property (readonly, nonatomic) void *targetTexture;
@property (readonly, nonatomic) void *sourceRoofTexture;
@property (readonly, nonatomic) void *targetRoofTexture;

- (void)willAddDataWithAccessor:(struct ResourceAccessor { void /* function */ **x0; } *)a0;
- (id)initWithStyleQuery:(void *)a0 tileZoom:(float)a1 fixedAroundCentroid:(const void *)a2 contentScale:(float)a3;
- (unsigned char)styleIndexForAttributes:(const void *)a0 edgePair:(const struct GeoCodecsFeatureStylePair { unsigned int x0; int x1; } *)a1;
- (id)initWithStyleQuery:(void *)a0 tileZoom:(float)a1 fixedAroundCentroid:(const void *)a2 contentScale:(float)a3 storage:(struct shared_ptr<md::MeshSetStorage> { struct MeshSetStorage *x0; struct __shared_weak_count *x1; })a4;
- (BOOL)addFillForSection:(const void *)a0 precision:(unsigned char)a1 styleIndex:(unsigned int)a2 cullingMask:(unsigned int)a3 accessor:(struct ResourceAccessor { void /* function */ **x0; } *)a4 triangulator:(void *)a5;
- (void)didFinishAddingData;
- (id).cxx_construct;
- (unsigned char)initialStyleIndexForSection:(const void *)a0 attributes:(const void *)a1 styles:(const void *)a2;
- (void)updateTextures:(unsigned char)a0 textureManager:(void *)a1;
- (void)prepareForPolygon:(void *)a0 withRounder:(struct PolygonRound { float x0; float x1; float x2; float x3; float x4; } *)a1;
- (void)enclosePointsInBoundingBox:(const void *)a0 count:(unsigned long long)a1;
- (void)addStrokeForSection:(const void *)a0 paddedCount:(unsigned int)a1 key:(struct pair<const void *, unsigned long> { void *x0; unsigned long long x1; })a2 attributes:(const void *)a3 styles:(void *)a4 cullingMask:(unsigned int)a5 accessor:(struct ResourceAccessor { void /* function */ **x0; } *)a6;
- (unsigned int)createStrokePointStyleList:(void *)a0 section:(unsigned long long)a1 outPointStyles:(void *)a2 withRounder:(struct PolygonRound { float x0; float x1; float x2; float x3; float x4; } *)a3;
- (void)prepareToStrokeSection:(const void *)a0 key:(const void *)a1 styles:(void *)a2 paddedCount:(unsigned int)a3;
- (struct shared_ptr<ggl::Texture2D> { struct Texture2D *x0; struct __shared_weak_count *x1; })_textureForName:(const void *)a0 textureManager:(void *)a1;
- (void)setNeedsTextureUpdate;
- (void)prepareToFillSection:(const void *)a0;
- (void).cxx_destruct;
- (void)updateTexturesIfNecessary:(float)a0 textureManager:(void *)a1;
- (void)addPolygon:(void *)a0 accessor:(struct ResourceAccessor { void /* function */ **x0; } *)a1 triangulator:(void *)a2 withRounder:(struct PolygonRound { float x0; float x1; float x2; float x3; float x4; } *)a3;

@end
