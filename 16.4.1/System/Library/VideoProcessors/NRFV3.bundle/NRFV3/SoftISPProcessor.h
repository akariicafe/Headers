@class NSMutableArray, NSSet, NSDictionary, CMIExternalMemoryResource, NSString, FigMetalContext, SoftISPConfig;
@protocol NSFastEnumeration, SoftISPProcessorDelegate, SoftISPStage, MTLCommandQueue;

@interface SoftISPProcessor : NSObject <MetalImageBufferProcessor> {
    FigMetalContext *_metal;
    unsigned long long _allocatorForceSize;
    BOOL _allocatorWireMemory;
    unsigned long long _allocatorSize;
    SoftISPConfig *_currentConfig;
    id<SoftISPStage> _currentPipeline;
    unsigned short _currentSensorID;
    int _currentPipelineType;
    NSDictionary *_pipelines;
    NSMutableArray *_inputFrames;
}

@property (class, readonly) NSSet *allSupportedPipelineTypes;

@property (retain, nonatomic) id<NSFastEnumeration> supportedPipelineTypes;
@property (weak, nonatomic) id<SoftISPProcessorDelegate> delegate;
@property (retain, nonatomic) NSDictionary *outputCompressionLevelByPipeline;
@property (readonly, nonatomic) int pipelineType;
@property (retain, nonatomic) id<MTLCommandQueue> metalCommandQueue;
@property (readonly, nonatomic) BOOL supportsExternalMemoryResource;
@property (retain, nonatomic) CMIExternalMemoryResource *externalMemoryResource;
@property (retain, nonatomic) NSDictionary *tuningParameters;
@property (retain, nonatomic) NSDictionary *cameraInfoByPortType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (BOOL)_isPipelineTypeValid:(int)a0;

- (int)prewarm;
- (int)resetState;
- (void)finishScheduling;
- (int)setup;
- (int)finishProcessing;
- (int)prepareToProcess:(unsigned int)a0;
- (int)purgeResources;
- (int)process;
- (id)init;
- (void)_readDefaults;
- (void).cxx_destruct;
- (unsigned int)auxiliaryPixelFormatForPipeline:(int)a0 auxiliaryType:(int)a1 inputPixelFormat:(unsigned int)a2;
- (int)addFrame:(struct opaqueCMSampleBuffer { } *)a0 uniqueID:(unsigned long long)a1 processingOptions:(id)a2;
- (id)externalMemoryDescriptorForConfiguration:(id)a0;
- (unsigned int)outputPixelFormatForPipeline:(int)a0 inputPixelFormat:(unsigned int)a1;
- (int)prepareToProcess:(int)a0 prepareDescriptor:(id)a1;
- (int)_processInputFrame:(id)a0 isFinalPass:(BOOL)a1;
- (void)_clearInputFrames;
- (int)_outputCompressionLevelForPipeline:(int)a0;
- (int)_processInputFrames:(id)a0 isFinalPass:(BOOL)a1;
- (int)addFrame:(struct opaqueCMSampleBuffer { } *)a0 uniqueID:(unsigned long long)a1;
- (union { struct { unsigned int x0; unsigned int x1; } x0; })auxiliaryPixelBufferSizeForPipeline:(int)a0 auxiliaryType:(int)a1 inputPixelFormat:(unsigned int)a2 width:(unsigned int)a3 height:(unsigned int)a4;
- (unsigned long long)outputDownscaleFactorForPipeline:(int)a0;
- (int)processIfPossible;
- (int)setReferenceFrameByUniqueID:(unsigned long long)a0;

@end
