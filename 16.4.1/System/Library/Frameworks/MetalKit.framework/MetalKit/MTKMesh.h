@class MDLVertexDescriptor, NSMutableArray, NSString;

@interface MTKMesh : NSObject

@property (readonly, nonatomic) NSMutableArray *vertexBuffers;
@property (readonly, nonatomic) MDLVertexDescriptor *vertexDescriptor;
@property (readonly, nonatomic) NSMutableArray *submeshes;
@property (readonly, nonatomic) unsigned long long vertexCount;
@property (copy, nonatomic) NSString *name;

+ (void)_createMeshesFromObject:(id)a0 newMeshes:(id)a1 sourceMeshes:(id)a2 device:(id)a3 error:(id *)a4;
+ (id)newMeshesFromAsset:(id)a0 device:(id)a1 sourceMeshes:(id *)a2 error:(id *)a3;

- (void).cxx_destruct;
- (id)initWithMesh:(id)a0 device:(id)a1 error:(id *)a2;

@end
