@interface TSCH3DDefaultNormalDirectionMapper : TSCH3DNormalDirectionMapper {
    struct tvec3<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; } _normalBias;
}

+ (id)mapperWithNormalBias:(const void *)a0;

- (id).cxx_construct;
- (id)initWithNormalBias:(const void *)a0;
- (void)mapFromVertexArray:(const void *)a0 normalArray:(const void *)a1 normalMatrix:(const void *)a2 numVertices:(long long)a3 destination:(void *)a4;

@end
