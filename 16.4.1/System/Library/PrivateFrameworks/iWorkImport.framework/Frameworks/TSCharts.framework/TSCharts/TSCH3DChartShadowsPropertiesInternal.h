@class TSCH3DDataBufferResource, NSObject, TSCH3DCamera;
@protocol TSCH3DShadowsRenderer;

@interface TSCH3DChartShadowsPropertiesInternal : NSObject {
    struct box<glm::detail::tvec3<float>> { struct tvec3<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; } _min; struct tvec3<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; } _max; } _shadowPlanePadding;
}

@property (nonatomic) BOOL enabled;
@property (readonly, nonatomic) BOOL shadowPlaneValid;
@property (retain, nonatomic) TSCH3DCamera *camera;
@property (retain, nonatomic) TSCH3DDataBufferResource *quad;
@property (retain, nonatomic) TSCH3DDataBufferResource *texcoords;
@property (retain, nonatomic) TSCH3DDataBufferResource *fadecoords;
@property (readonly, nonatomic) NSObject<TSCH3DShadowsRenderer> *renderer;

- (id).cxx_construct;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithCamera:(id)a0 renderer:(id)a1;
- (void)setupResources;

@end
