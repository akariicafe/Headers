@class TSCH3Dvec3DataBuffer;

@interface TSCH3DGeometry : NSObject {
    TSCH3Dvec3DataBuffer *mVertexBuffer;
    TSCH3Dvec3DataBuffer *mNormalBuffer;
    int mNumVertices;
    struct box<glm::detail::tvec3<float> > { struct tvec3<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; } mMin; struct tvec3<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; } mMax; } mGeometryBounds;
}

@property (readonly, nonatomic) struct box<glm::detail::tvec3<float> > { struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } x0; struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } x1; } geometryBounds;

+ (id)geometry;

- (id)vertexBuffer;
- (id)init;
- (void)reset;
- (void)dealloc;
- (id).cxx_construct;
- (int)numVertices;
- (id)normalBuffer;
- (unsigned int)capOffset;
- (unsigned int)geometryOffset;
- (int)geometryCount;
- (unsigned int)capCount;
- (struct vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float> > > { struct tvec3<float> *x0; struct tvec3<float> *x1; struct __compressed_pair<glm::detail::tvec3<float> *, std::__1::allocator<glm::detail::tvec3<float> > > { struct tvec3<float> *x0; } x2; } *)vertexArray;
- (void)transformArrays:(const struct tmat4x4<float> { struct tvec4<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; union { float x0; float x1; float x2; } x3; } x0[4]; } *)a0;
- (id)selectionKnobPositions;
- (struct vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float> > > { struct tvec3<float> *x0; struct tvec3<float> *x1; struct __compressed_pair<glm::detail::tvec3<float> *, std::__1::allocator<glm::detail::tvec3<float> > > { struct tvec3<float> *x0; } x2; } *)normalArray;
- (struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } *)vertexArrayPointer;
- (struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } *)normalArrayPointer;
- (void)allocateArrays:(int)a0;
- (id)elementsBoundsPositions;

@end
