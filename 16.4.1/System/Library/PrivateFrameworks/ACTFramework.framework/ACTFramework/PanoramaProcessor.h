@class PanoramaAssemblyStage, PanoramaGyroStage, NSDictionary, PanoramaPreviewOutput, NSObject, PanoramaParallaxStage, FigMetalContext, NSString, ACTPanoGPUDownscaler, NRFProcessor, PanoramaStitchingStage, NSNumber, PanoramaRegistrationStage, PanoramaOutput;
@protocol MTLCommandQueue, PanoRegistrationProvider, OS_dispatch_queue;

@interface PanoramaProcessor : NSObject <MetalImageBufferProcessor> {
    FigMetalContext *_metal;
    PanoramaRegistrationStage *_registrationStage;
    PanoramaParallaxStage *_parallaxStage;
    PanoramaStitchingStage *_stitchingStage;
    PanoramaAssemblyStage *_assemblyStage;
    PanoramaGyroStage *_gyroStage;
    NSObject<OS_dispatch_queue> *_processingQueue;
    ACTPanoGPUDownscaler *_downscaler;
    struct __CVBuffer { } *_toACTFramework;
    struct __CVPixelBufferPool { } *_downsampledRegistrationPool;
    struct __CVPixelBufferPool { } *_inputSlicePool;
    unsigned long long _poolOccupancy;
    BOOL _prevFrameDropped;
    unsigned long long _sliceWidth;
    unsigned long long _sliceHeight;
    int _direction;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _cropRect;
    struct { unsigned long long frameWidth; unsigned long long frameHeight; BOOL enableTranslationCorrection; int movingAverageFilterSize; int referenceMeanStartingFrame; float atlasTranslationShiftLowThreshold; float atlasTranslationShiftHighThreshold; float atlasTranslationCorrectionStrength; int NRFversion; } _panoramaParams;
    struct { void /* unknown type, empty encoding */ columns[3]; } _accumulatedInitialHomography;
    struct { void /* unknown type, empty encoding */ columns[3]; } _currentInitialHomography;
    struct OpaqueVTPixelTransferSession { } *_vtSession;
    NSDictionary *_cameraSetupPlist;
    NSDictionary *_lastMetadata;
    NRFProcessor *_nrfProcessor;
}

@property (readonly, nonatomic) id<MTLCommandQueue> commandQueue;
@property (retain, nonatomic) id<PanoRegistrationProvider> registrationProvider;
@property (nonatomic) BOOL doParallaxCorrection;
@property (retain, nonatomic) PanoramaPreviewOutput *previewOutput;
@property (retain, nonatomic) PanoramaOutput *output;
@property (retain, nonatomic) NSNumber *writeSlicesToDisc;
@property (readonly, nonatomic) NSNumber *previewScale;
@property (readonly, nonatomic) NSNumber *maxWidth;
@property (readonly, nonatomic) NSNumber *previewWidth;
@property (readonly, nonatomic) NSNumber *previewHeight;
@property (readonly, nonatomic) NSNumber *defaultDirection;
@property (readonly, nonatomic) NSNumber *defaultRegistrationMethod;
@property (readonly, nonatomic) NSNumber *defaultPredictionMethod;
@property (readonly, nonatomic) NSNumber *defaultPrediction;
@property (readonly, nonatomic) NSNumber *defaultFallback;
@property (readonly, nonatomic) NSNumber *defaultBlendingConfig;
@property (readonly, nonatomic) unsigned long long nbFramesReceived;
@property (readonly, nonatomic) unsigned long long nbFramesSkipped;
@property (readonly, nonatomic) unsigned long long nbFramesDropped;
@property (retain, nonatomic) id<MTLCommandQueue> metalCommandQueue;
@property (retain, nonatomic) NSDictionary *tuningParameters;
@property (retain, nonatomic) NSDictionary *cameraInfoByPortType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)prewarm;

- (int)prewarm;
- (id)init:(struct { unsigned long long x0; unsigned long long x1; BOOL x2; int x3; int x4; float x5; float x6; float x7; int x8; })a0;
- (int)setDirection:(int)a0;
- (int)resetState;
- (int)setup;
- (int)finishProcessing;
- (int)prepareToProcess:(unsigned int)a0;
- (void)dealloc;
- (int)purgeResources;
- (id)metalContext;
- (int)process;
- (void).cxx_destruct;
- (int)_addLastSlice;
- (int)_commonInitWithContext:(id)a0 NRFversion:(int)a1;
- (int)_createDummyOutput;
- (void)_setPreviousFrameDroppedFlag:(struct opaqueCMSampleBuffer { } *)a0 dropped:(BOOL)a1;
- (int)addFrame:(struct opaqueCMSampleBuffer { } *)a0 registrationCallback:(id /* block */)a1;
- (int)addFrameForStitching:(struct opaqueCMSampleBuffer { } *)a0 withInitialHomography:(struct { void /* unknown type, empty encoding */ x0[3]; })a1 registrationCallback:(id /* block */)a2;
- (int)addFrameWithoutStitching:(struct opaqueCMSampleBuffer { } *)a0 registrationCallback:(id /* block */)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })autocropMask;
- (id)encodedResult;
- (int)getMaskAsBuffer:(char **)a0 widthOut:(unsigned long long *)a1 heightOut:(unsigned long long *)a2;
- (void)getRegistrationWidth:(unsigned long long *)a0 height:(unsigned long long *)a1;
- (int)prepareToProcess_PanoSpecific:(unsigned int)a0 frameWidth:(unsigned long long)a1 frameHeight:(unsigned long long)a2;
- (struct { void /* unknown type, empty encoding */ x0[3]; })refineInitialHomography:(struct { void /* unknown type, empty encoding */ x0[3]; })a0;
- (int)setPanoramaParameters:(struct { unsigned long long x0; unsigned long long x1; BOOL x2; int x3; int x4; float x5; float x6; float x7; int x8; })a0;

@end
