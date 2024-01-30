@class NSDictionary, NSString, BWVideoFormat;
@protocol MTLCommandQueue;

@interface BWUBProcessorControllerConfiguration : BWStillImageProcessorControllerConfiguration <BWNoiseReductionAndFusionProcessorControllerConfiguration>

@property (retain, nonatomic) NSDictionary *sensorConfigurationsByPortType;
@property (nonatomic) BOOL deferredProcessingEnabled;
@property (retain, nonatomic) id<MTLCommandQueue> metalCommandQueue;
@property (retain, nonatomic) BWVideoFormat *inputFormat;
@property (retain, nonatomic) BWVideoFormat *outputFormat;
@property (nonatomic) struct { int width; int height; } ultraHighResolutionDimensions;
@property (nonatomic) BOOL quadraSupportEnabled;
@property (nonatomic) BOOL fusionEnabled;
@property (nonatomic) BOOL lowLightFusionEnabled;
@property (nonatomic) BOOL deepFusionEnabled;
@property (retain, nonatomic) BWVideoFormat *deepFusionInputFormat;
@property (nonatomic) BOOL deepFusionWaitForProcessingToFinish;
@property (nonatomic) BOOL depthDataDeliveryEnabled;
@property (nonatomic) BOOL alwaysAllowModifyingInputBuffers;
@property (nonatomic) unsigned int figThreadPriority;
@property (nonatomic) int greenGhostMitigationVersion;
@property (nonatomic) BOOL demosaicedRawEnabled;
@property (nonatomic) unsigned int demosaicedRawPixelFormat;
@property (retain, nonatomic) NSDictionary *rawColorCalibrationsByPortType;
@property (retain, nonatomic) NSDictionary *rawLensShadingCorrectionCoefficientsByPortType;
@property (nonatomic) float gainMapMainImageDownscalingFactor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;

@end
