@class NSDictionary;
@protocol MTLCommandQueue;

@interface BWMattingV2InferenceConfiguration : BWInferenceConfiguration

@property (retain, nonatomic) NSDictionary *sensorConfigurationsByPortType;
@property (nonatomic) unsigned int enabledMattes;
@property (nonatomic) int tuningConfiguration;
@property (nonatomic) float mainImageDownscalingFactor;
@property (nonatomic) BOOL depthDataDeliveryEnabled;
@property (nonatomic) BOOL submitWithoutSynchronization;
@property (nonatomic) id<MTLCommandQueue> metalCommandQueue;

- (void)dealloc;

@end
