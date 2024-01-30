@class BWTiledEspressoInferenceConfiguration, NSSet, NSArray, NSString, BWInferenceVideoRequirement, BWEspressoInferenceProvider, NSObject;
@protocol BWInferenceResourceProvider, BWInferenceSubmittable, BWInferencePropagatable, BWInferenceExtractable, OS_dispatch_queue, BWInferenceExecutable;

@interface BWTiledEspressoInferenceProvider : NSObject <BWInferenceProvider, BWInferenceSubmittable, BWInferencePropagatable> {
    NSArray *_inputVideoRequirements;
    BWInferenceVideoRequirement *_outputVideoRequirement;
    NSArray *_tileInputVideoRequirements;
    NSArray *_tileInputBindingNames;
    BWInferenceVideoRequirement *_tileOutputVideoRequirement;
    NSArray *_additionalVideoRequirements;
    void /* unknown type, empty encoding */ _maxTileCount;
    BWEspressoInferenceProvider *_espressoProvider;
    NSObject<OS_dispatch_queue> *_espressoWorkQueue;
    BWTiledEspressoInferenceConfiguration *_configuration;
    id<BWInferenceResourceProvider> _resourceProvider;
}

@property (readonly, nonatomic) int executionTarget;
@property (readonly, copy, nonatomic) NSSet *preventionReasons;
@property (readonly, nonatomic) NSArray *inputVideoRequirements;
@property (readonly, nonatomic) NSArray *outputVideoRequirements;
@property (readonly, nonatomic) NSArray *cloneVideoRequirements;
@property (readonly, nonatomic) NSArray *inputMetadataRequirements;
@property (readonly, nonatomic) NSArray *outputMetadataRequirements;
@property (readonly, nonatomic) unsigned int allowedPixelBufferCompressionDirection;
@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) id<BWInferenceExecutable> executable;
@property (readonly, nonatomic) id<BWInferenceSubmittable> submittable;
@property (readonly, nonatomic) id<BWInferenceExtractable> extractable;
@property (readonly, nonatomic) id<BWInferencePropagatable> propagatable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL allowsAsyncPropagation;

+ (void)initialize;
+ (id)videoFormatWithPixelFormat:(SEL)a0 size:(unsigned int)a1;
+ (id)videoFormatWithPixelFormat:(SEL)a0 size:(unsigned int)a1 includesInvalidContent:(BOOL)a2;

- (void).cxx_destruct;
- (void)dealloc;
- (id)newStorage;
- (int)prewarmUsingLimitedMemory:(BOOL)a0;
- (int)prepareForSubmissionWithWorkQueue:(id)a0;
- (int)submitForSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 usingStorage:(id)a1 withSubmissionTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 workQueue:(id)a3 completionHandler:(id /* block */)a4;
- (void)propagateInferenceResultsToInferenceDictionary:(id)a0 usingStorage:(id)a1 inputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a2 propagationSampleBuffer:(struct opaqueCMSampleBuffer { } *)a3;
- (id)initWithConfiguration:(id)a0 inputVideoRequirements:(id)a1 outputVideoRequirement:(id)a2 resourceProvider:(id)a3;
- (int)loadNetworkWithURL:(SEL)a0 configName:(id)a1 inferenceType:(id)a2 maxTileCount:(int)a3 inputFormatsByBindingName:(id)a4 outputBindingName:(id)a5 outputVideoFormat:(id)a6 additionalVideoRequirements:(id)a7;
- (int)createInputTileFor:(SEL)a0 to:(id)a1 withInputs:(struct __CVBuffer { } *)a2 atPosition:(id)a3 cmdBuffer:(id *)a4;
- (int)writeOutputTile:(SEL)a0 to:(struct __CVBuffer { } *)a1 withAdditionalPixelBuffers:(struct __CVBuffer { } *)a2 withInputTilePixelBuffers:(id)a3 withInputFullPixelBuffers:(id)a4 atPosition:(id)a5 cmdBuffer:(id *)a6;
- (int)propagateInferenceResultsFrom:(struct __CVBuffer { } *)a0 to:(struct opaqueCMSampleBuffer { } *)a1;
- (int)purgeIntermediateResources;
- (int)preProcessOutputBuffer:(struct __CVBuffer { } *)a0;
- (int)submitForSampleBuffer:(SEL)a0 usingStorage:(struct opaqueCMSampleBuffer { } *)a1 withSubmissionTime:(id)a2 workQueue:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 completionHandler:(id)a4 currentTileCount:(id /* block */)a5;

@end
