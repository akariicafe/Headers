@class TSCH3DNormalDirectionMapper;

@interface TSCH3DTexCoordGeneration : NSObject {
    struct tmat4x4<float> { struct tvec4<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; union { float w; float a; float q; } ; } value[4]; } mTransform;
}

@property (retain, nonatomic) TSCH3DNormalDirectionMapper *normalDirectionMapper;

- (id)init;
- (void)dealloc;
- (id)initWithTransform:(const struct tmat4x4<float> { struct tvec4<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; union { float x0; float x1; float x2; } x3; } x0[4]; } *)a0;
- (id).cxx_construct;

@end
