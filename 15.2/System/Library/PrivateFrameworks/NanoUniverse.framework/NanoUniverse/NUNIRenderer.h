@class NSBundle, CLKUIMetalResourcePool;
@protocol MTLDevice, MTLTexture, MTLRenderPipelineState, MTLBuffer;

@interface NUNIRenderer : NSObject {
    id<MTLDevice> _mtlDevice;
    NSBundle *_bundle;
    struct NUNIRendererResources { id<MTLRenderPipelineState> pipelines[5]; id<MTLBuffer> vertexBuffer; id<MTLBuffer> indexBuffer; } _resources;
    unsigned long long _viewMtlPixelFormat;
    struct _NUNIGeometryRange { int start; int count; } _octahedronGeomRange;
    struct _NUNIGeometryRange { int start; int count; } _quadGeomRange;
    union float4x4 { float m[16]; float d[4][4]; void /* unknown type, empty encoding */ v[4]; } _globeLinesMatrix;
    CLKUIMetalResourcePool *_globeLineTextureResourcePool;
    id<MTLTexture> _globeLinesCurrentTexture;
    struct NUNIRendererState { struct NUNIViewport { int x; int y; int width; int height; } viewport; unsigned long long projectionType; unsigned long long collectionType; float yearsSince1970; float cameraRoll; struct _NUNIGeometryRange { int start; int count; } octGeomRange; struct _NUNIGeometryRange { int start; int count; } quadGeomRange; void /* unknown type, empty encoding */ cameraPosition; void /* unknown type, empty encoding */ cameraTarget; void /* unknown type, empty encoding */ cameraUp; void /* unknown type, empty encoding */ cameraLeft; void /* unknown type, empty encoding */ cameraForward; union float4x4 { float m[16]; float d[4][4]; void /* unknown type, empty encoding */ v[4]; } cameraProj; union float4x4 { float m[16]; float d[4][4]; void /* unknown type, empty encoding */ v[4]; } cameraView; union float4x4 { float m[16]; float d[4][4]; void /* unknown type, empty encoding */ v[4]; } cameraProjView; } _state;
}

+ (id)sharedInstanceWithPixelFormat:(unsigned long long)a0;
+ (void)_deallocInstanceWithPixelFormat:(unsigned long long)a0;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithPixelFormat:(unsigned long long)a0;
- (void)_asyncDeallocInstance;
- (void)renderOffscreenWithScene:(id)a0 viewport:(struct NUNIViewport { int x0; int x1; int x2; int x3; })a1 resources:(id)a2 commandBuffer:(id)a3;
- (void)renderWithScene:(id)a0 viewport:(struct NUNIViewport { int x0; int x1; int x2; int x3; })a1 resources:(id)a2 encoder:(id)a3;
- (void)_initPrograms;
- (void)_initHemi;
- (void)_initDepthStencilState;
- (void)bindAssetArt:(unsigned long long)a0 withEncoder:(id)a1 resources:(id)a2 toSlot:(unsigned long long)a3;
- (id)_renderGlobeLinesWithCommandBuffer:(id)a0 state:(const struct NUNIRendererState { struct NUNIViewport { int x0; int x1; int x2; int x3; } x0; unsigned long long x1; unsigned long long x2; float x3; float x4; struct _NUNIGeometryRange { int x0; int x1; } x5; struct _NUNIGeometryRange { int x0; int x1; } x6; union float4x4 { float x0[16]; float x1[4][4]; void /* unknown type, empty encoding */ x2[4]; } x7; union float4x4 { float x0[16]; float x1[4][4]; void /* unknown type, empty encoding */ x2[4]; } x8; union float4x4 { float x0[16]; float x1[4][4]; void /* unknown type, empty encoding */ x2[4]; } x9; } *)a1 spheroid:(id)a2 resources:(id)a3;
- (void)drawSpriteWithEncoder:(id)a0 state:(const struct NUNIRendererState { struct NUNIViewport { int x0; int x1; int x2; int x3; } x0; unsigned long long x1; unsigned long long x2; float x3; float x4; struct _NUNIGeometryRange { int x0; int x1; } x5; struct _NUNIGeometryRange { int x0; int x1; } x6; union float4x4 { float x0[16]; float x1[4][4]; void /* unknown type, empty encoding */ x2[4]; } x7; union float4x4 { float x0[16]; float x1[4][4]; void /* unknown type, empty encoding */ x2[4]; } x8; union float4x4 { float x0[16]; float x1[4][4]; void /* unknown type, empty encoding */ x2[4]; } x9; } *)a1 spheroid:(id)a2 resources:(id)a3;
- (void)draw3DWithEncoder:(id)a0 state:(const struct NUNIRendererState { struct NUNIViewport { int x0; int x1; int x2; int x3; } x0; unsigned long long x1; unsigned long long x2; float x3; float x4; struct _NUNIGeometryRange { int x0; int x1; } x5; struct _NUNIGeometryRange { int x0; int x1; } x6; union float4x4 { float x0[16]; float x1[4][4]; void /* unknown type, empty encoding */ x2[4]; } x7; union float4x4 { float x0[16]; float x1[4][4]; void /* unknown type, empty encoding */ x2[4]; } x8; union float4x4 { float x0[16]; float x1[4][4]; void /* unknown type, empty encoding */ x2[4]; } x9; } *)a1 spheroid:(id)a2 resources:(id)a3;
- (void)_updateStateWithScene:(id)a0 viewport:(struct NUNIViewport { int x0; int x1; int x2; int x3; })a1 resources:(id)a2;
- (void)drawOffscreen3DWithCommandBuffer:(id)a0 state:(const struct NUNIRendererState { struct NUNIViewport { int x0; int x1; int x2; int x3; } x0; unsigned long long x1; unsigned long long x2; float x3; float x4; struct _NUNIGeometryRange { int x0; int x1; } x5; struct _NUNIGeometryRange { int x0; int x1; } x6; union float4x4 { float x0[16]; float x1[4][4]; void /* unknown type, empty encoding */ x2[4]; } x7; union float4x4 { float x0[16]; float x1[4][4]; void /* unknown type, empty encoding */ x2[4]; } x8; union float4x4 { float x0[16]; float x1[4][4]; void /* unknown type, empty encoding */ x2[4]; } x9; } *)a1 spheroid:(id)a2 resources:(id)a3;
- (void)_createPipelineForProgramType:(unsigned long long)a0 fromLibrary:(id)a1 librarySPI:(id)a2;

@end
