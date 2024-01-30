@class NRFProcessor, NSString, NSDictionary, FigMetalContext, PanoramaAssemblyShaders, NSMutableArray;
@protocol MTLCommandQueue, MTLTexture;

@interface PanoramaAssemblyStage : NSObject <MetalImageBufferProcessor> {
    FigMetalContext *_metal;
    PanoramaAssemblyShaders *_shaders;
    unsigned long long _sliceWidth;
    unsigned long long _sliceHeight;
    int _direction;
    unsigned long long _stagingWidth;
    unsigned long long _stagingHeight;
    unsigned long long _sliceBufferAllocSize;
    unsigned long long _sliceBufferLength;
    struct { void /* unknown type, empty encoding */ x0[3]; } *_sliceHomographies;
    struct { void /* unknown type, empty encoding */ x0[3]; } *_atlasHomographies;
    id<MTLTexture> _projectiveGrid;
    NSMutableArray *_stagingBufferPool;
    NSMutableArray *_dirtyStagingBuffers;
    struct __CVBuffer { } *_nrfInputPixelBuffer;
    id<MTLTexture> _nrfInputLuma;
    id<MTLTexture> _nrfInputChroma;
    struct opaqueCMSampleBuffer { } *_nrfInputSampleBuffer;
    struct __CVBuffer { } *_nrfOutputPixelBuffer;
    id<MTLTexture> _nrfOutputLuma;
    id<MTLTexture> _nrfOutputChroma;
    id<MTLTexture> _outputBoundLuma;
    id<MTLTexture> _outputBoundChroma;
    id<MTLTexture> _outputMask;
    struct { void /* unknown type, empty encoding */ columns[3]; } _outputAtlasHomography;
}

@property (nonatomic) struct __CVBuffer { } *output;
@property (nonatomic) int assemblyMode;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropRect;
@property (retain, nonatomic) NRFProcessor *nrfProcessor;
@property (retain, nonatomic) id<MTLCommandQueue> metalCommandQueue;
@property (retain, nonatomic) NSDictionary *tuningParameters;
@property (retain, nonatomic) NSDictionary *cameraInfoByPortType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)prewarm;
- (int)resetState;
- (int)purgeResources;
- (int)setDirection:(int)a0;
- (int)process;
- (int)finishProcessing;
- (id)initWithContext:(id)a0;
- (int)setup;
- (void).cxx_destruct;
- (int)prepareToProcess:(unsigned int)a0;
- (void)dealloc;
- (int)addSlice:(struct __CVBuffer { } *)a0 metadata:(id)a1 sliceHomography:(struct { void /* unknown type, empty encoding */ x0[3]; })a2 stitchingMask:(id)a3 motionCue:(id)a4 roi:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5 sliceType:(int)a6;
- (int)prepareToProcessPanoWidth:(unsigned long long)a0 panoHeight:(unsigned long long)a1;
- (int)getMaskAsBuffer:(char **)a0 widthOut:(unsigned long long *)a1 heightOut:(unsigned long long *)a2;
- (int)_bindOutput;
- (int)clearStagingBuffer:(id)a0 withEncoder:(id)a1;
- (int)_addStagingBuffer;
- (struct { void /* unknown type, empty encoding */ x0[3]; })_stagingHomography;
- (int)prepareToProcessSliceWidth:(unsigned long long)a0 sliceHeight:(unsigned long long)a1 stagingWidth:(unsigned long long)a2 stagingHeight:(unsigned long long)a3;
- (void)addHomogToStaging:(struct { void /* unknown type, empty encoding */ x0[3]; })a0;
- (struct { void /* unknown type, empty encoding */ x0[3]; })panoHomography;
- (int)addStagingToOutput:(id)a0;
- (int)addSliceToProjectiveGrid:(struct { void /* unknown type, empty encoding */ x0[3]; })a0 atlasHomography:(struct { void /* unknown type, empty encoding */ x0[3]; })a1 panoHomography:(struct { void /* unknown type, empty encoding */ x0[3]; })a2 encoder:(id)a3 sliceType:(int)a4;
- (int)addSliceToStagingBuffer:(id)a0 sliceLuma:(id)a1 sliceChroma:(id)a2 sliceMask:(id)a3 sliceGlobalHomography:(struct { void /* unknown type, empty encoding */ x0[3]; })a4 encoder:(id)a5;
- (int)renderDirtyStagingBuffers;

@end
