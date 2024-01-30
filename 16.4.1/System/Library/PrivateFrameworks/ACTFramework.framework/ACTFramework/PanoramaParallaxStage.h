@class NSString, NSDictionary, FigMetalContext, PanoramaParallaxStageShaders, NSMutableArray;
@protocol MTLTexture, MTLCommandQueue;

@interface PanoramaParallaxStage : NSObject <MetalImageBufferProcessor> {
    FigMetalContext *_metal;
    PanoramaParallaxStageShaders *_shaders;
    id<MTLTexture> _warpedLuma;
    id<MTLTexture> _warpedChroma;
    NSMutableArray *_preShiftPyramid;
}

@property struct __CVBuffer { } *warpedFrame;
@property (retain) id<MTLTexture> warpedMask;
@property (retain, nonatomic) id<MTLCommandQueue> metalCommandQueue;
@property (retain, nonatomic) NSDictionary *tuningParameters;
@property (retain, nonatomic) NSDictionary *cameraInfoByPortType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)prewarm;
- (int)setDirection:(int)a0;
- (int)resetState;
- (int)setup;
- (int)finishProcessing;
- (int)prepareToProcess:(unsigned int)a0;
- (void)dealloc;
- (int)purgeResources;
- (int)process;
- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (int)_allocateShiftPyramidLike:(id)a0;
- (int)_applyWarpToSlice:(id)a0 chroma:(id)a1 mask:(id)a2 preFlow:(id)a3 warpedLuma:(id)a4 warpedChroma:(id)a5 warpedMask:(id)a6;
- (int)_buildShiftPyramid;
- (int)_computePreShift:(id)a0 homography:(struct { void /* unknown type, empty encoding */ x0[3]; })a1;
- (int)addSlice:(struct __CVBuffer { } *)a0 mask:(id)a1 homography:(struct { void /* unknown type, empty encoding */ x0[3]; })a2 residualFlow:(struct __CVBuffer { } *)a3;
- (int)prepareToProcess:(unsigned long long)a0 sliceHeight:(unsigned long long)a1;

@end
