@class TSCH3Dvec3DataBuffer;

@interface TSCH3DGeometry : NSObject {
    TSCH3Dvec3DataBuffer *_vertexBuffer;
    TSCH3Dvec3DataBuffer *_normalBuffer;
    int _numVertices;
    struct box<glm::detail::tvec3<float>> { struct tvec3<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; } _min; struct tvec3<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; } _max; } _geometryBounds;
}

@property (readonly, nonatomic) struct box<glm::detail::tvec3<float>> { struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } x0; struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } x1; } geometryBounds;

+ (id)geometry;

- (id).cxx_construct;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (id)vertexBuffer;
- (int)numVertices;
- (id)normalBuffer;
- (void)allocateArrays:(int)a0;
- (unsigned int)capCount;
- (unsigned int)capOffset;
- (id)elementsBoundsPositions;
- (int)geometryCount;
- (unsigned int)geometryOffset;
- (void *)normalArray;
- (void *)normalArrayPointer;
- (id)selectionKnobPositions;
- (void)transformArrays:(const void *)a0;
- (void *)vertexArray;
- (void *)vertexArrayPointer;

@end
