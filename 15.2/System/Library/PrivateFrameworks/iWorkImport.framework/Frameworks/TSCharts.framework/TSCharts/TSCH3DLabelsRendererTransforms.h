@class TSCH3DScene, TSCH3DChartScenePropertyAccessor, TSCH3DCamera;

@interface TSCH3DLabelsRendererTransforms : NSObject {
    TSCH3DChartScenePropertyAccessor *_accessor;
    struct tmat4x4<float> { struct tvec4<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; union { float w; float a; float q; } ; } value[4]; } _projector;
    struct tmat4x4<float> { struct tvec4<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; union { float w; float a; float q; } ; } value[4]; } _unitToWorld;
    struct tmat4x4<float> { struct tvec4<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; union { float w; float a; float q; } ; } value[4]; } _stageToWorld;
    struct tmat4x4<float> { struct tvec4<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; union { float w; float a; float q; } ; } value[4]; } _worldToStage;
    struct bitset<5> { unsigned long long __first_; } _validBits;
}

@property (retain, nonatomic) TSCH3DScene *scene;
@property (retain, nonatomic) TSCH3DCamera *camera;

+ (id)transforms;

- (id)accessor;
- (struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; })samples;
- (struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; })projectPoint:(const void *)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)resetWithScene:(id)a0 camera:(id)a1;
- (const void *)unitToWorld;
- (const void *)worldToStage;
- (const void *)p_stageToWorld;
- (const void *)p_projector;

@end
