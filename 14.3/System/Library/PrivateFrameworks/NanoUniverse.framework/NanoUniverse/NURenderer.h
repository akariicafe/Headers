@class NSBundle;
@protocol MTLRenderPipelineState, MTLDevice, MTLBuffer;

@interface NURenderer : NSObject {
    id<MTLDevice> _mtlDevice;
    NSBundle *_bundle;
    struct NURendererResources { id<MTLRenderPipelineState> pipelines[3]; id<MTLBuffer> vertexBuffer; id<MTLBuffer> indexBuffer; } _resources;
    unsigned long long _viewMtlPixelFormat;
    struct _NUGeometryRange { int start; int count; } _octahedronGeomRange;
    struct _NUGeometryRange { int start; int count; } _quadGeomRange;
}

+ (void)_deallocInstance;
+ (id)sharedInstanceWithPixelFormat:(unsigned long long)a0;

- (void).cxx_destruct;
- (id)initWithPixelFormat:(unsigned long long)a0;
- (void)dealloc;
- (void)_asyncDeallocInstance;
- (void)renderWithScene:(id)a0 viewport:(struct NUViewport { int x0; int x1; int x2; int x3; })a1 resources:(id)a2 encoder:(id)a3;
- (void)_initPrograms;
- (void)_initHemi;
- (void)_initDepthStencilState;
- (void)bindAssetArt:(unsigned long long)a0 withEncoder:(id)a1 resources:(id)a2 toSlot:(unsigned long long)a3;
- (void)drawSpriteWithEncoder:(id)a0 state:(const struct NURendererState { struct NUViewport { int x0; int x1; int x2; int x3; } x0; unsigned long long x1; unsigned long long x2; float x3; struct _NUGeometryRange { int x0; int x1; } x4; struct _NUGeometryRange { int x0; int x1; } x5; union float4x4 { float x0[16]; float x1[4][4]; void /* unknown type, empty encoding */ x2[4]; } x6; union float4x4 { float x0[16]; float x1[4][4]; void /* unknown type, empty encoding */ x2[4]; } x7; union float4x4 { float x0[16]; float x1[4][4]; void /* unknown type, empty encoding */ x2[4]; } x8; } *)a1 spheroid:(id)a2 resources:(id)a3;
- (void)draw3DWithEncoder:(id)a0 state:(const struct NURendererState { struct NUViewport { int x0; int x1; int x2; int x3; } x0; unsigned long long x1; unsigned long long x2; float x3; struct _NUGeometryRange { int x0; int x1; } x4; struct _NUGeometryRange { int x0; int x1; } x5; union float4x4 { float x0[16]; float x1[4][4]; void /* unknown type, empty encoding */ x2[4]; } x6; union float4x4 { float x0[16]; float x1[4][4]; void /* unknown type, empty encoding */ x2[4]; } x7; union float4x4 { float x0[16]; float x1[4][4]; void /* unknown type, empty encoding */ x2[4]; } x8; } *)a1 spheroid:(id)a2 resources:(id)a3;
- (void)_createPipelineForProgramType:(unsigned long long)a0 fromLibrary:(id)a1 librarySPI:(id)a2;

@end
