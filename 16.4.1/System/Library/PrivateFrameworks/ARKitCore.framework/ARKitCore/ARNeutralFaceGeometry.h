@interface ARNeutralFaceGeometry : NSObject {
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__begin_; void *__end_; struct __compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__value_; } __end_cap_; } _verticesVector;
    struct vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> { void *__begin_; void *__end_; struct __compressed_pair<float * __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> { void *__value_; } __end_cap_; } _texCoordinatesVector;
    struct vector<short, std::allocator<short>> { short *__begin_; short *__end_; struct __compressed_pair<short *, std::allocator<short>> { short *__value_; } __end_cap_; } _trianglesIndicesVector;
}

+ (id)sharedNeutralGeometry;

- (id).cxx_construct;
- (unsigned long long)vertexCount;
- (const void *)textureCoordinates;
- (void).cxx_destruct;
- (unsigned long long)triangleCount;
- (const void *)vertices;
- (const short *)triangleIndices;
- (id)initFromCVAFaceTrackingSemantics;
- (unsigned long long)textureCoordinateCount;

@end
