@class NUNIClassicResourceManager, NUNIClassicTextureGroup;
@protocol MTLRenderPipelineState, MTLDevice, MTLBuffer;

@interface NUNIClassicRenderer : NUNIRenderer {
    struct NUNIClassicRendererResources { id<MTLRenderPipelineState> pipelines[4]; id<MTLBuffer> vertexBuffer; id<MTLBuffer> indexBuffer; } _resources;
    struct NUNIClassicGeometryRange { int start; int count; } _octahedronGeomRange;
    struct NUNIClassicGeometryRange { int start; int count; } _quadGeomRange;
    struct NUNIClassicRendererState { struct NUNIViewport { int width; int height; } viewport; unsigned long long projectionType; unsigned long long collectionType; float yearsSince1970; float cameraRoll; struct NUNIClassicGeometryRange { int start; int count; } octGeomRange; struct NUNIClassicGeometryRange { int start; int count; } quadGeomRange; void /* unknown type, empty encoding */ cameraPosition; void /* unknown type, empty encoding */ cameraTarget; void /* unknown type, empty encoding */ cameraUp; void /* unknown type, empty encoding */ cameraLeft; void /* unknown type, empty encoding */ cameraForward; struct { void /* unknown type, empty encoding */ columns[4]; } cameraProj; struct { void /* unknown type, empty encoding */ columns[4]; } cameraView; struct { void /* unknown type, empty encoding */ columns[4]; } cameraProjView; } _state;
    NUNIClassicResourceManager *_resourceManager;
}

@property (readonly, nonatomic) struct NUNIClassicRendererResources { id x0[4]; id x1; id x2; } *resources;
@property (readonly, nonatomic) NUNIClassicTextureGroup *textureGroup;
@property (readonly, nonatomic) id<MTLDevice> mtlDevice;

- (void)discard;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_updateStateWithScene:(id)a0 viewport:(struct NUNIViewport { int x0; int x1; })a1;
- (void)_createPipelineForProgramType:(unsigned long long)a0 fromLibrary:(id)a1 librarySPI:(id)a2;
- (void)_initHemi;
- (void)_initPrograms;
- (void)bindAssetArt:(unsigned long long)a0 renderEncoder:(id)a1 toSlot:(unsigned long long)a2;
- (void)draw3DWithEncoder:(id)a0 state:(const struct NUNIClassicRendererState { struct NUNIViewport { int x0; int x1; } x0; unsigned long long x1; unsigned long long x2; float x3; float x4; struct NUNIClassicGeometryRange { int x0; int x1; } x5; struct NUNIClassicGeometryRange { int x0; int x1; } x6; struct { void /* unknown type, empty encoding */ x0[4]; } x7; struct { void /* unknown type, empty encoding */ x0[4]; } x8; struct { void /* unknown type, empty encoding */ x0[4]; } x9; } *)a1 spheroid:(id)a2;
- (void)drawOffscreen3DWithCommandBuffer:(id)a0 state:(const struct NUNIClassicRendererState { struct NUNIViewport { int x0; int x1; } x0; unsigned long long x1; unsigned long long x2; float x3; float x4; struct NUNIClassicGeometryRange { int x0; int x1; } x5; struct NUNIClassicGeometryRange { int x0; int x1; } x6; struct { void /* unknown type, empty encoding */ x0[4]; } x7; struct { void /* unknown type, empty encoding */ x0[4]; } x8; struct { void /* unknown type, empty encoding */ x0[4]; } x9; } *)a1 spheroid:(id)a2;
- (void)drawSpriteWithEncoder:(id)a0 state:(const struct NUNIClassicRendererState { struct NUNIViewport { int x0; int x1; } x0; unsigned long long x1; unsigned long long x2; float x3; float x4; struct NUNIClassicGeometryRange { int x0; int x1; } x5; struct NUNIClassicGeometryRange { int x0; int x1; } x6; struct { void /* unknown type, empty encoding */ x0[4]; } x7; struct { void /* unknown type, empty encoding */ x0[4]; } x8; struct { void /* unknown type, empty encoding */ x0[4]; } x9; } *)a1 spheroid:(id)a2;
- (id)initWithPixelFormat:(unsigned long long)a0 textureSuffix:(id)a1 rendererStyle:(unsigned long long)a2;
- (void)renderOffscreenWithScene:(id)a0 viewport:(struct NUNIViewport { int x0; int x1; })a1 commandBuffer:(id)a2;
- (void)renderWithScene:(id)a0 viewport:(struct NUNIViewport { int x0; int x1; })a1 commandBuffer:(id)a2 passDescriptor:(id)a3;

@end
