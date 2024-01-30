@interface MovementStateEstimatorOptions : NSObject

@property (nonatomic) unsigned long long velocityAverageWindowSize;
@property (nonatomic) float movingToStationaryTransitionThresholdSpeed;
@property (nonatomic) float movingToStationaryTransitionThresholdWaitSec;

- (id)init;

@end
