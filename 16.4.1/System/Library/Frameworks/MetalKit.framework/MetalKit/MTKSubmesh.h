@class MTKMeshBuffer, MTKMesh, NSString;

@interface MTKSubmesh : NSObject

@property (readonly, nonatomic) unsigned long long primitiveType;
@property (readonly, nonatomic) unsigned long long indexType;
@property (readonly, nonatomic) MTKMeshBuffer *indexBuffer;
@property (readonly, nonatomic) unsigned long long indexCount;
@property (readonly, weak, nonatomic) MTKMesh *mesh;
@property (copy, nonatomic) NSString *name;

- (void).cxx_destruct;
- (id)initWithMesh:(id)a0 submesh:(id)a1 device:(id)a2 error:(id *)a3;

@end
