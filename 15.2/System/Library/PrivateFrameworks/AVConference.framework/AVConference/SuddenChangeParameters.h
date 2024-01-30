@interface SuddenChangeParameters : NSObject

@property (nonatomic) int margin;
@property (nonatomic) int minSamplesCount;
@property (nonatomic) int minSamplesCountFastBandwidthEstimation;
@property (nonatomic) int minMarginRequired;
@property (nonatomic) double percentage;
@property (nonatomic) double durationThresholdUpward;
@property (nonatomic) double durationThresholdDownward;

@end
