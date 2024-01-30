@protocol MTLBuffer, MTLDevice;

@interface ARMeshChunk : NSObject {
    id<MTLDevice> _device;
}

@property (nonatomic) struct ChunkMesh { struct Matrix<short, 3U, 1U, false> { short m_data[3]; } chunk_position; struct TriMesh<float, unsigned int> { struct vector<cva::Matrix<float, 3, 1, false>, std::allocator<cva::Matrix<float, 3, 1, false>>> { void *__begin_; void *__end_; struct __compressed_pair<cva::Matrix<float, 3, 1, false> *, std::allocator<cva::Matrix<float, 3, 1, false>>> { void *__value_; } __end_cap_; } vertices; struct vector<cva::Matrix<float, 3, 1, false>, std::allocator<cva::Matrix<float, 3, 1, false>>> { void *__begin_; void *__end_; struct __compressed_pair<cva::Matrix<float, 3, 1, false> *, std::allocator<cva::Matrix<float, 3, 1, false>>> { void *__value_; } __end_cap_; } colors; struct vector<cva::Matrix<float, 3, 1, false>, std::allocator<cva::Matrix<float, 3, 1, false>>> { void *__begin_; void *__end_; struct __compressed_pair<cva::Matrix<float, 3, 1, false> *, std::allocator<cva::Matrix<float, 3, 1, false>>> { void *__value_; } __end_cap_; } normals; struct vector<cva::Matrix<unsigned int, 3, 1, false>, std::allocator<cva::Matrix<unsigned int, 3, 1, false>>> { void *__begin_; void *__end_; struct __compressed_pair<cva::Matrix<unsigned int, 3, 1, false> *, std::allocator<cva::Matrix<unsigned int, 3, 1, false>>> { void *__value_; } __end_cap_; } faces; struct vector<cva::Matrix<unsigned int, 2, 1, false>, std::allocator<cva::Matrix<unsigned int, 2, 1, false>>> { void *__begin_; void *__end_; struct __compressed_pair<cva::Matrix<unsigned int, 2, 1, false> *, std::allocator<cva::Matrix<unsigned int, 2, 1, false>>> { void *__value_; } __end_cap_; } edges; struct vector<cva::Matrix<float, 2, 1, false>, std::allocator<cva::Matrix<float, 2, 1, false>>> { void *__begin_; void *__end_; struct __compressed_pair<cva::Matrix<float, 2, 1, false> *, std::allocator<cva::Matrix<float, 2, 1, false>>> { void *__value_; } __end_cap_; } tex_coords; struct vector<cva::Matrix<unsigned int, 3, 1, false>, std::allocator<cva::Matrix<unsigned int, 3, 1, false>>> { void *__begin_; void *__end_; struct __compressed_pair<cva::Matrix<unsigned int, 3, 1, false> *, std::allocator<cva::Matrix<unsigned int, 3, 1, false>>> { void *__value_; } __end_cap_; } tex_faces; } mesh; } chunkMesh;
@property (nonatomic) struct vector<unsigned char, std::allocator<unsigned char>> { char *__begin_; char *__end_; struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> { char *__value_; } __end_cap_; } semanticsVector;
@property (nonatomic) double voxelSize;
@property (nonatomic) void /* unknown type, empty encoding */ chunkID;
@property (retain, nonatomic) id<MTLBuffer> vertices;
@property (retain, nonatomic) id<MTLBuffer> normals;
@property (retain, nonatomic) id<MTLBuffer> faces;
@property (retain, nonatomic) id<MTLBuffer> edges;
@property (retain, nonatomic) id<MTLBuffer> semantics;
@property (nonatomic) unsigned int numVertices;
@property (nonatomic) unsigned int numNormals;
@property (nonatomic) unsigned int numFaces;
@property (nonatomic) unsigned int numEdges;
@property (nonatomic) unsigned int numSemantics;
@property (nonatomic) double timestamp;

- (id).cxx_construct;
- (id)identifier;
- (long long)vertexCount;
- (long long)faceCount;
- (void).cxx_destruct;
- (id)chunkIdentifier;
- (void)addSemantics:(const char *)a0 count:(unsigned int)a1 size:(unsigned int)a2;
- (id)anchorForReferenceOriginTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a0;
- (unsigned long long)chunkIdFromPosition;
- (void)convertToWorldSourceFromVisionSource:(id)a0 relativeTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a1 rotationOnly:(BOOL)a2;
- (id)initWithChunk:(struct ChunkMesh { struct Matrix<short, 3U, 1U, false> { short x0[3]; } x0; struct TriMesh<float, unsigned int> { struct vector<cva::Matrix<float, 3, 1, false>, std::allocator<cva::Matrix<float, 3, 1, false>>> { void *x0; void *x1; struct __compressed_pair<cva::Matrix<float, 3, 1, false> *, std::allocator<cva::Matrix<float, 3, 1, false>>> { void *x0; } x2; } x0; struct vector<cva::Matrix<float, 3, 1, false>, std::allocator<cva::Matrix<float, 3, 1, false>>> { void *x0; void *x1; struct __compressed_pair<cva::Matrix<float, 3, 1, false> *, std::allocator<cva::Matrix<float, 3, 1, false>>> { void *x0; } x2; } x1; struct vector<cva::Matrix<float, 3, 1, false>, std::allocator<cva::Matrix<float, 3, 1, false>>> { void *x0; void *x1; struct __compressed_pair<cva::Matrix<float, 3, 1, false> *, std::allocator<cva::Matrix<float, 3, 1, false>>> { void *x0; } x2; } x2; struct vector<cva::Matrix<unsigned int, 3, 1, false>, std::allocator<cva::Matrix<unsigned int, 3, 1, false>>> { void *x0; void *x1; struct __compressed_pair<cva::Matrix<unsigned int, 3, 1, false> *, std::allocator<cva::Matrix<unsigned int, 3, 1, false>>> { void *x0; } x2; } x3; struct vector<cva::Matrix<unsigned int, 2, 1, false>, std::allocator<cva::Matrix<unsigned int, 2, 1, false>>> { void *x0; void *x1; struct __compressed_pair<cva::Matrix<unsigned int, 2, 1, false> *, std::allocator<cva::Matrix<unsigned int, 2, 1, false>>> { void *x0; } x2; } x4; struct vector<cva::Matrix<float, 2, 1, false>, std::allocator<cva::Matrix<float, 2, 1, false>>> { void *x0; void *x1; struct __compressed_pair<cva::Matrix<float, 2, 1, false> *, std::allocator<cva::Matrix<float, 2, 1, false>>> { void *x0; } x2; } x5; struct vector<cva::Matrix<unsigned int, 3, 1, false>, std::allocator<cva::Matrix<unsigned int, 3, 1, false>>> { void *x0; void *x1; struct __compressed_pair<cva::Matrix<unsigned int, 3, 1, false> *, std::allocator<cva::Matrix<unsigned int, 3, 1, false>>> { void *x0; } x2; } x6; } x1; })a0 device:(id)a1 timestamp:(double)a2 voxelSize:(double)a3;

@end
