@interface TSCH3DLineProjector : TSCH3DProjector

@property (nonatomic) struct line<glm::detail::tvec3<float>> { struct tvec3<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; } _position; struct tvec3<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; } _direction; } line;

- (id).cxx_construct;
- (BOOL)projectPoint:(const void *)a0 returningPoint:(void *)a1;

@end
