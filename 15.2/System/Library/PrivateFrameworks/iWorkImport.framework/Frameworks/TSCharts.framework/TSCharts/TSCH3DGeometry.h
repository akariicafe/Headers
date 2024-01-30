@class TSCH3Dvec3DataBuffer;

@interface TSCH3DGeometry : NSObject {
    TSCH3Dvec3DataBuffer *_vertexBuffer;
    TSCH3Dvec3DataBuffer *_normalBuffer;
    int _numVertices;
    struct box<glm::detail::tvec3<float>> { struct tvec3<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; } _min; struct tvec3<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; } _max; } _geometryBounds;
}

@property (readonly, nonatomic) struct box<glm::detail::tvec3<float>> { struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } x0; struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } x1; } geometryBounds;

+ (id)geometry;

- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (id).cxx_construct;
- (id)vertexBuffer;
- (int)numVertices;
- (unsigned int)capOffset;
- (id)normalBuffer;
- (unsigned int)geometryOffset;
- (int)geometryCount;
- (unsigned int)capCount;
- (void *)vertexArray;
- (void)transformArrays:(const void *)a0;
- (id)selectionKnobPositions;
- (void *)normalArray;
- (void *)vertexArrayPointer;
- (void *)normalArrayPointer;
- (void)allocateArrays:(int)a0;
- (id)elementsBoundsPositions;

@end
