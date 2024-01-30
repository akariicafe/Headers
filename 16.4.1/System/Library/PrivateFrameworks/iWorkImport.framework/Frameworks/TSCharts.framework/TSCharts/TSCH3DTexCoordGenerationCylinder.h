@interface TSCH3DTexCoordGenerationCylinder : TSCH3DTexCoordGeneration {
    struct box<glm::detail::tvec3<float>> { struct tvec3<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; } _min; struct tvec3<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; } _max; } _bbox;
}

+ (id)generatorWithBBox:(const void *)a0;
+ (id)generatorWithBBox:(const void *)a0 transform:(const void *)a1;

- (id).cxx_construct;
- (void)generateFromVertexArray:(const void *)a0 normalArray:(const void *)a1 numVertices:(long long)a2 destination4D:(void *)a3;
- (id)initWithBBox:(const void *)a0;
- (id)initWithBBox:(const void *)a0 transform:(const void *)a1;

@end
