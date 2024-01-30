@class MDLVertexDescriptor, NSMutableArray, NSString;

@interface GLKMesh : NSObject

@property (readonly, nonatomic) unsigned long long vertexCount;
@property (readonly, nonatomic) NSMutableArray *vertexBuffers;
@property (readonly, nonatomic) MDLVertexDescriptor *vertexDescriptor;
@property (readonly, nonatomic) NSMutableArray *submeshes;
@property (readonly, nonatomic) NSString *name;

+ (void)_createMeshesFromObject:(id)a0 newMeshes:(id)a1 sourceMeshes:(id)a2 error:(id *)a3;
+ (id)newMeshesFromAsset:(id)a0 sourceMeshes:(id *)a1 error:(id *)a2;

- (void).cxx_destruct;
- (id)initWithMesh:(id)a0 error:(id *)a1;

@end
