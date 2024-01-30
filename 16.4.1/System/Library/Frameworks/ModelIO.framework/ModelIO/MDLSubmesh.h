@class MDLMaterial, NSArray, MDLSubmeshTopology, NSString;
@protocol MDLMeshBuffer, MDLMeshBufferAllocator;

@interface MDLSubmesh : NSObject <MDLNamed> {
    id<MDLMeshBufferAllocator> _allocator;
}

@property (retain, nonatomic) NSArray *faceIndexing;
@property (readonly, retain, nonatomic) id<MDLMeshBuffer> indexBuffer;
@property (readonly, nonatomic) unsigned long long indexCount;
@property (readonly, nonatomic) unsigned long long indexType;
@property (readonly, nonatomic) long long geometryType;
@property (retain, nonatomic) MDLMaterial *material;
@property (retain, nonatomic) MDLSubmeshTopology *topology;
@property (copy, nonatomic) NSString *name;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 indexBuffer:(id)a1 indexCount:(unsigned long long)a2 indexType:(unsigned long long)a3 geometryType:(long long)a4 material:(id)a5 topology:(id)a6;
- (id)initWithIndexBuffer:(id)a0 indexCount:(unsigned long long)a1 indexType:(unsigned long long)a2 geometryType:(long long)a3 material:(id)a4;
- (struct MDLAABB { })boundingBoxForMesh:(id)a0;
- (void)debugPrintToFile:(struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *)a0;
- (id)indexBufferAsIndexType:(unsigned long long)a0;
- (id)initWithMDLSubmesh:(id)a0 indexType:(unsigned long long)a1 geometryType:(long long)a2;
- (id)initWithName:(id)a0 indexBuffer:(id)a1 indexCount:(unsigned long long)a2 indexType:(unsigned long long)a3 faceIndexing:(id)a4 geometryType:(long long)a5 material:(id)a6 topology:(id)a7;
- (id)initWithName:(id)a0 indexBuffer:(id)a1 indexCount:(unsigned long long)a2 indexType:(unsigned long long)a3 geometryType:(long long)a4 material:(id)a5;

@end
