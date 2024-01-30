@class REMeshSkinningModelDescriptor, NSString, NSArray, REMeshBlendShapeModelDescriptor;

@interface REMeshModelDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSArray *partIndices;
@property (readonly, nonatomic) unsigned int skeletonCount;
@property (readonly, nonatomic) REMeshSkinningModelDescriptor *skinningModel;
@property (readonly, nonatomic) REMeshBlendShapeModelDescriptor *blendShapeModel;
@property (readonly, nonatomic) NSArray *lods;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ boundingBoxMin;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ boundingBoxMax;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (struct MeshModel { struct StringID { struct { unsigned char x0 : 1; unsigned long x1 : 63; } x0; char *x1; } x0; struct AABB { struct Vector3<float> { union { struct { float x0; float x1; float x2; } x0; float x1[3]; } x0; } x0; struct Vector3<float> { union { struct { float x0; float x1; float x2; } x0; float x1[3]; } x0; } x1; } x1; struct FixedArray<re::MeshPart> { struct Allocator *x0; unsigned long long x1; struct MeshPart *x2; } x2; struct FixedArray<re::MeshLodLevelInfo> { struct Allocator *x0; unsigned long long x1; struct MeshLodLevelInfo *x2; } x3; struct DeformationModelData { struct unique_ptr<void, std::function<void (void *)>> { struct __compressed_pair<void *, std::function<void (void *)>> { void *x0; struct function<void (void *)> { struct __value_func<void (void *)> { struct type { unsigned char x0[24]; } x0; void *x1; } x0; } x1; } x0; } x0[18]; } x4; })meshModelWithMeshModelContext:(struct MeshModelContext { id x0; struct Buffer { id x0; } x1; } *)a0 inverseBindPoseBuffers:(const void *)a1 allocator:(struct Allocator { void /* function */ **x0; char *x1; } *)a2;
- (id)initWithMeshAssetModel:(const void *)a0 inverseBindPoseAttributes:(id)a1 payloadBuilder:(void *)a2 deformationModelData:(void *)a3;
- (id)initWithName:(id)a0 partIndices:(SEL)a1 skeletonCount:(id)a2 skinningModel:(id)a3 blendShapeModel:(unsigned int)a4 lods:(id)a5 boundingBoxMin:(id)a6 boundingBoxMax:(id)a7;
- (id)initWithResourceDefinitionModel:(const void *)a0 inverseBindPoseAttributes:(id)a1 payloadBuilder:(void *)a2;
- (BOOL)validateWithPartCount:(unsigned long long)a0 payloadSize:(unsigned long long)a1 error:(id *)a2;

@end
