@interface SISceneSegmentationNetworkConfiguration : SINetworkConfiguration

@property (nonatomic) long long networkModeEnum;
@property (nonatomic) long long modelConfig;
@property (nonatomic) BOOL isResampleOutput;
@property (nonatomic) float uncertaintyThreshold;

- (id)init;

@end
