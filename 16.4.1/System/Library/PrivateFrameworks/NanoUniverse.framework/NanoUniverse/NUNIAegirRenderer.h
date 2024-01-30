@class IOSurface, NUNIAegirTextureGroup, NUNAegirOffscreen, CALayer, NUNIAegirResourceManager, NSMutableArray;
@protocol MTLTexture, NUNIRendererOptions, MTLDevice;

@interface NUNIAegirRenderer : NUNIRenderer {
    id<MTLDevice> _device;
    BOOL _supportsMTLGPUFamilyApple6;
    NUNIAegirTextureGroup *_textureGroup;
    NSMutableArray *_renderUniformsBuffers[3];
    int _renderUniformBuffersCounts[3];
    NUNAegirOffscreen *_offscreenScenes[3];
    NUNAegirOffscreen *_offscreenBlooms;
    NUNAegirOffscreen *_offscreenPosts;
    id<MTLTexture> _contentMaskTextures[3];
    IOSurface *_contentMaskSurfaces[3];
    CALayer *_contentMaskLayer;
    unsigned long long _frame;
    struct NUNIAegirRendererState { struct NUNIViewport { int width; int height; } viewport; float cameraRoll; float aspect; float fovY; void /* unknown type, empty encoding */ cameraOffset; void /* unknown type, empty encoding */ cameraPosition; void /* unknown type, empty encoding */ cameraTarget; void /* unknown type, empty encoding */ cameraUp; void /* unknown type, empty encoding */ cameraLeft; void /* unknown type, empty encoding */ cameraForward; struct { void /* unknown type, empty encoding */ columns[4]; } cameraLookAt; struct { void /* unknown type, empty encoding */ columns[4]; } cameraView; struct { void /* unknown type, empty encoding */ columns[4]; } cameraProjView; } _state;
    struct NUNIAegirRenderUniforms { void /* unknown type, empty encoding */ sprite; void /* unknown type, empty encoding */ sphere; void /* unknown type, empty encoding */ lightDirection; struct { void /* unknown type, empty encoding */ columns[3]; } lookModelInverseMatrixFull; void /* unknown type, empty encoding */ lookModelPositionFull; struct { void /* unknown type, empty encoding */ columns[3]; } lookModelInverseMatrix; void /* unknown type, empty encoding */ lookModelPosition; struct { void /* unknown type, empty encoding */ columns[4]; } viewModelInverseMatrix; struct { void /* unknown type, empty encoding */ columns[4]; } viewModelMatrix; struct { void /* unknown type, empty encoding */ columns[4]; } projectionViewModelMatrix; void /* unknown type, empty encoding */ offset; void /* unknown type, empty encoding */ aspect; float invResolution; float nearPlane; float opacity; float falloff; float falloffOverrideOpacity; float sunExpMin; float sunExpRange; float sunDistanceSqr; float sunEquatorialRadiusSqr; float sunGlowRadiusScale; float sunDistance; float sunEquatorialRadius; float floorRadiusSqr; float cloudHiRadiusSqr; float cloudMdRadiusSqr; float cloudLoRadiusSqr; float cloudAltitude; float cloudAlpha; float atmosRadiusOuter; float atmosRadiusInner; } _baseUniforms;
    unsigned int _rendererOptionsChangeSequence;
    struct NUNIAegirPipelineConstants { void /* unknown type, blank encoding */ bloomRadius; void /* unknown type, blank encoding */ bloomStrength; void /* unknown type, blank encoding */ bloomThreshold; void /* unknown type, blank encoding */ sunDistance; void /* unknown type, blank encoding */ sunEquatorialRadius; void /* unknown type, blank encoding */ sunGlowRadiusScale; void /* unknown type, blank encoding */ sunExpMin; void /* unknown type, blank encoding */ sunColorRed; void /* unknown type, blank encoding */ sunColorGreen; void /* unknown type, blank encoding */ sunColorBlue; void /* unknown type, blank encoding */ earthLightPower; void /* unknown type, blank encoding */ earthSpecularPower; void /* unknown type, blank encoding */ earthSpecularStrength; void /* unknown type, blank encoding */ earthSpecularBreakup; void /* unknown type, blank encoding */ earthSurfaceAmbientStrength; void /* unknown type, blank encoding */ earthIlluminationRed; void /* unknown type, blank encoding */ earthIlluminationGreen; void /* unknown type, blank encoding */ earthIlluminationBlue; void /* unknown type, blank encoding */ earthIlluminationStrength; void /* unknown type, blank encoding */ earthCloudShadowStrength; void /* unknown type, blank encoding */ earthCloudShadowEaseFrom; void /* unknown type, blank encoding */ earthCloudShadowEaseTo; void /* unknown type, blank encoding */ earthCloudAmbientStrength; void /* unknown type, blank encoding */ earthCloudAlpha; void /* unknown type, blank encoding */ earthAtmosphereRed; void /* unknown type, blank encoding */ earthAtmosphereGreen; void /* unknown type, blank encoding */ earthAtmosphereBlue; void /* unknown type, blank encoding */ earthAtmosphereStrength; void /* unknown type, blank encoding */ earthAtmosphereGlowExpMin; void /* unknown type, blank encoding */ earthAtmosphereTerminatorEaseFrom; void /* unknown type, blank encoding */ earthAtmosphereTerminatorEaseTo; void /* unknown type, blank encoding */ lunaLightPower; void /* unknown type, blank encoding */ lunaSpecularPower; void /* unknown type, blank encoding */ lunaSpecularStrength; void /* unknown type, blank encoding */ lunaSurfaceAmbientStrength; } _pipelineConstants;
}

@property (readonly, nonatomic) NUNIAegirResourceManager *resourceManager;
@property (retain, nonatomic) id<NUNIRendererOptions> rendererOptions;

- (void)discard;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_updateStateWithScene:(id)a0 viewport:(struct NUNIViewport { int x0; int x1; })a1;
- (void)_updateBaseUniformsForViewport:(struct NUNIViewport { int x0; int x1; })a0;
- (void)_renderLocationDot:(id)a0 uniPtr:(struct NUNIAegirRenderUniforms { struct { void /* unknown type, empty encoding */ x0[3]; } x0; struct { void /* unknown type, empty encoding */ x0[3]; } x1; struct { void /* unknown type, empty encoding */ x0[4]; } x2; struct { void /* unknown type, empty encoding */ x0[4]; } x3; struct { void /* unknown type, empty encoding */ x0[4]; } x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; float x21; float x22; float x23; float x24; } *)a1 viewport:(struct NUNIViewport { int x0; int x1; })a2 renderEncoder:(id)a3;
- (void)_renderOffscreenBackgroundWithRenderEncoder:(id)a0 frameBufferIndex:(unsigned long long)a1;
- (void)_renderOffscreenBloomWithScene:(id)a0 viewport:(struct NUNIViewport { int x0; int x1; })a1 commandBuffer:(id)a2 frameBufferIndex:(unsigned long long)a3;
- (void)_renderOffscreenPostWithScene:(id)a0 viewport:(struct NUNIViewport { int x0; int x1; })a1 commandBuffer:(id)a2 frameBufferIndex:(unsigned long long)a3;
- (void)_renderOffscreenSceneWithScene:(id)a0 viewport:(struct NUNIViewport { int x0; int x1; })a1 commandBuffer:(id)a2 frameBufferIndex:(unsigned long long)a3 drawableTexture:(id)a4;
- (void)_renderRaytraceSpheroid:(id)a0 uniPtr:(struct NUNIAegirRenderUniforms { struct { void /* unknown type, empty encoding */ x0[3]; } x0; struct { void /* unknown type, empty encoding */ x0[3]; } x1; struct { void /* unknown type, empty encoding */ x0[4]; } x2; struct { void /* unknown type, empty encoding */ x0[4]; } x3; struct { void /* unknown type, empty encoding */ x0[4]; } x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; float x21; float x22; float x23; float x24; } *)a1 renderEncoder:(id)a2;
- (void)_renderSpriteSpheroid:(id)a0 uniPtr:(struct NUNIAegirRenderUniforms { struct { void /* unknown type, empty encoding */ x0[3]; } x0; struct { void /* unknown type, empty encoding */ x0[3]; } x1; struct { void /* unknown type, empty encoding */ x0[4]; } x2; struct { void /* unknown type, empty encoding */ x0[4]; } x3; struct { void /* unknown type, empty encoding */ x0[4]; } x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; float x21; float x22; float x23; float x24; } *)a1 renderEncoder:(id)a2;
- (id)contentMaskLayer;
- (id)getOrCreateUniformBufferforFrameBufferIndex:(unsigned long long)a0;
- (id)initWithPixelFormat:(unsigned long long)a0 textureSuffix:(id)a1 rendererStyle:(unsigned long long)a2;
- (void)purgeUnusedWithScene:(id)a0;
- (void)renderOffscreenWithScene:(id)a0 viewport:(struct NUNIViewport { int x0; int x1; })a1 commandBuffer:(id)a2;
- (void)renderWithScene:(id)a0 viewport:(struct NUNIViewport { int x0; int x1; })a1 commandBuffer:(id)a2 passDescriptor:(id)a3;
- (void)setContentMaskLayer:(id)a0;

@end
