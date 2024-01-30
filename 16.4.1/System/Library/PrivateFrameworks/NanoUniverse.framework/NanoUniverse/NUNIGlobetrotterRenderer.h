@class CLKUIMetalResourcePool;
@protocol MTLTexture;

@interface NUNIGlobetrotterRenderer : NUNIClassicRenderer {
    struct { void /* unknown type, empty encoding */ columns[4]; } _globeLinesMatrix;
    CLKUIMetalResourcePool *_globeLineTextureResourcePool;
    id<MTLTexture> _globeLinesCurrentTexture;
}

- (void).cxx_destruct;
- (void)_createPipelineForProgramType:(unsigned long long)a0 fromLibrary:(id)a1 librarySPI:(id)a2;
- (void)_initPrograms;
- (id)_renderGlobeLinesWithCommandBuffer:(id)a0 state:(const struct NUNIClassicRendererState { struct NUNIViewport { int x0; int x1; } x0; unsigned long long x1; unsigned long long x2; float x3; float x4; struct NUNIClassicGeometryRange { int x0; int x1; } x5; struct NUNIClassicGeometryRange { int x0; int x1; } x6; struct { void /* unknown type, empty encoding */ x0[4]; } x7; struct { void /* unknown type, empty encoding */ x0[4]; } x8; struct { void /* unknown type, empty encoding */ x0[4]; } x9; } *)a1 spheroid:(id)a2;
- (void)draw3DWithEncoder:(id)a0 state:(const struct NUNIClassicRendererState { struct NUNIViewport { int x0; int x1; } x0; unsigned long long x1; unsigned long long x2; float x3; float x4; struct NUNIClassicGeometryRange { int x0; int x1; } x5; struct NUNIClassicGeometryRange { int x0; int x1; } x6; struct { void /* unknown type, empty encoding */ x0[4]; } x7; struct { void /* unknown type, empty encoding */ x0[4]; } x8; struct { void /* unknown type, empty encoding */ x0[4]; } x9; } *)a1 spheroid:(id)a2;
- (void)drawOffscreen3DWithCommandBuffer:(id)a0 state:(const struct NUNIClassicRendererState { struct NUNIViewport { int x0; int x1; } x0; unsigned long long x1; unsigned long long x2; float x3; float x4; struct NUNIClassicGeometryRange { int x0; int x1; } x5; struct NUNIClassicGeometryRange { int x0; int x1; } x6; struct { void /* unknown type, empty encoding */ x0[4]; } x7; struct { void /* unknown type, empty encoding */ x0[4]; } x8; struct { void /* unknown type, empty encoding */ x0[4]; } x9; } *)a1 spheroid:(id)a2;

@end
