@class NSArray, NSDictionary, BWVideoFormat, FigStillImageSharedProcessingResources, NSString;
@protocol MTLCommandQueue;

@interface BWNRFProcessorControllerConfiguration : BWStillImageProcessorConfiguration <BWNoiseReductionAndFusionProcessorControllerConfiguration>

@property (retain, nonatomic) NSArray *sensorConfigurations;
@property (nonatomic) BOOL deferredProcessingEnabled;
@property (retain, nonatomic) id<MTLCommandQueue> metalCommandQueue;
@property (retain, nonatomic) BWVideoFormat *inputFormat;
@property (retain, nonatomic) BWVideoFormat *outputFormat;
@property (nonatomic) BOOL fusionEnabled;
@property (nonatomic) BOOL lowLightFusionEnabled;
@property (nonatomic) BOOL deepFusionEnabled;
@property (nonatomic) BOOL deepFusionWaitForProcessingToFinish;
@property (nonatomic) BOOL depthDataDeliveryEnabled;
@property (nonatomic) BOOL alwaysAllowModifyingInputBuffers;
@property (nonatomic) unsigned int figThreadPriority;
@property (nonatomic) BOOL semanticRenderingEnabled;
@property (nonatomic) BOOL demosaicedRawEnabled;
@property (nonatomic) unsigned int demosaicedRawPixelFormat;
@property (retain, nonatomic) NSDictionary *rawColorCalibrationsByPortType;
@property (retain, nonatomic) NSDictionary *rawLensShadingCorrectionCoefficientsByPortType;
@property (nonatomic) float gainMapMainImageDownscalingFactor;
@property (retain, nonatomic) FigStillImageSharedProcessingResources *sharedResources;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;

@end
