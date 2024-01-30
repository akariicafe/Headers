@class MDLVertexDescriptor, NSArray, NSMutableArray;
@protocol MDLMeshBufferAllocator;

@interface MDLMesh : MDLObject {
    NSMutableArray *_submeshes;
    NSMutableArray *_vertexBuffers;
    MDLVertexDescriptor *_vertexDescriptor;
    struct MDLAABB { void /* unknown type, empty encoding */ maxBounds; void /* unknown type, empty encoding */ minBounds; } _bounds;
    NSArray *_controlNodes;
}

@property (nonatomic) unsigned long long subdivisionScheme;
@property (readonly, nonatomic) struct { } boundingBox;
@property (copy, nonatomic) MDLVertexDescriptor *vertexDescriptor;
@property (nonatomic) unsigned long long vertexCount;
@property (retain, nonatomic) NSArray *vertexBuffers;
@property (copy, nonatomic) NSMutableArray *submeshes;
@property (readonly, retain, nonatomic) id<MDLMeshBufferAllocator> allocator;

+ (id)newEllipticalConeWithHeight:(SEL)a0 radii:(float)a1 radialSegments:(unsigned long long)a2 verticalSegments:(unsigned long long)a3 geometryType:(long long)a4 inwardNormals:(BOOL)a5 allocator:(id)a6;
+ (id)newBoxWithDimensions:(id)a0 segments:(SEL)a1 geometryType:(long long)a2 inwardNormals:(BOOL)a3 allocator:(id)a4;
+ (id)newIcosahedronWithRadius:(float)a0 inwardNormals:(BOOL)a1 geometryType:(long long)a2 allocator:(id)a3;
+ (id)newIcosahedronWithRadius:(float)a0 inwardNormals:(BOOL)a1 allocator:(id)a2;
+ (id)newEllipsoidWithRadii:(SEL)a0 radialSegments:(unsigned long long)a1 verticalSegments:(unsigned long long)a2 geometryType:(long long)a3 inwardNormals:(BOOL)a4 hemisphere:(BOOL)a5 allocator:(id)a6;
+ (id)newSubdividedMesh:(id)a0 submeshIndex:(unsigned long long)a1 subdivisionLevels:(unsigned long long)a2;
+ (id)newCapsuleWithHeight:(SEL)a0 radii:(float)a1 radialSegments:(unsigned long long)a2 verticalSegments:(unsigned long long)a3 hemisphereSegments:(unsigned long long)a4 geometryType:(long long)a5 inwardNormals:(BOOL)a6 allocator:(id)a7;
+ (id)newPlaneWithDimensions:(id)a0 segments:(SEL)a1 geometryType:(long long)a2 allocator:(id)a3;
+ (id)newCylinderWithHeight:(SEL)a0 radii:(float)a1 radialSegments:(unsigned long long)a2 verticalSegments:(unsigned long long)a3 geometryType:(long long)a4 inwardNormals:(BOOL)a5 allocator:(id)a6;

- (id)initWithVertexBuffers:(id)a0 vertexCount:(unsigned long long)a1 descriptor:(id)a2 submeshes:(id)a3;
- (id)vertexAttributeDataForAttributeNamed:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)triangulate;
- (id)initWithVertexBuffer:(id)a0 vertexCount:(unsigned long long)a1 descriptor:(id)a2 submeshes:(id)a3;
- (void)addNormalsWithAttributeNamed:(id)a0 creaseThreshold:(float)a1;
- (id)vertexAttributeDataForAttributeNamed:(id)a0 asFormat:(unsigned long long)a1;
- (id)initWithBufferAllocator:(id)a0;
- (void)addAttributeWithName:(id)a0 format:(unsigned long long)a1 type:(id)a2 data:(id)a3 stride:(long long)a4;
- (id)initConeWithExtent:(id)a0 segments:(SEL)a1 inwardNormals:(BOOL)a2 cap:(BOOL)a3 geometryType:(long long)a4 allocator:(id)a5;
- (void)_createWithVertexBuffer:(id)a0 vertexCount:(unsigned long long)a1 descriptor:(id)a2 submeshes:(id)a3;
- (id)initBoxWithExtent:(id)a0 segments:(SEL)a1 inwardNormals:(BOOL)a2 geometryType:(long long)a3 allocator:(id)a4;
- (id)initIcosahedronWithExtent:(SEL)a0 inwardNormals:(BOOL)a1 geometryType:(long long)a2 allocator:(id)a3;
- (id)initHemisphereWithExtent:(id)a0 segments:(SEL)a1 inwardNormals:(BOOL)a2 cap:(BOOL)a3 geometryType:(long long)a4 allocator:(id)a5;
- (id)initSphereWithExtent:(id)a0 segments:(SEL)a1 inwardNormals:(BOOL)a2 geometryType:(long long)a3 allocator:(id)a4;
- (id)initMeshBySubdividingMesh:(id)a0 submeshIndex:(int)a1 subdivisionLevels:(unsigned int)a2 allocator:(id)a3;
- (id)initCapsuleWithExtent:(id)a0 cylinderSegments:(SEL)a1 hemisphereSegments:(unsigned long long)a2 inwardNormals:(BOOL)a3 geometryType:(long long)a4 allocator:(id)a5;
- (id)initPlaneWithExtent:(id)a0 segments:(SEL)a1 geometryType:(long long)a2 allocator:(id)a3;
- (void)addAttributeWithName:(id)a0 format:(unsigned long long)a1;
- (BOOL)makeVerticesUniqueAndReturnError:(id *)a0;
- (void)updateAttributeNamed:(id)a0 withData:(id)a1;
- (void)debugPrintToFile:(struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *)a0;
- (void)removeAttributeNamed:(id)a0;
- (void)createSourceDataVector:(void *)a0 attr:(id)a1 srcElementCount:(int)a2 dstElementCount:(int)a3;
- (void)copyDataVector:(void *)a0 toAttr:(id)a1;
- (long long)addVertexBuffer:(id)a0;
- (void)_calculateTangentBasisFromPositions:(float *)a0 positionStride:(long long)a1 positionsBufferSize:(unsigned long long)a2 normals:(float *)a3 normalStride:(long long)a4 normalsBufferSize:(unsigned long long)a5 uvs:(float *)a6 uvStride:(long long)a7 uvsBufferSize:(unsigned long long)a8 tangents:(float *)a9 tangentsStride:(long long)a10 tangentsBufferSize:(unsigned long long)a11 bitagents:(float *)a12 bitangentStride:(long long)a13 bitangentsBufferSize:(unsigned long long)a14 tangentFormat:(unsigned long long)a15 selector:(SEL)a16;
- (void)replaceAttributeNamed:(id)a0 withData:(id)a1;
- (void)_calculateFaceNormalsFromPositions:(float *)a0 positionStride:(long long)a1 normals:(float *)a2 normalStride:(long long)a3 creaseThreshold:(float)a4;
- (void)addAttributeWithName:(id)a0 format:(unsigned long long)a1 type:(id)a2 data:(id)a3 stride:(long long)a4 time:(double)a5;
- (void)addTangentBasisForTextureCoordinateAttributeNamed:(id)a0 tangentAttributeNamed:(id)a1 bitangentAttributeNamed:(id)a2;
- (void)addTangentBasisForTextureCoordinateAttributeNamed:(id)a0 normalAttributeNamed:(id)a1 tangentAttributeNamed:(id)a2;
- (void)addOrthTanBasisForTextureCoordinateAttributeNamed:(id)a0 normalAttributeNamed:(id)a1 tangentAttributeNamed:(id)a2;
- (void)addUnwrappedTextureCoordinatesForAttributeNamed:(id)a0;
- (void)flipTextureCoordinatesInAttributeNamed:(id)a0;
- (void)makeVerticesUnique;
- (void)_enumerateSubmeshesUsingBlock:(id /* block */)a0 stopPointer:(BOOL *)a1;
- (int)submeshCount;
- (void)enumerateSubmeshesUsingBlock:(id /* block */)a0;
- (id)controlNodeForINdex:(unsigned long long)a0;
- (struct { void /* unknown type, empty encoding */ x0[4]; })inverseBasePoseForIndex:(unsigned long long)a0;
- (BOOL)generateAmbientOcclusionTextureWithSize:(SEL)a0 raysPerSample:(long long)a1 attenuationFactor:(float)a2 objectsToConsider:(id)a3 vertexAttributeNamed:(id)a4 materialPropertyNamed:(id)a5;
- (BOOL)generateAmbientOcclusionVertexColorsWithRaysPerSample:(long long)a0 attenuationFactor:(float)a1 objectsToConsider:(id)a2 vertexAttributeNamed:(id)a3;
- (BOOL)generateLightMapTextureWithTextureSize:(SEL)a0 lightsToConsider:(id)a1 objectsToConsider:(id)a2 vertexAttributeNamed:(id)a3 materialPropertyNamed:(id)a4;
- (BOOL)generateAmbientOcclusionTextureWithQuality:(float)a0 attenuationFactor:(float)a1 objectsToConsider:(id)a2 vertexAttributeNamed:(id)a3 materialPropertyNamed:(id)a4;
- (BOOL)generateAmbientOcclusionVertexColorsWithQuality:(float)a0 attenuationFactor:(float)a1 objectsToConsider:(id)a2 vertexAttributeNamed:(id)a3;
- (BOOL)generateLightMapTextureWithQuality:(float)a0 lightsToConsider:(id)a1 objectsToConsider:(id)a2 vertexAttributeNamed:(id)a3 materialPropertyNamed:(id)a4;
- (BOOL)generateLightMapVertexColorsWithLightsToConsider:(id)a0 objectsToConsider:(id)a1 vertexAttributeNamed:(id)a2;
- (id)initCylinderWithExtent:(id)a0 segments:(SEL)a1 inwardNormals:(BOOL)a2 topCap:(BOOL)a3 bottomCap:(BOOL)a4 geometryType:(long long)a5 allocator:(id)a6;

@end
