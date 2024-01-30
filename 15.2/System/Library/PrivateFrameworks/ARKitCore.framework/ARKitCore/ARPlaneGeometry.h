@interface ARPlaneGeometry : NSObject <NSSecureCoding> {
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__begin_; void *__end_; struct __compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__value_; } __end_cap_; } _vertices;
    struct vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> { void *__begin_; void *__end_; struct __compressed_pair<float * __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> { void *__value_; } __end_cap_; } _textureCoordinates;
    struct vector<short, std::allocator<short>> { short *__begin_; short *__end_; struct __compressed_pair<short *, std::allocator<short>> { short *__value_; } __end_cap_; } _triangleIndices;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) void /* unknown type, empty encoding */ center;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ extent;
@property (readonly, nonatomic) unsigned long long vertexCount;
@property (readonly, nonatomic) const void *vertices;
@property (readonly, nonatomic) unsigned long long textureCoordinateCount;
@property (readonly, nonatomic) const void *textureCoordinates;
@property (readonly, nonatomic) unsigned long long triangleCount;
@property (readonly, nonatomic) const short *triangleIndices;
@property (readonly, nonatomic) unsigned long long boundaryVertexCount;
@property (readonly, nonatomic) const void *boundaryVertices;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (id)initWithBoundaryVertices:(id)a0 center:(SEL)a1 extent:(const void *)a2;
- (id)initWithVertices:(id)a0 triangleIndices:(SEL)a1 boundaryVertexCount:(const void *)a2 center:(const void *)a3 extent:(unsigned long long)a4;

@end
