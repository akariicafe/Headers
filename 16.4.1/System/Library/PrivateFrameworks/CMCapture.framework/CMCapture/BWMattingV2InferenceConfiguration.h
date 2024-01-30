@class NSDictionary;
@protocol MTLCommandQueue;

@interface BWMattingV2InferenceConfiguration : BWInferenceConfiguration

@property (retain, nonatomic) NSDictionary *sensorConfigurationsByPortType;
@property (nonatomic) unsigned int enabledMattes;
@property (nonatomic) int tuningConfiguration;
@property (nonatomic) float mainImageDownscalingFactor;
@property (nonatomic) BOOL depthDataDeliveryEnabled;
@property (nonatomic) BOOL submitWithoutSynchronization;
@property (retain, nonatomic) id<MTLCommandQueue> metalCommandQueue;
@property (retain, nonatomic) NSDictionary *sdofRenderingTuningParameters;

+ (id)inputAttachedMediaKeyForMattingOutputType:(unsigned int)a0;
+ (BOOL)isMattingOutputAttachedMediaKey:(id)a0;
+ (unsigned int)mattingOutputTypeForAttachedMediaKey:(id)a0;

- (void)dealloc;

@end
